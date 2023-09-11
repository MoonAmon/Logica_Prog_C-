#!/bin/bash
# Description: change keybord layout

setxkbmap -option ctrl:nocaps
xcape -e 'Control_L=Escape'
echo "keybord layout changed"
