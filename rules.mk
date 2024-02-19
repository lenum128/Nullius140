# This file intentionally left blank

# Bootloader selection
BOOTLOADER = rp2040

OLED_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = no

CUSTOM_MATRIX = lite
SRC += matrix.c
