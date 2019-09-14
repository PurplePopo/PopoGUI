/*
 * @Description: PopoGUI common defines, enumeration, marcos and structures defintions.
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-14 09:01:57
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-14 11:34:36
 */

#ifndef __POPOGUI_DEFINES_H__
#define __POPOGUI_DEFINES_H__

#include "PopoGUI_DeviceConfigure.h"

typedef enum
{
    PopoGUI_OK      =   0x00U,
    PopoGUI_ERROR   =   0x01U,
    PopoGUI_BUSY    =   0x02U,
    PopoGUI_TIMEOUT =   0x03U
}PopoGUI_StatusTypeDef;

typedef enum
{
    POPOGUI_PIXEL_RESET = 0U,
    POPOGUI_PIXEL_SET   
}PopoGUI_PixelState;

typedef unsigned int PopoGUI_Color; 
typedef struct 
{
    /* data */
}PopoGUI_Pixel;

// typedef struct __PopoGUI_SCREEN
// {
//     /* data */

// }PopoGUI_Screen;


#endif
