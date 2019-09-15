/*
 * @Description: st7789
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-13 11:31:51
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-15 10:05:54
 */

#ifndef _POPOGUI_ST7789_H__
#define __POPOGUI_ST7789_H__

#include "PopoGUI_Interface.h"
#include "PopoGUI_defines.h"

PopoGUI_StatusTypeDef PopoGUI_Driver_Init(void);
PopoGUI_StatusTypeDef PopoGUI_Driver_Set_Address(const PopoGUI_Address address);

#endif


