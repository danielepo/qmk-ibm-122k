#ifndef EVIL80_H
#define EVIL80_H

#include "quantum.h"


//#define KEYBOARD_MAPPING
#define  KEYBOARD_MAPPING_

#ifdef  KEYBOARD_MAPPING

#define KEYMAP( \
                K7J,K6J,K6K,K5J,K4J,K4K,K3J,K2J,K2K,K1J,K0J,K0K,\
                K7K,K7L,K6L,K5K,K5L,K4L,K3K,K3L,K2L,K1K,K1L,K0L,\
K4B,K4C , K4E,K5E,K5F,K5G,K5H,K4H,K4I,K5I,K5M,K5N,K5O,K4O,K4M,K4P  ,  K4Q,K4R,K5Q,   K5P  ,K5R,K5S,K5A,\
K5B,K3B , K3C,K3E,K3F,K3G,K3H,K2H,K2I,K3I,K3M,K3N,K3O,K2O,K2M,K1P,              K6Q,K2P,K3Q,  K3P,K3R,K3S,K3A  ,\
K2B,K2C , K1C,K6D,K6E,K6F,K6H,K7H,K7I,K6I,K6M,K6N,K6O,K7O,K1O,                   K7Q,          K6P,K6R,K6S,K6A,\
K6B,K6C , K0D,K0E,K1E,K1F,K1G,K1H,K0H,K0I,K1I,K1M,K1N,K0O,K1D,     K1A,K7T,K6T,K1B,K1R,K1S,K0T,\
K7C,K7B, K7A,   K0A,  K0B,K7D,  K0C,                         K7P,        K0R,     K0S\
) { \
    {  KC_A, KC_B,  KC_0 , KC_D , KC_1 , KC_F , KC_G , KC_H , KC_I , KC_1 , KC_K , KC_L , KC_M , KC_N , KC_O , KC_P ,KC_5 , KC_R , KC_S , KC_T  },\
    {  KC_A, KC_B,  KC_1 , KC_D , KC_2 , KC_F , KC_G , KC_H , KC_I , KC_2 , KC_K , KC_L , KC_M , KC_N , KC_O , KC_P ,KC_6 , KC_R , KC_S , KC_T  },\
    {  KC_A, KC_B,  KC_2 , KC_D , KC_3 , KC_F , KC_G , KC_H , KC_I , KC_3 , KC_K , KC_L , KC_M , KC_N , KC_O , KC_P ,KC_7 , KC_R , KC_S , KC_T  },\
    {  KC_A, KC_B,  KC_3 , KC_D , KC_4 , KC_F , KC_G , KC_H , KC_I , KC_4 , KC_K , KC_L , KC_M , KC_N , KC_O , KC_P ,KC_8 , KC_R , KC_S , KC_T  },\
    {  KC_A, KC_B,  KC_4 , KC_D , KC_5 , KC_F , KC_G , KC_H , KC_I , KC_4 , KC_K , KC_L , KC_M , KC_N , KC_O , KC_P ,KC_8 , KC_R , KC_S , KC_T  },\
    {  KC_A, KC_B,  KC_5 , KC_D , KC_6 , KC_F , KC_G , KC_H , KC_I , KC_4 , KC_K , KC_L , KC_M , KC_N , KC_O , KC_P ,KC_8 , KC_R , KC_S , KC_T  },\
    {  KC_A, KC_B,  KC_6 , KC_D , KC_7 , KC_F , KC_G , KC_H , KC_I , KC_4 , KC_K , KC_L , KC_M , KC_N , KC_O , KC_P ,KC_8 , KC_R , KC_S , KC_T  },\
    {  KC_A, KC_B,  KC_7 , KC_D , KC_8 , KC_F , KC_G , KC_H , KC_I , KC_4 , KC_K , KC_L , KC_M , KC_N , KC_O , KC_P ,KC_8 , KC_R , KC_S , KC_T  },\
}
#else
#define ___ NO
#define KC____ KC_NO
#define _T_ TRNS
#define KC__T_ KC_TRNS

#define KEYMAP( \
                K0J,K1J,K1K,K2J,K3J,K3K,K4J,K5J,K5K,K6J,K7J,K7K,\
                K0K,K0L,K1L,K2K,K2L,K3L,K4K,K4L,K5L,K6K,K6L,K7L,\
