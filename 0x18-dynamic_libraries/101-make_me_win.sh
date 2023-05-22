#!/bin/bash
wget -qP /tmp/ https://github.com/DavidMachari62/alx-low_level_programming/raw/master/0x18-dynamic_libraries/new_mole.so
export LD_PRELOAD="/tmp/new_mole.so"
