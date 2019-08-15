#ifndef REV1_H
#define REV1_H

#include "ergodone2pm.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#define XXX KC_NO
#define ___ KC_TRNS
#define LAYOUT_ergodox(                                         \
                                                                \
    L00,L01,L02,L03,L04,L05,L06,                                \
    L10,L11,L12,L13,L14,L15,L16,                                \
    L20,L21,L22,L23,L24,L25,                                    \
    L30,L31,L32,L33,L34,L35,L36,                                \
    L40,L41,L42,L43,L44,                                        \
                            L55,L56,                            \
                                L54,                            \
                        L53,L52,L51,                            \
                                                                \
        R06,R05,R04,R03,R02,R01,R00,                            \
        R16,R15,R14,R13,R12,R11,R10,                            \
            R25,R24,R23,R22,R21,R20,                            \
        R36,R35,R34,R33,R32,R31,R30,                            \
                R44,R43,R42,R41,R40,                            \
    R56,R55,                                                    \
    R54,                                                        \
    R51,R52,R53 )                                               \
                                                                \
   {                                                            \
    {   L00,L01,L02,L03,L04,L05,L06,     }, \
    {   L10,L11,L12,L13,L14,L15,L16,     }, \
    {   L20,L21,L22,L23,L24,L25,KC_NO,   }, \
    {   L30,L31,L32,L33,L34,L35,L36,     }, \
    { L40,L41,L42,L43,L44,KC_NO,KC_NO,   }, \
    { KC_NO,L51,L52,L53,L54,L55,L56,     },  \
    {   R00,R01,R02,R03,R04,R05,R06,     }, \
    {   R10,R11,R12,R13,R14,R15,R16,     }, \
    {   R20,R21,R22,R23,R24,R25,KC_NO,   }, \
    {   R30,R31,R32,R33,R34,R35,R36,     }, \
    { R40,R41,R42,R43,R44,KC_NO,KC_NO,   }, \
    { KC_NO,R51,R52,R53,R54,R55,R56,     }  \
   }

/*
 *   LEFT HAND: LINES 110-117
 *  RIGHT HAND: LINES 119-126
 */
#define LAYOUT_ergodox_80(                                      \
                                                                \
    k00,k01,k02,k03,k04,k05,k06,                                \
    k10,k11,k12,k13,k14,k15,k16,                                \
    k20,k21,k22,k23,k24,k25,                                    \
    k30,k31,k32,k33,k34,k35,k36,                                \
    k40,k41,k42,k43,k44,                                        \
                            k55,k56,                            \
                        k45,k46,k54,                            \
                        k53,k52,k51,                            \
                                                                \
        k07,k08,k09,k0A,k0B,k0C,k0D,                            \
        k17,k18,k19,k1A,k1B,k1C,k1D,                            \
            k28,k29,k2A,k2B,k2C,k2D,                            \
        k37,k38,k39,k3A,k3B,k3C,k3D,                            \
                k49,k4A,k4B,k4C,k4D,                            \
    k57,k58,                                                    \
    k59,k47,k48,                                                \
    k5C,k5B,k5A )                                               \
                                                                \
   /* matrix positions */                                       \
   {                                                            \
    { k00,   k01, k02, k03, k04, k05, k06,   }, \
    { k10,   k11, k12, k13, k14, k15, k16,   }, \
    { k20,   k21, k22, k23, k24, k25, KC_NO, }, \
    { k30,   k31, k32, k33, k34, k35, k36,   }, \
    { k40,   k41, k42, k43, k44, k45, k45,   }, \
    { KC_NO, k51, k52, k53, k54, k55, k56,   }, \
    { k07,   k08, k09, k0A, k0B, k0C, k0D    }, \
    { k17,   k18, k19, k1A, k1B, k1C, k1D    }, \
    { KC_NO, k28, k29, k2A, k2B, k2C, k2D    }, \
    { k37,   k38, k39, k3A, k3B, k3C, k3D    }, \
    { k47,   k48, k49, k4A, k4B, k4C, k4D    }, \
    { k57,   k58, k59, k5A, k5B, k5C, KC_NO  }  \
   }

