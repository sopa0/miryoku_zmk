// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_TWM \
&kp LG(LS(N1)), &kp LG(LS(N2)), &kp LG(LS(N3)), &kp LG(LS(N4)), &kp LG(LS(N5)), U_NP,       U_NP, U_NP, U_NP, U_NP, \
&kp LG(N1),     &kp LG(N2),     &kp LG(N3),     &kp LG(N4),     &kp LG(N5),     U_NP,       &kp LG(J), &kp LG(K), &kp LG(L), &kp LG(SEMICOLON), \
&bt BT_SEL 0,   &bt BT_SEL 1,   &bt BT_SEL 2,   &bt BT_SEL 3,   &bt BT_SEL 4,   U_NP,       U_NP, U_NP, U_NP, U_NP,\
U_NP,           U_NP,           U_NP,           U_NP,           U_NP,           &bt BT_CLR, U_NP, U_NP, U_NP, U_NP

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
