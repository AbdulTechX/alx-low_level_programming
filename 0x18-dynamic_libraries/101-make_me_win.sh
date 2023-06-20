#!/bin/bash
wget -P /tmp https://github.com/sidneyriffic/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/puts1.so
export LD_PRELOAD=/tmp/puts1.so
