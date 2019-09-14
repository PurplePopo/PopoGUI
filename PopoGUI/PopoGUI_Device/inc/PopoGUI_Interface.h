/*
 * @Description: The Interface, such as SPI/IIC/8080 or others.
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-14 08:35:40
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-14 08:49:55
 */
#ifndef _POPOGUI_INTERFACE_H__
#define _POPOGUI_INTERFACE_H__

typedef unsigned char PopoGUI_Data;
typedef unsigned char PopoGUI_Command;

static void PopoGUI_Write_Byte(PopoGUI_Data uiData);
void PopoGUI_Write_Data(PopoGUI_Data uiData);
void PopoGUI_Write_Command(PopoGUI_Command uiCommand);

#endif
