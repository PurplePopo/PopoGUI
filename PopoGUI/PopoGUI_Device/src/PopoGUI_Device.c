/*
 * @Description: Device
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-13 09:10:22
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-25 09:46:11
 */

#include "PopoGUI_Device.h"


PopoGUI_StatusTypeDef PopoGUI_Device_Init(PopoGUI_Device_Base *device)
{

    PopoGUI_Driver_Init();
    return PopoGUI_OK;
}

PopoGUI_StatusTypeDef PopoGUI_Device_Deinit(PopoGUI_Device_Base *device)
{
	
    return PopoGUI_OK;
}

PopoGUI_StatusTypeDef PopoGUI_Device_Clean(PopoGUI_Device_Base *device, PopoGUI_Address address)
{
    PopoGUI_Position i,j;
    PopoGUI_Driver_Set_Address(address);
		PopoGUI_Write_Data((PopoGUI_Data*)DEFAULT_BACKGROUND_COLOR,2*(address.xPos-address.xOffset)*(address.yPos-address.yOffset));
	
//    for (i = 0; i < address.xPos-address.xOffset; i++)
//    {
//        for (j = 0; j < address.yPos-address.yOffset; j++)
//        {
//            PopoGUI_Write_Data(DEFAULT_BACKGROUND_COLOR);
//        }
//    }
		return PopoGUI_OK;
}

PopoGUI_StatusTypeDef PopoGUI_Device_Fill(PopoGUI_Device_Base *device, PopoGUI_Address address, PopoGUI_Color color)
{
    PopoGUI_Position i,j;
    PopoGUI_Driver_Set_Address(address);
		PopoGUI_Write_Data((PopoGUI_Data*)&color,2*(address.xPos-address.xOffset)*(address.yPos-address.yOffset));
	
//    for (i = 0; i < address.xPos-address.xOffset; i++)
//    {
//        for (j = 0; j < address.yPos-address.yOffset; j++)
//        {
//            PopoGUI_Write_Data(color);
//        }
//    }
		return PopoGUI_OK;
}

PopoGUI_StatusTypeDef PopoGUI_Device_Draw(PopoGUI_Device_Base *device, PopoGUI_Address address, PopoGUI_Color *colorData)
{
    PopoGUI_Position i,j;
    PopoGUI_Driver_Set_Address(address);
		PopoGUI_Write_Data((PopoGUI_Data*)&colorData,2*(address.xPos-address.xOffset)*(address.yPos-address.yOffset));
	
//    for (i = 0; i < (address.xPos-address.xOffset); i++)
//    {
//        for (j = 0; j < (address.yPos-address.yOffset); j++)
//        {
//            PopoGUI_Write_Word_Data(colorData++);
//        }
//    }
		return PopoGUI_OK;
}


