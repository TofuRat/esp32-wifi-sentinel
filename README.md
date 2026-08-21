# ESP32 WiFi Sentinel

This is a small cybersecurity project I'm building with an ESP32-S3.

The main idea is to use the ESP32 to monitor Wi-Fi networks around it and later make it able to detect things that look suspicious, like unknown access points or a possible Evil Twin.

I'm building everything step by step while learning more about Wi-Fi security, ESP32, networking and security monitoring.

## The idea

The ESP32 will scan nearby Wi-Fi networks and collect information like:

* SSID
* BSSID
* Signal strength (RSSI)
* Wi-Fi channel
* Security type

Later I want to use this information to create a list of networks that the ESP32 knows and trusts.

If something changes, for example the same Wi-Fi name suddenly appears with a different BSSID, the ESP32 can flag it as suspicious.

## What I'm using

**Hardware**

* ESP32-S3
* Breadboard
* USB-C
* More components will probably be added later

**Software**

* Visual Studio Code
* PlatformIO
* Arduino Framework
* Git
* GitHub

Later I also want to use Linux and a SIEM for logging and monitoring.

## Progress

### ESP32 setup 

First I set up the ESP32 and made sure I could communicate with it from my PC.

So far I have:

* Set up PlatformIO
* Connected the ESP32 through USB
* Compiled and uploaded my first firmware
* Set up serial communication
* Tested that the ESP32 is running correctly
* Set up Git and GitHub for the project

My first test was just a simple heartbeat:

```text
ESP32-S3 is running!

Sentinel heartbeat...
Sentinel heartbeat...
Sentinel heartbeat...
```

It doesn't do anything special yet. The point was just to make sure everything worked before I started working with Wi-Fi.

### Wi-Fi scanner 

This is what I'm working on next.

The ESP32 will scan nearby networks and show something like:

```text
SSID: HomeNetwork
BSSID: AA:BB:CC:DD:EE:FF
RSSI: -42 dBm
Channel: 6
Security: WPA2
```

After I get this working I can start using the information to detect changes in the Wi-Fi environment.

## What's next?

The plan is to slowly add more features:

* Wi-Fi scanning
* Save known access points
* Detect unknown access points
* Detect when a known SSID has a different BSSID
* Look for possible Evil Twin / rogue access points
* Log security events
* Send logs to a Linux server
* Connect the project to a SIEM
* Create alerts and a dashboard

The final setup will hopefully look something like:

```text
Wi-Fi Networks
      |
      v
   ESP32-S3
      |
      v
 Linux Server
      |
      v
     SIEM
      |
      v
  Dashboard
```

## Why I'm making this

I wanted to build something with an ESP32 that is actually connected to cybersecurity and not just a normal electronics project.

The goal is to learn more about Wi-Fi security and understand how monitoring and detection actually works by building it myself.

I'm also using the project to get more experience with C++, networking, Linux, Git and SIEM tools.

## Note

This project is made for learning and defensive security. Any security testing will only be done on networks and devices that I own or have permission to test.
