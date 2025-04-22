LED Blink

Device: Arduino Mega2560 Rev3
Dev Environment: Linux (WSL Ubuntu)
Tools: avr-libc gcc-avr avrdude binutils-avr
Tools (host): usbipd
Language: C

Notes: 
Make sure to attach the host's COM device to WSL before flashing to COM device
usbipd bind --busid [COM's busid]
usbipd attach --wsl --busid [COM's busid]