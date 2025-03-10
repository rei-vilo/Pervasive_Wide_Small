/*
	demoImageData.h
  DEMO set of Image Data
*/

// Load Global Update Images
#if (SCRN==152)   //1.52"
#include "image_data/1.52/152_1.c"
#include "image_data/1.52/white.c"
#define frameSize	5000
#define BW_monoBuffer        (uint8_t *) & Img_152_gu
#define BW_0x00Buffer        (uint8_t *) & Img_white_gu
#elif (SCRN==154)   //1.54"
#include "image_data/1.54/image_154_152x152_BW.c"
#include "image_data/1.54/image_154_152x152_BWR.c"
#define frameSize	2888
#define BW_monoBuffer        (uint8_t *) & image_154_152x152_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_154_152x152_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_154_152x152_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_154_152x152_BWR_redBuffer
#elif(SCRN==206)   //2.06"
#include "image_data/2.06/image_206_248x128_BW.c"
#define frameSize	3968
#define BW_monoBuffer        (uint8_t *) & image_206_248x128_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_206_248x128_BW_0x00
#elif(SCRN==213)   //2.13"
#include "image_data/2.13/image_213_212x104_BW.c"
#include "image_data/2.13/image_213_212x104_BWR.c"
#define frameSize	2756
#define BW_monoBuffer        (uint8_t *) & image_213_212x104_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_213_212x104_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_213_212x104_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_213_212x104_BWR_redBuffer
#elif(SCRN==266)   //2.66"
#include "image_data/2.66/image_266_296x152_BW.c"
#include "image_data/2.66/image_266_296x152_BWR.c"
#define frameSize	5624
#define BW_monoBuffer        (uint8_t *) & image_266_296x152_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_266_296x152_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_266_296x152_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_266_296x152_BWR_redBuffer
#elif(SCRN==271)   //2.71"
#include "image_data/2.71/image_271_264x176_BW.c"
#include "image_data/2.71/image_271_264x176_BWR.c"
#define frameSize	5808
#define BW_monoBuffer        (uint8_t *) & image_271_264x176_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_271_264x176_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_271_264x176_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_271_264x176_BWR_redBuffer
#elif(SCRN==290)   //2.90"
#include "image_data/2.92/image_292_384x168_BW.c"
#define frameSize	8064
#define BW_monoBuffer        (uint8_t *) & image_292_384x168_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_292_384x168_BW_0x00
#elif(SCRN==370)   //3.70"
#include "image_data/3.70/image_370_416x240_BW.c"
#include "image_data/3.70/image_370_416x240_BWR.c"
#define frameSize	12480
#define BW_monoBuffer        (uint8_t *) & image_370_416x240_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_370_416x240_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_370_416x240_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_370_416x240_BWR_redBuffer
#elif(SCRN==417)   //4.2"
#include "image_data/4.20/image_420_400x300_BW.c"
#include "image_data/4.20/image_420_400x300_BWR.c"
#define frameSize	15000
#define BW_monoBuffer        (uint8_t *) & image_420_400x300_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_420_400x300_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_420_400x300_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_420_400x300_BWR_redBuffer
#elif(SCRN==437)  //4.37"
#include "image_data/4.37/image_437_480x176_BW.c"
#include "image_data/4.37/image_437_480x176_BWR.c"
#define frameSize	10560
#define BW_monoBuffer        (uint8_t *) & image_437_480x176_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_437_480x176_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_437_480x176_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_437_480x176_BWR_redBuffer
#endif