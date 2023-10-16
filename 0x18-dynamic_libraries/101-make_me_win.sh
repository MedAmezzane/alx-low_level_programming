#!/bin/bash
wget -P /tmp/ https://raw.github.com/MedAmezzane/alx-low_level_programming/master/0x18-dynamic_libraries/nrand.so
export LD_PRELOAD=/tmp/nrand.so