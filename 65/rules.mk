# Build Options
BOOTMAGIC_ENABLE		= yes		# Virtual DIP switch configuration
BLUETOOTH_ENABLE		= no		# Enable Bluetooth
AUDIO_ENABLE			= no		# Audio output
EXTRAKEY_ENABLE			= yes		# Audio control and System control

BLUETOOTH_ENABLE		= no		# Enable Bluetooth
AUDIO_ENABLE			= no		# Audio output

RGBLIGHT_ENABLE			= no		# Enable keyboard RGB underglow
BACKLIGHT_ENABLE		= no		# Enable keyboard backlight functionality
RGBLIGHT_SUPPORTED		= yes
RGB_MATRIX_SUPPORTED	= yes
RGB_MATRIX_ENABLE		= yes
RGB_MATRIX_DRIVER		= ws2812

WPM_ENABLE			= yes


# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE	= no		# Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE			= yes		# USB Nkey Rollover