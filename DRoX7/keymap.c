#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_199_167_255,
  ST_MACRO_0,
  ST_MACRO_1,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      TD(DANCE_0),    FR_2,           TD(DANCE_1),    FR_4,           FR_5,                                           TD(DANCE_8),    TD(DANCE_9),    FR_8,           FR_9,           FR_0,           TD(DANCE_10),   
    KC_LEFT_SHIFT,  TD(DANCE_2),    FR_Z,           TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),                                    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           TD(DANCE_11),   
    LALT(LGUI(LCTL(LSFT(KC_L)))),FR_Q,           TD(DANCE_6),    MT(MOD_LALT, KC_D),MT(MOD_LGUI, KC_F),TD(DANCE_7),                                    ALL_T(KC_H),    MT(MOD_RGUI, KC_J),MT(MOD_RALT, KC_K),MT(MOD_RSFT, KC_L),FR_M,           TD(DANCE_12),   
    KC_LEFT_CTRL,   FR_W,           KC_X,           KC_C,           KC_V,           MEH_T(KC_B),                                    KC_N,           TD(DANCE_13),   TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   LT(5,KC_RIGHT_CTRL),
                                                    KC_LEFT_GUI,    KC_ENTER,                                       TD(DANCE_17),   LT(2,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_TRANSPARENT, KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    TD(DANCE_18),   TD(DANCE_19),   FR_AT,          FR_HASH,        FR_DLR,         FR_PERC,                                        FR_7,           FR_8,           FR_9,           FR_MINS,        FR_SLSH,        KC_F12,         
    FR_TILD,        FR_CIRC,        FR_AMP,         FR_ASTR,        FR_LPRN,        FR_RPRN,                                        FR_4,           FR_5,           FR_6,           FR_PLUS,        FR_ASTR,        KC_BSPC,        
    TO(0),          TD(DANCE_20),   FR_LBRC,        FR_RBRC,        FR_LCBR,        FR_RCBR,                                        FR_1,           FR_2,           FR_3,           FR_DOT,         FR_EQL,         KC_ENTER,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, FR_0
  ),
  [2] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_SHIFT,  KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_NO,                                          KC_NO,          KC_NO,          LCTL(KC_DOWN),  LCTL(KC_UP),    KC_HOME,        KC_PAGE_UP,     
    KC_HYPR,        KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,MT(MOD_LALT, KC_MEDIA_STOP),MT(MOD_LGUI, KC_MEDIA_PLAY_PAUSE),KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_END,         KC_PGDN,        
    TO(0),          KC_NO,          KC_NO,          HSV_0_255_255,  HSV_74_255_255, HSV_199_167_255,                                LCTL(KC_LEFT),  LCTL(KC_RIGHT), LGUI(LSFT(KC_J)),LALT(KC_LEFT),  LALT(KC_RIGHT), KC_TRANSPARENT, 
                                                    KC_LEFT_GUI,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_ACCEL0,                                   KC_NO,          KC_MS_BTN1,     KC_MS_WH_UP,    KC_MS_BTN2,     KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_ACCEL1,                                   KC_HYPR,        KC_MS_WH_LEFT,  KC_MS_BTN3,     KC_MS_WH_RIGHT, KC_NO,          KC_NO,          
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL2,                                   KC_NO,          KC_NO,          KC_MS_WH_DOWN,  KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),KC_TRANSPARENT, LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_BSPC),  LALT(KC_DELETE),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_LEFT),  KC_PAGE_UP,     LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_CIRC,        KC_DELETE,      KC_DLR,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    TO(0),          LCTL(KC_B),     LCTL(KC_U),     KC_TRANSPARENT, LCTL(KC_D),     LCTL(KC_F),                                     LGUI(KC_LEFT),  LGUI(KC_LBRC),  KC_PGDN,        LGUI(KC_RBRC),  LGUI(KC_RIGHT), KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_ESCAPE,      LGUI(LSFT(KC_L)),LGUI(LSFT(FR_M)),KC_NO,          LALT(KC_D),     LALT(KC_H),                                     KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, QK_BOOT,        LALT(LCTL(LSFT(KC_S))),
    LALT(LCTL(LSFT(KC_F))),KC_NO,          LALT(LGUI(KC_UP)),KC_NO,          KC_TRANSPARENT, LGUI(LSFT(FR_AMP)),                                KC_NO,          KC_NO,          LALT(LCTL(KC_O)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_H)),LALT(LCTL(KC_M)),
    KC_LEFT_SHIFT,  LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_ENTER)),LALT(LGUI(KC_RIGHT)),LALT(LCTL(KC_P)),LALT(LCTL(KC_N)),                                LGUI(LSFT(KC_J)),LALT(LCTL(KC_LEFT)),LALT(KC_ENTER), LALT(LCTL(KC_RIGHT)),LALT(LCTL(KC_S)),LALT(LCTL(KC_F)),
    TO(0),          LCTL(FR_AT),    LALT(LGUI(KC_DOWN)),TD(DANCE_21),   LALT(LGUI(LCTL(KC_P))),LALT(LGUI(LCTL(KC_N))),                                LALT(LCTL(KC_X)),LALT(LCTL(KC_C)),LALT(LCTL(KC_L)),LGUI(LCTL(KC_I)),ST_MACRO_1,     KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_RIGHT_SHIFT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, FR_1,           FR_2,           FR_3,           FR_4,           FR_5,                                           FR_6,           FR_7,           FR_8,           FR_9,           TO(0),          FR_AT,          
    KC_LEFT_SHIFT,  FR_A,           FR_Z,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_LEFT,        KC_UP,          KC_TAB,         
    KC_LEFT_ALT,    FR_Q,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_DOWN,        KC_RIGHT,       
    KC_LEFT_CTRL,   FR_W,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           FR_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_CTRL,  
                                                    KC_LEFT_GUI,    KC_ENTER,                                       KC_RIGHT_ALT,   KC_SPACE
  ),
};

