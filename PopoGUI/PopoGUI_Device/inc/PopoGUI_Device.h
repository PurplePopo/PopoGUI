/*
 * @Description: Device set
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-11 09:58:18
 * @LastEditors:: PurplePopo
 * @LastEditTime: 2019-09-15 11:15:31
 */


#ifndef __POPOGUI_DEIVICE_H__
#define __POPOGUI_DEIVICE_H__

#include "PopoGUI_defines.h"

#if defined POPOGUI_DEVICE_ST7789
#include "PopoGUI_st7789.h" 
#elif defined POPOGUI_DEVICE_SSD1306
#include "PopoGUI_ssd1306.h"
#elif defined POPOGUI_DEVICE_CUSTOM
#include "your own headfile here"
#else
    #error "you must define a DEVICE, or define POPOGUI_DEVICE_CUSTOM to include your own .h file ."
#endif


typedef struct __PopoGUI_Device_Base
{
    PopoGUI_Address         Device;
    PopoGUI_Address         Screen;
    PopoGUI_ColorModel      ColorModel;
    PopoGUI_AddressBuffer   Buffer;
}PopoGUI_Device_Base;


PopoGUI_StatusTypeDef PopoGUI_Device_Init(PopoGUI_Device_Base *device);
PopoGUI_StatusTypeDef PopoGUI_Device_Deinit(PopoGUI_Device_Base *device);
PopoGUI_StatusTypeDef PopoGUI_Device_Clean(PopoGUI_Device_Base device, PopoGUI_Address address);
PopoGUI_StatusTypeDef PopoGUI_Device_Fill(PopoGUI_Device_Base device, PopoGUI_Address address, PopoGUI_Color color);
PopoGUI_StatusTypeDef PopoGUI_Device_DrawDirect(PopoGUI_Device_Base *device, PopoGUI_Address address, PopoGUI_Color color);
PopoGUI_StatusTypeDef PopoGUI_Device_SetAddressBuffer(PopoGUI_Device_Base *device, PopoGUI_AddressBuffer pixelBuffer);
PopoGUI_StatusTypeDef PopoGUI_Device_GetAddressBuffer(PopoGUI_Device_Base *device, PopoGUI_AddressBuffer *pixelBuffer);
PopoGUI_StatusTypeDef PopoGUI_Device_FreshScreen(PopoGUI_Device_Base *device);
PopoGUI_StatusTypeDef PopoGUI_Device_FreshBuffer(PopoGUI_Device_Base *device);

#endif
