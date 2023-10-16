#!/bin/bash
wget -q -O /tmp/nrand.so https://github.com/MedAmezzane/alx-low_level_programming/blob/master/0x18-dynamic_libraries/nrand.so
export LD_PRELOAD=/tmp/nrand.so