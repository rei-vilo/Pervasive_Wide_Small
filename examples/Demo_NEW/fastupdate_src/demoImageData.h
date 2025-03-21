/*
	demoImageData.h
  DEMO set of Image Data
*/

// Load Global Update Images
#if (SCRN==152)   //1.52"
#include "fp_data/152/FuPu_Data.h"
#elif (SCRN==154)   //1.54"
#include "fp_data/154/FuPu_Data.h"
#elif(SCRN==206)   //2.06"
#include "fp_data/206/FuPu_Data.h"
#elif(SCRN==213)   //2.13"
#include "fp_data/213/FuPu_Data.h"
#elif(SCRN==266)   //2.66"
#include "fp_data/266/FuPu_Data.h"
#elif(SCRN==271)   //2.71"
#include "fp_data/271/FuPu_Data.h"
#elif(SCRN==292)   //2.92"
#include "fp_data/292/FuPu_Data.h"
#elif(SCRN==370)   //3.70"
#include "fp_data/370/FuPu_Data.h"
#elif(SCRN==417)   //4.2"
#include "fp_data/420/FuPu_Data.h"
#elif(SCRN==437)  //4.37"
#include "fp_data/437/FuPu_Data.h"
#endif