#!/bin/sh

backtitle="EWindow Configuration - Audio"
_temp=/dev/shm/menuconfig_temp

export LC_ALL=C

config_volume() {
    # Get current volume

    default_sink="$(get_default_sinksource sink)"

    volume=$(pactl list sinks | awk -F " " -v sink="$default_sink" '
        BEGIN{sink=sink}
        /Name: /{$1 = ""; sub(" ", ""); n=$0}
        /^[ \t]*Volume: /{if (n == sink) {gsub("[%,]", ""); print $5}}
    ')

    #volume=$(amixer sget Master | awk -F "[][]" '/Playback/{ sub("%", ""); print $2 }' | tail -n 1 )
    
    dialog --rangebox "              left/right cursor movement to select a digit to modify

              +/-  characters to increment/decrement the digit by one

              0 through 9
                   to set the digit to the given value

              Some keys are also recognized in all cursor positions:

              home/end
                   set the value to its maximum or minimum

              pageup/pagedown
                   increment the value so that the slider moves by one column
" 15 90 \
        0 200 $volume \
        2>$_temp

    volume=$(cat $_temp | awk '{sub(" ", ""); print $0 "%"}')
    pactl set-sink-volume "$default_sink" $volume
    #amixer --quiet sset Master "$volume"
}

get_default_sinksource() {
    # Get currently selected sink/source
    pactl info | grep -i "Default $1" | cut -d \  -f 3
}

pactl_list() {
    current=$(get_default_sinksource $1)

    # Format list of sources/sinks into dialog argument list
    pactl list "$1"s |
        awk -v "current=$current" 'BEGIN {current=current}
            /Name:/ {$1=""; sub(/^[ \t]+/, ""); n=$0}
            /Description:/ {$1=""; sub(/^[ \t]+/, ""); printf("%s \t%s \t%s\t", n, $0,
                    n==current ? "on" : "off")}'
        
}

choose_sink() {
    # Change internal field separator, to control argument lists for dialog
    OIFS="$IFS"
    IFS=$(printf '\t')
    
    dialog --backtitle "$backtitle" \
           --radiolist "Please select an Audio Sink" 15 90 18 \
           $(pactl_list sink) \
           2>$_temp

    IFS="$OIFS"
    
    pactl set-default-sink $(cat $_temp)
}

choose_source() {
    OIFS="$IFS"
    IFS=$(printf '\t')
    
    dialog --backtitle "$backtitle" \
           --radiolist "Please select an Audio Source" 15 90 18 \
           $(pactl_list source) \
           2>$_temp

    IFS="$OIFS"
    
    pactl set-default-source $(cat $_temp)
}


audio_main() {
    dialog --backtitle "$backtitle" --title "Audio Configuration" \
        --cancel-label "Quit" \
        --menu "Move using [UP] [DOWN], [Enter] to select"  17 60 10\
        volume "Change Master Output Volume" \
        source "Select Audio Source" \
        sink "Select Audio Sink" \
        alsamixer "Advanced Volume Control" \
        quit "Back to Main Menu" \
        2>$_temp

    case $(cat $_temp) in
        volume) config_volume;;
        source) choose_source;;
        sink) choose_sink;;
        alsamixer) alsamixer;;
        quit) return 0;;
    esac

    audio_main
}

audio_main
