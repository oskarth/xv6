/bin/ls > y
/bin/cat < y | /bin/sort | /bin/uniq | /bin/wc > y1
/bin/cat y1
/bin/rm y1
/bin/ls |  /bin/sort | /bin/uniq | /bin/wc
/bin/rm y
