ldapsearch -Q "uid=*bon*" | grep "cn: " | awk '{ print $3 }' | wc -l | awk '{$1=$1};1'