/*  ---------- LEFT HAND -----------       ---------- RIGHT HAND ---------- */
#define LAYOUT_ergodox_pretty(                                                  \
                                                                                \
     L00,L01,L02,L03,L04,L05,L06,               R06,R05,R04,R03,R02,R01,R00,     \
    L10,L11,L12,L13,L14,L15,L16,               R16,R15,R14,R13,R12,R11,R10,     \
    L20,L21,L22,L23,L24,L25,                       R25,R24,R23,R22,R21,R20,     \
    L30,L31,L32,L33,L34,L35,L36,               R36,R35,R34,R33,R32,R31,R30,     \
    L40,L41,L42,L43,L44,                               R44,R43,R42,R41,R40,     \
                            L55,L56,       R56,R55,                             \
                                L54,       R54,                                 \
                        L53,L52,L51,       R51,R52,R53 )                        \
   /* matrix positions */                                                       \
   {                                                                            \
    {   L00,L01,L02,L03,L04,L05,L06,     }, \
    {   L10,L11,L12,L13,L14,L15,L16,     }, \
    {   L20,L21,L22,L23,L24,L25,KC_NO,   }, \
    {   L30,L31,L32,L33,L34,L35,L36,     }, \
    { L40,L41,L42,L43,L44,KC_NO,KC_NO,   }, \
    { KC_NO,L51,L52,L53,L54,L55,L56,     },  \
    {   R00,R01,R02,R03,R04,R05,R06,     }, \
    {   R10,R11,R12,R13,R14,R15,R16,     }, \
    {   R20,R21,R22,R23,R24,R25,KC_NO,   }, \
    {   R30,R31,R32,R33,R34,R35,R36,     }, \
    { R40,R41,R42,R43,R44,KC_NO,KC_NO,   }, \
    { KC_NO,R51,R52,R53,R54,R55,R56,     }  \
 }

/*  ---------- LEFT HAND -----------       ---------- RIGHT HAND ---------- */
#define LAYOUT_ergodox_pretty_80(                                              \
                                                                               \
    L00,L01,L02,L03,L04,L05,L06,               R00,R01,R02,R03,R04,R05,R06,    \
    L10,L11,L12,L13,L14,L15,L16,               R10,R11,R12,R13,R14,R15,R16,    \
    L20,L21,L22,L23,L24,L25,                       R21,R22,R23,R24,R25,R26,    \
    L30,L31,L32,L33,L34,L35,L36,               R30,R31,R32,R33,R34,R35,R36,    \
    L40,L41,L42,L43,L44,                               R42,R43,R44,R45,R46,    \
                            L55,L56,       R50,R51,                            \
                        L45,L46,L54,       R52,R40,R41,                        \
                        L53,L52,L51,       R55,R54,R53 )                       \
                                                                               \
   /* matrix positions */                                                      \
   {                                                                           \
    {   L00,L01,L02,L03,L04,L05,L06,   }, \
    {   L10,L11,L12,L13,L14,L15,L16,   }, \
    {   L20,L21,L22,L23,L24,L25,KC_NO, }, \
    {   L30,L31,L32,L33,L34,L35,L36,   }, \
    {   L40,L41,L42,L43,L44,L45,L46,   }, \
    { KC_NO,L51,L52,L53,L54,L55,L56,   }, \
    {   R00,R01,R02,R03,R04,R05,R06    }, \
    {   R10,R11,R12,R13,R14,R15,R16    }, \
    { KC_NO,R21,R22,R23,R24,R25,R26    }, \
    {   R30,R31,R32,R33,R34,R35,R36    }, \
    {   R40,R41,R42,R43,R44,R45,R46    }, \
    {   R50,R51,R52,R53,R54,R55,KC_NO  }, \
   }

//void promicro_bootloader_jmp(bool program);


#endif //REV1_H
