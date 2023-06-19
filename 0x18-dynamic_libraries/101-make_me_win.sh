#!/bin/bash
wget https://github.com/joekariuki3/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtime.so libtime.so
export LD_PRELOAD="./libtime.so"