const uint16_t PROGMEM combo0[] = { KC_Y, KC_U, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_LEFT_SHIFT, KC_RIGHT_SHIFT, COMBO_END};
const uint16_t PROGMEM combo2[] = { FR_4, FR_5, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_Y, KC_U, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(6)),
    COMBO(combo1, TO(0)),
    COMBO(combo2, LSFT(KC_ENTER)),
    COMBO(combo3, FR_PERC),
    COMBO(combo4, ST_MACRO_0),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192}, {226,229,192} },

    [1] = { {0,0,0}, {49,247,255}, {49,247,255}, {49,247,255}, {49,247,255}, {49,247,255}, {0,0,0}, {152,255,255}, {139,230,198}, {169,255,255}, {41,213,171}, {41,213,171}, {41,213,171}, {41,213,171}, {41,213,171}, {41,213,171}, {41,116,136}, {41,116,136}, {0,245,245}, {41,213,171}, {18,174,235}, {18,174,235}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {49,247,255}, {49,247,255}, {49,247,255}, {49,247,255}, {49,247,255}, {49,247,255}, {139,230,198}, {139,230,198}, {139,230,198}, {0,255,255}, {0,0,0}, {49,247,255}, {139,230,198}, {139,230,198}, {139,230,198}, {131,255,255}, {0,0,0}, {0,255,255}, {139,230,198}, {139,230,198}, {139,230,198}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {139,230,198} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {139,230,198}, {0,245,245}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {0,245,245}, {139,230,198}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {169,255,84}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {169,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {74,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,245,245}, {139,244,200}, {139,244,200}, {0,0,0}, {139,244,200}, {139,244,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {140,58,200}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {140,58,200}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {169,255,255}, {0,255,255}, {0,0,0}, {140,58,200}, {140,58,200}, {226,229,192}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {140,58,200}, {139,230,198}, {74,255,255}, {74,255,255}, {74,255,255}, {41,116,144}, {41,116,144}, {0,255,255}, {229,255,255}, {74,255,255}, {0,0,0}, {41,213,171}, {41,213,171}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {18,174,235}, {217,235,134}, {41,213,171}, {41,213,171}, {0,0,0}, {18,174,235}, {41,255,255}, {18,174,235}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {18,174,235}, {142,15,213}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {18,174,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {18,174,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {169,255,255}, {169,255,255}, {161,255,255}, {161,255,255}, {161,255,255}, {94,255,67}, {217,241,204}, {217,241,204}, {217,241,204}, {217,241,204}, {217,241,204}, {94,255,67}, {217,241,204}, {217,241,204}, {217,241,204}, {217,241,204}, {217,241,204}, {94,255,67}, {217,241,204}, {217,241,204}, {217,241,204}, {217,241,204}, {217,241,204}, {94,255,67}, {217,235,134}, {161,255,255}, {145,255,255}, {145,255,255}, {145,255,255}, {255,249,171}, {217,235,134}, {217,241,204}, {217,241,204}, {217,241,204}, {58,255,255}, {58,255,255}, {15,249,255}, {217,241,204}, {217,241,204}, {217,241,204}, {217,241,204}, {58,255,255}, {58,255,255}, {217,241,204}, {217,241,204}, {0,0,0}, {0,0,0}, {94,255,67}, {94,255,67}, {94,255,67}, {217,235,134} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
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

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_ESCAPE)) SS_DELAY(100) SS_TAP(X_KP_DOT));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LGUI(SS_TAP(X_V))));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_199_167_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(199,167,255);
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

