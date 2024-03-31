#!/bin/bash

cp libhack.so /tmp/libhack.so
LD_PRELOAD=/tmp/libhack.so ./gm 9 8 10 24 75 9
rm /tmp/libhack.so

