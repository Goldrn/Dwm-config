#!/bin/sh


feh --bg-fill ~/Downloads/4menn7vf9ug31.webp
setxkbmap us -variant 'colemak_dh'
dwmblocks &
picom &
blueman-applet  &
nm-applet &

while true; do

	dwm 2> ~/.dwm.log
done
