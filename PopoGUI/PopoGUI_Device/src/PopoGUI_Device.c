/*
 * @Description: Device
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-13 09:10:22
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-15 11:27:34
 */

#include "PopoGUI_Device.h"
#include "stdlib.h"


PopoGUI_StatusTypeDef PopoGUI_Device_Init(PopoGUI_Device_Base *device)
{

    PopoGUI_Driver_Init();
    
}

PopoGUI_StatusTypeDef PopoGUI_Device_Deinit(PopoGUI_Device_Base *device)
{
    
}

PopoGUI_StatusTypeDef PopoGUI_Device_Clean(PopoGUI_Device_Base device, PopoGUI_Address address)
{
    PopoGUI_Data_Word i,j;
    PopoGUI_Driver_Set_Address(address);
    for (i = 0; i < PopoGUI_DEVICE_SIZE_WIDTH; i++)
    {
        for (j = 0; j < PopoGUI_DEVICE_SIZE_HIGHT; j++)
        {
            PopoGUI_Write_Word_Data(DEFAULT_BACKGROUND_COLOR);
        }
    }
}

PopoGUI_StatusTypeDef PopoGUI_Device_Fill(PopoGUI_Device_Base device, PopoGUI_Address address, PopoGUI_Color color)
{
    PopoGUI_Data_Word i,j;
    PopoGUI_Driver_Set_Address(address);
    for (i = 0; i < PopoGUI_DEVICE_SIZE_WIDTH; i++)
    {
        for (j = 0; j < PopoGUI_DEVICE_SIZE_HIGHT; j++)
        {
            PopoGUI_Write_Word_Data(color);
        }
    }
}

PopoGUI_StatusTypeDef PopoGUI_Device_DrawDirect(PopoGUI_Device_Base *device, PopoGUI_Address address, PopoGUI_Color color)
{
    PopoGUI_Data_Word i,j;
    PopoGUI_Driver_Set_Address(address);
    for (i = 0; i < abs(address.xPos-address.xOffset); i++)
    {
        for (j = 0; j < abs(address.yPos-address.yOffset); j++)
        {
            PopoGUI_Write_Word_Data(color);
        }
    }
}

PopoGUI_StatusTypeDef PopoGUI_Device_SetAddressBuffer(PopoGUI_Device_Base *device, PopoGUI_AddressBuffer pixelBuffer);
PopoGUI_StatusTypeDef PopoGUI_Device_GetAddressBuffer(PopoGUI_Device_Base *device, PopoGUI_AddressBuffer *pixelBuffer);
PopoGUI_StatusTypeDef PopoGUI_Device_FreshScreen(PopoGUI_Device_Base *device);
PopoGUI_StatusTypeDef PopoGUI_Device_FreshBuffer(PopoGUI_Device_Base *device);
 