# Hardware Development Kit
[![Docs](https://img.shields.io/badge/docs-tidbyt.dev-blue?style=flat-square)](https://tidbyt.dev)
[![Build Status](https://img.shields.io/github/actions/workflow/status/tidbyt/hdk/main.yaml?style=flat-square)](https://github.com/tidbyt/hdk/actions/workflows/main.yaml)
[![Discourse](https://img.shields.io/discourse/status?server=https%3A%2F%2Fdiscuss.tidbyt.com&style=flat-square)](https://discuss.tidbyt.com/)
[![Discord Server](https://img.shields.io/discord/928484660785336380?style=flat-square)](https://discord.gg/r45MXG4kZc)

This repository contains a community supported firmware for the Tidbyt hardware 🤓. 

![social banner](./docs/assets/social.png)

## Warning
⚠️ Warning! Flashing your Tidbyt with this firmware or derivatives could fatally 
damage your device. As such, flashing your Tidbyt with this firmware or
derivatives voids your warranty and comes without support.

## Setup
This project uses PlatformIO to build, flash, and monitor firmware on the Tidbyt.
To get started, you will need to download [PlatformIO Core][2] on your computer.

Additionally, this firmware is designed to work with [Pixlet][1]. Using
`pixlet serve`, you can serve a WebP on your local network. Take note of your
computers IP address and replace it in the `TIDBYT_REMOTE_URL` example above.
While we had pixlet in mind, you can point this firmware at any URL that hosts
a WebP image that is optimized for the Tidbyt display.

## Getting Started
To flash the custom firmware on your device, run the following after replacing
the variables with your desired information:
```
TIDBYT_WIFI_SSID='Your WiFi' \
TIDBYT_WIFI_PASSWORD='super-secret' \
TIDBYT_REMOTE_URL='http://192.168.10.10:8080/api/v1/preview.webp' \
pio run --environment tidbyt --target upload
```

If you're flashing to a Tidbyt Gen2, just change to the above to use
the `--environment tidbyt-gen2` flag.

## Monitoring Logs
To check the output of your running firmware, run the following:
```
pio device monitor
```

## Back to Normal
To get your Tidbyt back to normal, you can run the following to flash the
production firmware onto your Tidbyt:

```
pio run --target reset --environment tidbyt
```

And if you're working with a Tidbyt Gen 2:

```
pio run --target reset --environment tidbyt-gen2
```

[1]: https://github.com/tidbyt/pixlet
[2]: https://docs.platformio.org/en/latest/core/installation/index.html
