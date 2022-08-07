#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};


enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_PGUP,                                        KC_PGDOWN,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_DELETE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TO(2),                                          TO(1),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_BSPACE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           MO(2),                                          MO(2),          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    TD(DANCE_0),    KC_LCTRL,       KC_LALT,        KC_LEFT,        KC_RIGHT,                       KC_ESCAPE,                                      KC_ESCAPE,                      KC_UP,          KC_DOWN,        KC_LBRACKET,    KC_RBRACKET,    KC_END,
                                                                                    KC_SPACE,       KC_BSPACE,      KC_LGUI,        KC_F4,          KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_DELETE,      KC_T,           KC_Q,           KC_W,           KC_E,           KC_R,           TO(0),                                          TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTRL,       KC_G,           KC_A,           KC_S,           KC_D,           KC_F,           MO(2),                                          MO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_GRAVE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT,                                 KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_ENTER,       KC_TAB,         KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          RESET,                                          WEBUSB_PAIR,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         TO(1),                                          TO(0),          KC_UP,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         MO(2),                                          MO(2),          KC_DOWN,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_EQUAL,
    KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,                                                                         KC_NUMLOCK,     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ASTERISK, KC_KP_ENTER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_LALT,                                        KC_ESCAPE,                      KC_KP_COMMA,    KC_KP_DOT,      KC_KP_0,        KC_KP_SLASH,    KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_BSPACE,      WEBUSB_PAIR,    RGB_VAI,        RGB_VAD,        KC_ENTER
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {154,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {154,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {154,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {154,255,255}, {0,0,255}, {144,255,255}, {144,255,255}, {144,255,255}, {154,255,255}, {144,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {15,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {15,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {15,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {15,255,255}, {0,0,255}, {25,255,255}, {25,255,255}, {25,255,255}, {15,255,255}, {25,255,255} },

    [1] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {41,255,255}, {85,203,158}, {156,255,135}, {156,255,135}, {156,255,135}, {139,150,146}, {85,203,158}, {156,255,135}, {0,0,255}, {156,255,135}, {139,150,146}, {85,203,158}, {0,0,255}, {0,0,255}, {156,255,135}, {0,0,255}, {85,203,158}, {156,255,135}, {0,0,255}, {156,255,135}, {0,0,255}, {85,203,158}, {156,255,135}, {156,255,135}, {156,255,135}, {131,255,255}, {0,0,255}, {156,255,135}, {0,0,255}, {156,255,135}, {156,255,135}, {156,255,135}, {139,150,146}, {205,255,255}, {139,150,146}, {139,150,146}, {41,255,255}, {85,203,158}, {205,255,255}, {139,150,146}, {131,255,255}, {139,150,146}, {85,203,158}, {205,255,255}, {205,255,255}, {139,150,146}, {139,150,146}, {85,203,158}, {205,255,255}, {205,255,255}, {139,150,146}, {139,150,146}, {85,203,158}, {205,255,255}, {205,255,255}, {205,255,255}, {139,150,146}, {85,203,158}, {205,255,255}, {205,255,255}, {205,255,255}, {131,255,255}, {0,0,255}, {139,150,146}, {188,255,255}, {188,255,255}, {188,255,255}, {139,150,146} },

    [2] = { {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {46,218,204}, {145,57,250}, {0,0,0}, {25,255,255}, {25,255,255}, {31,255,255}, {61,251,221}, {131,255,255}, {131,255,255}, {102,255,255}, {102,255,255}, {0,0,0}, {131,255,255}, {102,255,255}, {102,255,255}, {102,255,255}, {102,255,255}, {131,255,255}, {201,51,240}, {201,51,240}, {201,51,240}, {201,51,240}, {131,255,255}, {201,51,240}, {201,51,240}, {201,51,240}, {102,255,255}, {131,255,255}, {201,51,240}, {201,51,240}, {201,51,240}, {102,255,255}, {131,255,255}, {153,145,255}, {153,145,255}, {131,255,255}, {31,255,255}, {145,57,250}, {0,0,0}, {25,255,255}, {0,183,238}, {0,183,238}, {61,251,221} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case SINGLE_HOLD: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_GRAVE); register_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case SINGLE_HOLD: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[0].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

