![social banner](./docs/assets/social.png)

## Warning

⚠️ Warning! Flashing your Tidbyt with this firmware or derivatives could fatally 
damage your device. As such, flashing your Tidbyt with this firmware or
derivatives voids your warranty and comes without support.

## Setup

This project uses PlatformIO to build, flash, and monitor firmware on the Tidbyt.
To get started, you will need to download [PlatformIO Core][2] on your computer.

	@@ -24,8 +26,17 @@ While we had pixlet in mind, you can point this firmware at any URL that hosts
a WebP image that is optimized for the Tidbyt display.

## Getting Started

This repository uses Git submodules, so make sure to specify the `--recurse-submodules`
flag when cloning:

```
git clone --recurse-submodules https://github.com/tidbyt/hdk.git
```

To flash the custom firmware on your device, run the following after replacing
the variables with your desired information:

```
TIDBYT_WIFI_SSID='Your WiFi' \
TIDBYT_WIFI_PASSWORD='super-secret' \
	@@ -36,12 +47,21 @@ pio run --environment tidbyt --target upload
If you're flashing to a Tidbyt Gen2, just change to the above to use
the `--environment tidbyt-gen2` flag.

**Note:** `TIDBYT_REMOTE_URL` must be an HTTP URL. This firmware **does not support HTTPS**
for a remote URL.

## Monitoring Logs

To check the output of your running firmware, run the following:

```
pio device monitor
```

**Note:** running `device monitor` at the same time as deploying new firmware
with the `run` is not supported.


## Back to Normal
To get your Tidbyt back to normal, you can run the following to flash the
production firmware onto your Tidbyt:
	@@ -56,5 +76,6 @@ And if you're working with a Tidbyt Gen 2:
pio run --target reset --environment tidbyt-gen2
```


[1]: https://github.com/tidbyt/pixlet
[2]: https://docs.platformio.org/en/latest/core/installation/index.html
