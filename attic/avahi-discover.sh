
function filter() {
   while read data; do
      echo "$data"
   done
}

#avahi-browse -rpt _sipuri._udp | grep = | grep IPv4 | grep tap0 | cut -d \; -f 10
avahi-browse -art --no-db-lookup | grep tap0  | filter
