/*
 * @Description: The Interface, such as SPI/IIC/8080 or others.
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-14 08:35:40
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-15 09:45:16
 */
#ifndef _POPOGUI_INTERFACE_H__
#define _POPOGUI_INTERFACE_H__

#include "PopoGUI_defines.h"

void PopoGUI_Write_Data(PopoGUI_Data *popoWord, PopoGUI_Size size);
void PopoGUI_Write_Command(PopoGUI_Command *popoCommand, PopoGUI_Size size);

#endif
