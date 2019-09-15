/*
 * @Description: Configure your Device.
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-11 11:07:03
 * @LastEditors:: PurplePopo
 * @LastEditTime: 2019-09-15 10:16:37
 */
#ifndef __POPOGUI_CONFIGURE_H__
#define __POPOGUI_CONFIGURE_H__

/**********************************
 * Device parameter configure
 **********************************/

/**
 *  Driver chip selection
 *  
 *  POPOGUI_DEVICE_ST7789   : ST7789 Device
 *  POPOGUI_DEVICE_SSD1306  : SSD1306 Device
 *  POPOGUI_DEVICE_CUSTOM   : other Device and need custom.
 */
#define POPOGUI_DEVICE_ST7789

#define PopoGUI_DEVICE_HORIZONTAL 0
#define PopoGUI_DEVICE_SIZE_WIDTH 240
#define PopoGUI_DEVICE_SIZE_HIGHT 240
#define PopoGUI_DEVICE_PIXEL_BUFFER_DYNAMIC 0

#define DEFAULT_FOREGROUND_COLOR    (0x0000U)
#define DEFAULT_BACKGROUND_COLOR    (0xFFFFU)

#endif
