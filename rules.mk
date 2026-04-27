BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes        # Audio control and System control (disable if you don't use media keys)
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no       # Enable WS2812 RGB underlight.
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
OLED_ENABLE= yes     # OLED display

# Advanced optimizations
GRAVE_ESC_ENABLE = no       # Save ~100 bytes
MAGIC_ENABLE = yes           # Save ~500 bytes
SPACE_CADET_ENABLE = yes     # Save ~350 bytes
LTO_ENABLE = yes            # Link Time Optimization - saves significant space

# If you want to change the display of OLED, you need to change here
ifeq ($(OLED_ENABLE), yes)
    SRC +=  ./lib/layer_state_reader.c \
            ./lib/keylogger.c
endif
