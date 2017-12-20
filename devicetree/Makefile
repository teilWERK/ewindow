all: gpio-button-key.dtbo

%.dtbo: %.dtso
	dtc -@ -I dts -O dtb $< -o $@
