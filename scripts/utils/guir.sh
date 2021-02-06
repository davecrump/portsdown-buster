#! /bin/bash

# Run gui

cd /home/pi
sudo killall rpidatvgui >/dev/null 2>/dev/null
reset
sudo killall fbcp >/dev/null 2>/dev/null
fbcp &

/home/pi/rpidatv/scripts/scheduler.sh
