# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
TAP_DANCE_ENABLE = yes
SPACE_CADET_ENABLE = no
MOUSEKEY_ENABLE = yes
DEFERRED_EXEC_ENABLE = yes

SRC = matrix.c features/mouse_turbo_click.c
