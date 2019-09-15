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


void PopoGUI_Write_Byte_Data(PopoGUI_Data_Byte popoByte);
void PopoGUI_Write_Word_Data(PopoGUI_Data_Word popoWord);
void PopoGUI_Write_Command(PopoGUI_Command popoCommand);

#endif
