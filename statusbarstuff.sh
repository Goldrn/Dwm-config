#!/usr/bin/env bash

# Change this depending on your battery in /sys/class/power_supply/
battery="BATT";

has_battery() {
    if [ -d /sys/class/power_supply/$battery ]; then
        return 0;
    fi
    return 1;
}
get_battery_status() {
    echo ""$icon" "$(get_charge)"%"
}

get_charging_status() {
    cat "/sys/class/power_supply/$battery/status"
}

get_charge() {
    cat "/sys/class/power_supply/$battery/capacity"
}

get_datetime() {
    date +"📅 %a %d %b %Y | 🕓 %I:%M %p %Z"
}

get_status() {

    echo "$(get_battery_status) $(get_datetime)";
}

while true
do
    xsetroot -name "$(get_status)";
    sleep 1m;
done
