// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ a │ b │
     * ├───┼───┤
     * │ c │ d │
     * └───┴───┘
     */
    [0] = LAYOUT(
        KC_A, KC_B,
        KC_C, KC_D
    )
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("test"), false);
    return false;
}
#endif