K3B,K3C  ,  K3E,K2E,K2F,K2G,K2H,K3H,K3I,K2I,K2N,K2M,K2O,K3O,K3N,K3P,  K4T,K3S,K3T, K2P,K2S,K2R,K2A,\
K2B,K4B  ,  K4C,K4E,K4F,K4G,K4H,K5H,K5I,K4I,K4N,K4M,K4O,K5O,K5N,K5P,  K2T,K6T,K5T, K4P,K4S,K4R,K4A,\
K5B,K5C  ,  K6C,K1E,K1F,K1G,K1H,K0H,K0I,K1I,K1N,K1M,K1O,K0O,K6O,          K1T,     K1P,K1S,K1R,K1A,\
K1B,K1C  ,  K7D,K7E,K6E,K6F,K6G,K6H,K7H,K7I,K6I,K6N,K6M,K7O,K6D,      K6A,K0Q,K1Q, K6B,K6S,K6R,K7Q,\
K0C,K0B  ,  K0A,    K7A,                K7B,        K0D,    K7C,          K0P,     K7S,    K7R\
) { \
{KC_##K0A, KC_##K0B, KC_##K0C,  KC_##K0D, KC_NO   ,  KC_NO    ,  KC_NO    , KC_##K0H, KC_##K0I , KC_##K0J, KC_##K0K, KC_##K0L, KC_NO   , KC_NO   , KC_##K0O,  KC_##K0P,  KC_##K0Q,  KC_NO   ,  KC_NO   , KC_##K1T},\
{KC_##K1A, KC_##K1B, KC_##K1C,  KC_NO   , KC_##K1E,  KC_##K1F ,  KC_##K1G , KC_##K1H, KC_##K1I , KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N, KC_##K1O,  KC_##K1P,  KC_##K1Q,  KC_##K1R,  KC_##K1S, KC_##K2T},\
{KC_##K2A, KC_##K2B, KC_NO   ,  KC_NO   , KC_##K2E,  KC_##K2F ,  KC_##K2G , KC_##K2H, KC_##K2I , KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_##K2N, KC_##K2O,  KC_##K2P,  KC_NO   ,  KC_##K2R,  KC_##K2S, KC_##K3T},\
{KC_NO   , KC_##K3B, KC_##K3C,  KC_NO   , KC_##K3E,  KC_NO    ,  KC_NO    , KC_##K3H, KC_##K3I , KC_##K3J, KC_##K3K, KC_##K3L, KC_NO   , KC_##K3N, KC_##K3O,  KC_##K3P,  KC_NO   ,  KC_NO   ,  KC_##K3S, KC_##K4T},\
{KC_##K4A, KC_##K4B, KC_##K4C,  KC_NO   , KC_##K4E,  KC_##K4F ,  KC_##K4G , KC_##K4H, KC_##K4I , KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N, KC_##K4O,  KC_##K4P,  KC_NO   ,  KC_##K4R,  KC_##K4S, KC_##K5T},\
{KC_NO   , KC_##K5B, KC_##K5C,  KC_NO   , KC_NO   ,  KC_NO    ,  KC_NO    , KC_##K5H, KC_##K5I , KC_##K5J, KC_##K5K, KC_##K5L, KC_NO   , KC_##K5N, KC_##K5O,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   , KC_##K6T},\
{KC_##K6A, KC_##K6B, KC_##K6C,  KC_##K6D, KC_##K6E,  KC_##K6F ,  KC_##K6G , KC_##K6H, KC_##K6I , KC_##K6J, KC_##K6K, KC_##K6L, KC_##K6M, KC_##K6N, KC_##K6O,  KC_##K5P,  KC_NO   ,  KC_##K6R,  KC_##K6S, KC_NO},\
{KC_##K7A, KC_##K7B, KC_##K7C,  KC_##K7D, KC_##K7E,  KC_NO    ,  KC_NO    , KC_##K7H, KC_##K7I , KC_##K7J, KC_##K7K, KC_##K7L, KC_NO   , KC_NO   , KC_##K7O,  KC_NO   ,  KC_##K7Q,  KC_##K7R,  KC_##K7S, KC_NO}\
}
#endif
#endif
