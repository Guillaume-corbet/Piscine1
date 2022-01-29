#!/bin/bash

cut -d: -f 1 | sed '1~2d' | rev | sort -r | sed -n "$MY_LINE1,$MY_LINE2 p" | tr '\n' ',' | sed -e 's/,/, /g' | sed 's/\(.*\),/\1./' | sed 's/\(.*\) /\1\n/'
