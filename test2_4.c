1. find /home -name "*.h"
2. grep -cr "main()" ~
3.1 echo | grep -E "^[0|+359]8[789]???????$" phones.info
3.2 grep -E -v -o "^[0|+359]8[789]???????$" phones.info | wc -l
3.3 cat phones.info | grep -E "^*7*$"  > phones.vivacom.data
