/*
 * @Description: PopoGUI common defines, enumeration, marcos and structures defintions.
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-14 09:01:57
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-15 11:24:58
 */

#ifndef __POPOGUI_DEFINES_H__
#define __POPOGUI_DEFINES_H__

#include "PopoGUI_Configure.h"

#define NULL 0U

typedef enum
{
    PopoGUI_OK      =   0x00U,
    PopoGUI_ERROR   =   0x01U,
    PopoGUI_BUSY    =   0x02U,
    PopoGUI_TIMEOUT =   0x03U
}PopoGUI_StatusTypeDef;

typedef enum 
{
    PopoGUI_RGB565 = 0U,
    PopoGUI_BITMAP = 1U
}PopoGUI_ColorModel;

typedef unsigned char   PopoGUI_Data_Byte;
typedef unsigned int    PopoGUI_Data_Word;
typedef unsigned char   PopoGUI_Command;
typedef unsigned int    PopoGUI_Position;
typedef unsigned int    PopoGUI_Color; 

typedef unsigned char PopoGUI_AddressBuffer;
typedef struct 
{
    PopoGUI_Position posX;
    PopoGUI_Position posY;
    PopoGUI_Color color;
}PopoGUI_Pixel;

typedef struct 
{
    PopoGUI_Data_Word xOffset;
    PopoGUI_Data_Word yOffset;
    PopoGUI_Data_Word xPos;
    PopoGUI_Data_Word yPos;
}PopoGUI_Address;


#endif
