#!/bin/bash
cmake -DSDK_PREFIX=$(pwd)/sdk -DTOOLCHAIN_PREFIX=/opt/tc32 -B build -S .