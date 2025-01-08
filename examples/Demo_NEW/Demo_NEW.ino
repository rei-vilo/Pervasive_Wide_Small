#include "Pervasive_Wide_Small.h"

// DEMO Image Set <Comment out when in User Mode>
// Screen Size: 152, 154, 206, 213, 266, 271, 290, 370, 417, 437
#define SCRN 152
#include "globalupdate_src/demoImageData.h"
#include "fastupdate_src/demoImageData.h"

Pervasive_Wide_Small myDriver(eScreen_EPD_152_KS_0J, boardRaspberryPiPico_RP2040);

void setup()
{
    hV_HAL_begin();

    myDriver.begin();

    myDriver.updateNormal(BW_monoBuffer, frameSize);

    myDriver.updateFast(FastPic_w, FastPic_1, frameSize);
    myDriver.updateFast(FastPic_b, FastPic_w, frameSize);
    myDriver.updateFast(FastPic_2, FastPic_b, frameSize);
    myDriver.updateFast(FastPic_3, FastPic_2, frameSize);
    myDriver.updateFast(FastPic_4, FastPic_3, frameSize);
    myDriver.updateFast(FastPic_b, FastPic_4, frameSize);
    myDriver.updateFast(FastPic_w, FastPic_b, frameSize);

    hV_HAL_exit();
}

void loop()
{
    hV_HAL_delayMilliseconds(1000);
}
