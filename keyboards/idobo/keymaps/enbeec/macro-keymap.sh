gcc -E -o ./keymap.c ./macro-keymap.c
echo '#include QMK_KEYBOARD_H' | cat - ./keymap.c > keymap.temp && mv keymap.temp keymap.c
