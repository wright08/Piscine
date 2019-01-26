ldapsearch "uid=$(whoami)" | grep "dn: " | cut -c 5-
