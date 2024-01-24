#!/bin/bash
SDK_PATH="sdk"

if [ ! -f "zigbee_sdk.zip" ]; then
    wget http://wiki.telink-semi.cn/tools_and_sdk/Zigbee/Zigbee_SDK.zip -O zigbee_sdk.zip
fi

mkdir -p $SDK_PATH
unzip zigbee_sdk.zip -d ./$SDK_PATH
rm -rf ./$SDK_PATH/doc && rm -rf ./$SDK_PATH/Tools
mv ./$SDK_PATH/tl_zigbee_sdk/* ./$SDK_PATH