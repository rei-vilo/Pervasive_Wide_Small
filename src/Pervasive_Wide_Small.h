///
/// @file Pervasive_Wide_Small.h
/// @brief Driver for small screens with wide temperature and embedded fast update
///
/// @details Project Pervasive Displays Library Suite
/// @n Based on highView technology
///
/// @date 21 Feb 2025
/// @version 904
///
/// @copyright (c) Pervasive Displays, 2010-2025
/// @copyright All rights reserved
/// @copyright For exclusive use with Pervasive Displays screens
///
/// * Basic edition: for hobbyists and for basic usage
/// @n Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)
/// @see https://creativecommons.org/licenses/by-sa/4.0/
///
/// @n Consider the Evaluation or Commercial editions for professionals or organisations and for commercial usage
///
/// * Evaluation edition: for professionals or organisations, evaluation only, no commercial usage
/// @n All rights reserved
///
/// * Commercial edition: for professionals or organisations, commercial usage
/// @n All rights reserved
///
/// * Viewer edition: for professionals or organisations
/// @n All rights reserved
///
/// * Documentation
/// @n All rights reserved
///
/// @see Application notes
/// * [Application Note for 1.52" of wide temperature EPDs](https://www.pervasivedisplays.com/wp-content/uploads/2023/12/ApplicationNote_1.52-inch_wide-Temperature_EPD_v01_20231225_A.pdf)
/// * [Application Note for small sizes of wide temperature EPDs](https://www.pervasivedisplays.com/wp-content/uploads/2023/02/ApplicationNote_Small_Size_wide-Temperature_EPD_v03_20231031_B.pdf)
///

// SDK and configuration
#include "PDLS_Common.h"

#if (PDLS_COMMON_RELEASE < 902)
#error Required PDLS_COMMON_RELEASE 902
#endif // PDLS_COMMON_RELEASE

// Driver
#include "Driver_EPD_Virtual.h"

#ifndef DRIVER_WIDE_SMALL_RELEASE
///
/// @brief Library release number
///
#define DRIVER_WIDE_SMALL_RELEASE 904

///
/// @name List of supported screens
/// @details Wide temperature and embedded fast update
///
/// @note Normal and fast update
/// @see https://www.pervasivedisplays.com/products-e-ink-display/?_sft_etc_itc=pu%20itc&_sft_temperature_range=m15c-to-p60c
/// @{
///
#define eScreen_EPD_150_KS_0J SCREEN(SIZE_150, FILM_K, DRIVER_J) ///< reference 150-KS-0J
#define eScreen_EPD_152_KS_0J SCREEN(SIZE_152, FILM_K, DRIVER_J) ///< reference 152-KS-0J
#define eScreen_EPD_154_KS_0C SCREEN(SIZE_154, FILM_K, DRIVER_C) ///< reference 154-KS-0C
#define eScreen_EPD_206_KS_0E SCREEN(SIZE_206, FILM_K, DRIVER_E) ///< reference 206-KS-0E
#define eScreen_EPD_213_KS_0E SCREEN(SIZE_213, FILM_K, DRIVER_E) ///< reference 213-KS-0E
#define eScreen_EPD_266_KS_0C SCREEN(SIZE_266, FILM_K, DRIVER_C) ///< reference 266-KS-0C
#define eScreen_EPD_271_KS_09 SCREEN(SIZE_271, FILM_K, DRIVER_9) ///< reference 271-KS-09
#define eScreen_EPD_271_KS_0C SCREEN(SIZE_271, FILM_K, DRIVER_C) ///< reference 271-KS-0C
#define eScreen_EPD_290_KS_0F SCREEN(SIZE_290, FILM_K, DRIVER_F) ///< reference 290-KS-0F
#define eScreen_EPD_370_KS_0C SCREEN(SIZE_370, FILM_K, DRIVER_C) ///< reference 370-KS-0C
#define eScreen_EPD_417_KS_0D SCREEN(SIZE_417, FILM_K, DRIVER_D) ///< reference 417-KS-0D
#define eScreen_EPD_437_KS_0C SCREEN(SIZE_437, FILM_K, DRIVER_C) ///< reference 437-KS-0C
/// @}

///
/// @name List of features
/// @{
///
#define WITH_MONOCHROME ///< With B&W only
#define WITH_FAST ///< With fast update capability
/// @}

///
/// @brief Driver variant
///
#define DRIVER_EPD_RELEASE DRIVER_WIDE_SMALL_RELEASE
#define DRIVER_EPD_VARIANT "Wide small"

///
/// @brief Wide small screens class
///
class Pervasive_Wide_Small : public Driver_EPD_Virtual
{
  public:

    ///
    /// @brief Constructor
    /// @param eScreen_EPD_EXT3 size and model of the e-screen
    /// @param board board configuration
    ///
    Pervasive_Wide_Small(eScreen_EPD_t eScreen_EPD, pins_t board);

    /// @name General
    /// @{

    ///
    /// @brief Initialisation
    /// @details Initialise the board and read OTP
    ///
    void begin();

    ///
    /// @brief Driver reference
    ///
    /// @return STRING_CONST_TYPE scope and release number
    /// @note Example `Wide small v9.0.0`
    ///
    STRING_CONST_TYPE reference();

    ///
    /// @brief Normal update
    ///
    /// @param frame next image
    /// @param sizeFrame size of the frame
    ///
    void updateNormal(FRAMEBUFFER_CONST_TYPE frame, uint32_t sizeFrame);

    ///
    /// @brief Fast update
    ///
    /// @param frame next image
    /// @param frame2 previous image
    /// @param sizeFrame size of the frame
    ///
    void updateFast(FRAMEBUFFER_CONST_TYPE frame, FRAMEBUFFER_CONST_TYPE frame2, uint32_t sizeFrame);

    /// @}

  protected:

  private:

    // Variables and functions specific to the screen
    uint8_t COG_data[2]; // OTP
    bool s_flag50; // Register 0x50

    void COG_reset();
    void COG_getDataOTP();
    void COG_initial(uint8_t updateMode);
    void COG_sendImageDataNormal(FRAMEBUFFER_CONST_TYPE nextFrame, uint32_t sizeFrame);
    void COG_sendImageDataFast(FRAMEBUFFER_CONST_TYPE previousFrame, FRAMEBUFFER_CONST_TYPE nextFrame, uint32_t sizeFrame);
    void COG_update(uint8_t updateMode);
    void COG_stopDCDC();
};

#endif // DRIVER_WIDE_SMALL_RELEASE
