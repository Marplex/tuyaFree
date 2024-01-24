#!/bin/bash
cmake --build build --target tuyaFree.bin
mkdir -p ./out && cp ./build/src/tuyaFree/tuyaFree.bin ./out/tuyaFree.bin