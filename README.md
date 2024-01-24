<h1 align="center">tuyaFree</h1>
<p align="center">
Environment for building firmware for Zigbee TeLink Tuya devices.
<br>Inspired by <a href="https://github.com/doctor64/tuyaZigbee">doctor64/tuyaZigbee</a>
</p>
<p align="center">
  <a href="https://github.com/marplex/tuyaFree/blob/main/LICENSE"><img alt="License" src="https://img.shields.io/github/license/marplex/tuyaFree"/></a>
  <a href="https://github.com/Marplex"><img alt="Github" src="https://img.shields.io/static/v1?label=GitHub&message=marplex&color=005cb2"/></a>
</p>

# About
This is a work in progress.

The goal of this project is to create a stable and developer friendly environment for building custom Zigbee firmwares for Tuya devices.
I will continue this by developing a firmware for the **TS0004** [in-wall zigbee mini switches](https://www.aliexpress.us/item/1005005534030750.html) adding support for interlocking and inching.

# Supported devices
Many Tuya devices come with `ZT2S` or `ZTU` modules. They all use the "Z2" RF chip which is based on the supported `TLSR8258`. Please refer to [doctor64/tuyaZigbee](https://github.com/doctor64/tuyaZigbee/tree/master#is-my-device-supported) for additional info.


### TS0004
This mini switch uses the ZT2S and ZTU modules depending on the supported channels.

- **ZT2S** for 1ch/2ch
- **ZTU** for 3ch/4ch

I have reverse engineered the board wirings of the ZTU 4ch version. The mapping is available at [boards/board_ztu_TS0004_4ch.h](src/tuyaFree/boards/board_ztu_TS0004_4ch.h)

# Prepare toolchain and SDK
Download and prepare the **Linux toolchain** for Telink chips.
```bash
#Download toolchain
wget http://shyboy.oss-cn-shenzhen.aliyuncs.com/readonly/tc32_gcc_v2.0.tar.bz2

#Extract to /opt
sudo tar -xvjf tc32_gcc_v2.0.tar.bz2 -C /opt/
```

Automatically download and prepare the **TelinkSDK**
```bash
./install.sh
```

# Compile
Configure the build and compile the project. The build script will output the `tuyaFree.bin` file directly in the root folder.
```bash
#Configure
./configure.sh

#Build
./build.sh
```