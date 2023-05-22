#!/bin/bash
wget -O /tmp/nrandom.so https://github.com/Nicholas2023/alx-low_level_programming/blob/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
