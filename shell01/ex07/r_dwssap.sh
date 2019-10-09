cat /etc/passwd | grep -v \# | sed -n 'n;p' | rev | cut -d ':' -f 7 | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | awk 1 ORS=', ' | rev | sed 's/ ,/./' | rev | tr -d '\n'
