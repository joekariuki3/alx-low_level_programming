#!/bin/bash
wget https://raw.githubusercontent.com/joekariuki3/alx-low_level_programming/master/0x18-dynamic_libraries/libtime.so libtime.so
export LD_PRELOAD="./libtime.so"
