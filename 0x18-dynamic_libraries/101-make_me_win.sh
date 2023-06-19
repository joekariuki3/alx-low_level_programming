#!/bin/bash
wget -P .. https://github.com/joekariuki3/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtime.so
LD_PRELOAD="$PWD/../libtime.so"
