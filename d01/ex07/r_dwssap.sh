cat /etc/passwd | grep -v "#" | awk 'NR%2!=0' | sed 's/:.*//' | rev | sed -n "$FT_LINE1,$FT_LINE2 p" | paste -s -d, - | sed 's/$/./'
