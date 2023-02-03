// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_TWM \
&kp LG(LS(N1)),             &kp LG(LS(N2)),            &kp LG(LS(N3)),            &kp LG(LS(N4)),            &kp LG(LS(N5)),             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LG(N1),     &kp LG(N2),     &kp LG(N3),    &kp LG(N4),    &kp LG(N5),             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, M),     \
U_LT(U_BUTTON, W), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           U_MT(RALT, SLASH), U_LT(U_BUTTON, SQT),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(TWM,    "Twm") \

#define MIRYOKU_LAYERMAPPING_TWM MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_TWM    10