static tap dance_state[22];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
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


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_1);
        tap_code16(FR_1);
        tap_code16(FR_1);
    }
    if(state->count > 3) {
        tap_code16(FR_1);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(FR_1); break;
        case SINGLE_HOLD: layer_on(1); break;
        case DOUBLE_TAP: register_code16(FR_1); register_code16(FR_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_1); register_code16(FR_1);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(FR_1); break;
        case SINGLE_HOLD:
          layer_off(1);
        break;
        case DOUBLE_TAP: unregister_code16(FR_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_1); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_3);
        tap_code16(FR_3);
        tap_code16(FR_3);
    }
    if(state->count > 3) {
        tap_code16(FR_3);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(FR_3); break;
        case SINGLE_HOLD: layer_move(3); break;
        case DOUBLE_TAP: register_code16(FR_3); register_code16(FR_3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_3); register_code16(FR_3);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(FR_3); break;
        case DOUBLE_TAP: unregister_code16(FR_3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_3); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_A);
        tap_code16(FR_A);
        tap_code16(FR_A);
    }
    if(state->count > 3) {
        tap_code16(FR_A);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(FR_A); break;
        case SINGLE_HOLD: register_code16(FR_AGRV); break;
        case DOUBLE_TAP: register_code16(FR_A); register_code16(FR_A); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_A); register_code16(FR_A);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(FR_A); break;
        case SINGLE_HOLD: unregister_code16(FR_AGRV); break;
        case DOUBLE_TAP: unregister_code16(FR_A); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_A); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_E);
        tap_code16(KC_E);
        tap_code16(KC_E);
    }
    if(state->count > 3) {
        tap_code16(KC_E);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_E); break;
        case SINGLE_HOLD: register_code16(FR_EACU); break;
        case DOUBLE_TAP: register_code16(KC_E); register_code16(KC_E); break;
        case DOUBLE_HOLD: register_code16(FR_EGRV); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_E); break;
        case SINGLE_HOLD: unregister_code16(FR_EACU); break;
        case DOUBLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_HOLD: unregister_code16(FR_EGRV); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case SINGLE_HOLD: register_code16(LALT(KC_SPACE)); break;
        case DOUBLE_TAP: register_code16(KC_R); register_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_SPACE)); break;
        case DOUBLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_T);
        tap_code16(KC_T);
        tap_code16(KC_T);
    }
    if(state->count > 3) {
        tap_code16(KC_T);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_T); break;
        case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_T); register_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_T); register_code16(KC_T);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_T); break;
        case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_T); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_S);
        tap_code16(KC_S);
        tap_code16(KC_S);
    }
    if(state->count > 3) {
        tap_code16(KC_S);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_S); break;
        case SINGLE_HOLD: register_code16(KC_TAB); break;
        case DOUBLE_TAP: register_code16(KC_S); register_code16(KC_S); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_S); register_code16(KC_S);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_S); break;
        case SINGLE_HOLD: unregister_code16(KC_TAB); break;
        case DOUBLE_TAP: unregister_code16(KC_S); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_S); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(LGUI(LSFT(KC_G))))); break;
        case DOUBLE_TAP: register_code16(KC_G); register_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_G))))); break;
        case DOUBLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_6);
        tap_code16(FR_6);
        tap_code16(FR_6);
    }
    if(state->count > 3) {
        tap_code16(FR_6);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(FR_6); break;
        case SINGLE_HOLD: register_code16(FR_PIPE); break;
        case DOUBLE_TAP: register_code16(FR_6); register_code16(FR_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_6); register_code16(FR_6);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(FR_6); break;
        case SINGLE_HOLD: unregister_code16(FR_PIPE); break;
        case DOUBLE_TAP: unregister_code16(FR_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_6); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_7);
        tap_code16(FR_7);
        tap_code16(FR_7);
    }
    if(state->count > 3) {
        tap_code16(FR_7);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(FR_7); break;
        case SINGLE_HOLD: layer_move(7); break;
        case DOUBLE_TAP: register_code16(FR_7); register_code16(FR_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_7); register_code16(FR_7);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(FR_7); break;
        case DOUBLE_TAP: unregister_code16(FR_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_7); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_MINS);
        tap_code16(FR_MINS);
        tap_code16(FR_MINS);
    }
    if(state->count > 3) {
        tap_code16(FR_MINS);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(FR_MINS); break;
        case SINGLE_HOLD: register_code16(FR_UNDS); break;
        case DOUBLE_TAP: register_code16(FR_EQL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_MINS); register_code16(FR_MINS);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(FR_MINS); break;
        case SINGLE_HOLD: unregister_code16(FR_UNDS); break;
        case DOUBLE_TAP: unregister_code16(FR_EQL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_MINS); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_AT);
        tap_code16(FR_AT);
        tap_code16(FR_AT);
    }
    if(state->count > 3) {
        tap_code16(FR_AT);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(FR_AT); break;
        case SINGLE_HOLD: register_code16(FR_LPRN); break;
        case DOUBLE_TAP: register_code16(FR_AT); register_code16(FR_AT); break;
        case DOUBLE_HOLD: register_code16(FR_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_AT); register_code16(FR_AT);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(FR_AT); break;
        case SINGLE_HOLD: unregister_code16(FR_LPRN); break;
        case DOUBLE_TAP: unregister_code16(FR_AT); break;
        case DOUBLE_HOLD: unregister_code16(FR_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_AT); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_APOS);
        tap_code16(FR_APOS);
        tap_code16(FR_APOS);
    }
    if(state->count > 3) {
        tap_code16(FR_APOS);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(FR_APOS); break;
        case SINGLE_HOLD: register_code16(FR_GRV); break;
        case DOUBLE_TAP: register_code16(FR_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_APOS); register_code16(FR_APOS);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(FR_APOS); break;
        case SINGLE_HOLD: unregister_code16(FR_GRV); break;
        case DOUBLE_TAP: unregister_code16(FR_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_APOS); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_COMM);
        tap_code16(FR_COMM);
        tap_code16(FR_COMM);
    }
    if(state->count > 3) {
        tap_code16(FR_COMM);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(FR_COMM); break;
        case SINGLE_HOLD: register_code16(FR_EXLM); break;
        case DOUBLE_TAP: register_code16(FR_COMM); register_code16(FR_COMM); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_COMM); register_code16(FR_COMM);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(FR_COMM); break;
        case SINGLE_HOLD: unregister_code16(FR_EXLM); break;
        case DOUBLE_TAP: unregister_code16(FR_COMM); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_COMM); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_COLN);
        tap_code16(FR_COLN);
        tap_code16(FR_COLN);
    }
    if(state->count > 3) {
        tap_code16(FR_COLN);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(FR_COLN); break;
        case SINGLE_HOLD: register_code16(FR_ASTR); break;
        case DOUBLE_TAP: register_code16(FR_SCLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_COLN); register_code16(FR_COLN);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(FR_COLN); break;
        case SINGLE_HOLD: unregister_code16(FR_ASTR); break;
        case DOUBLE_TAP: unregister_code16(FR_SCLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_COLN); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_DOT);
        tap_code16(FR_DOT);
        tap_code16(FR_DOT);
    }
    if(state->count > 3) {
        tap_code16(FR_DOT);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(FR_DOT); break;
        case SINGLE_HOLD: register_code16(FR_QUES); break;
        case DOUBLE_TAP: register_code16(FR_DOT); register_code16(FR_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_DOT); register_code16(FR_DOT);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(FR_DOT); break;
        case SINGLE_HOLD: unregister_code16(FR_QUES); break;
        case DOUBLE_TAP: unregister_code16(FR_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_DOT); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_SLSH);
        tap_code16(FR_SLSH);
        tap_code16(FR_SLSH);
    }
    if(state->count > 3) {
        tap_code16(FR_SLSH);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(FR_SLSH); break;
        case SINGLE_HOLD: register_code16(FR_HASH); break;
        case DOUBLE_TAP: register_code16(FR_TILD); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_SLSH); register_code16(FR_SLSH);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(FR_SLSH); break;
        case SINGLE_HOLD: unregister_code16(FR_HASH); break;
        case DOUBLE_TAP: unregister_code16(FR_TILD); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_SLSH); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD:
          layer_off(4);
        break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_APOS);
        tap_code16(FR_APOS);
        tap_code16(FR_APOS);
    }
    if(state->count > 3) {
        tap_code16(FR_APOS);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(FR_APOS); break;
        case SINGLE_HOLD: register_code16(FR_GRV); break;
        case DOUBLE_TAP: register_code16(FR_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_APOS); register_code16(FR_APOS);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(FR_APOS); break;
        case SINGLE_HOLD: unregister_code16(FR_GRV); break;
        case DOUBLE_TAP: unregister_code16(FR_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_APOS); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_EXLM);
        tap_code16(FR_EXLM);
        tap_code16(FR_EXLM);
    }
    if(state->count > 3) {
        tap_code16(FR_EXLM);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(FR_EXLM); break;
        case DOUBLE_TAP: register_code16(FR_QUES); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_EXLM); register_code16(FR_EXLM);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(FR_EXLM); break;
        case DOUBLE_TAP: unregister_code16(FR_QUES); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_EXLM); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_LESS);
        tap_code16(FR_LESS);
        tap_code16(FR_LESS);
    }
    if(state->count > 3) {
        tap_code16(FR_LESS);
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(FR_LESS); break;
        case DOUBLE_TAP: register_code16(FR_GRTR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_LESS); register_code16(FR_LESS);
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(FR_LESS); break;
        case DOUBLE_TAP: unregister_code16(FR_GRTR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_LESS); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LGUI(FR_COMM))));
        tap_code16(LALT(LCTL(LGUI(FR_COMM))));
        tap_code16(LALT(LCTL(LGUI(FR_COMM))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LGUI(FR_COMM))));
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LGUI(FR_COMM)))); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(LGUI(KC_SPACE)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(FR_COMM)))); register_code16(LALT(LCTL(LGUI(FR_COMM)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LGUI(FR_COMM)))); register_code16(LALT(LCTL(LGUI(FR_COMM))));
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(FR_COMM)))); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(LGUI(KC_SPACE)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(FR_COMM)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(FR_COMM)))); break;
    }
    dance_state[21].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
};
