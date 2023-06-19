#!/bin/bash
curl "https://github.com/joekariuki3/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtime.so" --output libtime.so
export LD_PRELOAD=./libtime.so
