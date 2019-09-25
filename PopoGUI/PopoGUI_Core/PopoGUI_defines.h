/*
 * @Description: PopoGUI common defines, enumeration, marcos and structures defintions.
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-14 09:01:57
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-25 09:21:04
 */

#ifndef __POPOGUI_DEFINES_H__
#define __POPOGUI_DEFINES_H__

#include "PopoGUI_Configure.h"
#ifndef NULL
	#define NULL 0U
#endif

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

typedef unsigned char   		PopoGUI_Data;
typedef unsigned char   		PopoGUI_Command;
typedef unsigned short int 		PopoGUI_Size;
typedef unsigned short int  	PopoGUI_Position;
typedef unsigned short int		PopoGUI_Color; 

typedef unsigned char PopoGUI_AddressBuffer;
typedef struct 
{
    PopoGUI_Position posX;
    PopoGUI_Position posY;
    PopoGUI_Color color;
}PopoGUI_Pixel;

typedef struct 
{
    PopoGUI_Position xOffset;
    PopoGUI_Position yOffset;
    PopoGUI_Position xPos;
    PopoGUI_Position yPos;
}PopoGUI_Address;


#endif
