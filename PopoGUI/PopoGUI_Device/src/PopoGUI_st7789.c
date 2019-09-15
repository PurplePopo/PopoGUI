/*
 * @Description: st7789
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-14 11:08:10
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-15 11:21:50
 */

#include "PopoGUI_st7789.h"

/**
 * @description: Driver Init
 * @param {void} 
 * @return: PopoGUI_StatusTypeDef
 */

PopoGUI_StatusTypeDef PopoGUI_Driver_Init(void)
{
    PopoGUI_Write_Command(0x36);
    #if (PopoGUI_DEVICE_HORIZONTAL==0)
    PopoGUI_Write_Byte_Data(0x00);
    #elif (PopoGUI_DEVICE_HORIZONTAL==1)
    PopoGUI_Write_Byte_Data(0xC0);
    #elif (PopoGUI_DEVICE_HORIZONTAL==2)
    PopoGUI_Write_Byte_Data(0x70);
    #else 
    PopoGUI_Write_Byte_Data(0xA0);
    #endif
    PopoGUI_Write_Command(0x3A); 
    PopoGUI_Write_Byte_Data(0x05);

    PopoGUI_Write_Command(0xB2);
    PopoGUI_Write_Byte_Data(0x0C);
    PopoGUI_Write_Byte_Data(0x0C);
    PopoGUI_Write_Byte_Data(0x00);
    PopoGUI_Write_Byte_Data(0x33);
    PopoGUI_Write_Byte_Data(0x33); 

    PopoGUI_Write_Command(0xB7); 
    PopoGUI_Write_Byte_Data(0x35);  

    PopoGUI_Write_Command(0xBB);
    PopoGUI_Write_Byte_Data(0x19);

    PopoGUI_Write_Command(0xC0);
    PopoGUI_Write_Byte_Data(0x2C);

    PopoGUI_Write_Command(0xC2);
    PopoGUI_Write_Byte_Data(0x01);

    PopoGUI_Write_Command(0xC3);
    PopoGUI_Write_Byte_Data(0x12);   

    PopoGUI_Write_Command(0xC4);
    PopoGUI_Write_Byte_Data(0x20);  

    PopoGUI_Write_Command(0xC6); 
    PopoGUI_Write_Byte_Data(0x0F);    

    PopoGUI_Write_Command(0xD0); 
    PopoGUI_Write_Byte_Data(0xA4);
    PopoGUI_Write_Byte_Data(0xA1);

    PopoGUI_Write_Command(0xE0);
    PopoGUI_Write_Byte_Data(0xD0);
    PopoGUI_Write_Byte_Data(0x04);
    PopoGUI_Write_Byte_Data(0x0D);
    PopoGUI_Write_Byte_Data(0x11);
    PopoGUI_Write_Byte_Data(0x13);
    PopoGUI_Write_Byte_Data(0x2B);
    PopoGUI_Write_Byte_Data(0x3F);
    PopoGUI_Write_Byte_Data(0x54);
    PopoGUI_Write_Byte_Data(0x4C);
    PopoGUI_Write_Byte_Data(0x18);
    PopoGUI_Write_Byte_Data(0x0D);
    PopoGUI_Write_Byte_Data(0x0B);
    PopoGUI_Write_Byte_Data(0x1F);
    PopoGUI_Write_Byte_Data(0x23);

    PopoGUI_Write_Command(0xE1);
    PopoGUI_Write_Byte_Data(0xD0);
    PopoGUI_Write_Byte_Data(0x04);
    PopoGUI_Write_Byte_Data(0x0C);
    PopoGUI_Write_Byte_Data(0x11);
    PopoGUI_Write_Byte_Data(0x13);
    PopoGUI_Write_Byte_Data(0x2C);
    PopoGUI_Write_Byte_Data(0x3F);
    PopoGUI_Write_Byte_Data(0x44);
    PopoGUI_Write_Byte_Data(0x51);
    PopoGUI_Write_Byte_Data(0x2F);
    PopoGUI_Write_Byte_Data(0x1F);
    PopoGUI_Write_Byte_Data(0x1F);
    PopoGUI_Write_Byte_Data(0x20);
    PopoGUI_Write_Byte_Data(0x23);

    PopoGUI_Write_Command(0x21); 

    PopoGUI_Write_Command(0x11); 
    //Delay (120); 

    PopoGUI_Write_Command(0x29); 
}


/**
 * @description: Set_Address
 * @param {PopoGUI_Device_Address} 
 * @return: PopoGUI_StatusTypeDef
 */

PopoGUI_StatusTypeDef PopoGUI_Driver_Set_Address(const PopoGUI_Address address)
{
    #if (PopoGUI_DEVICE_HORIZONTAL==0)
      PopoGUI_Write_Command(0x2a);//列地址设置
      PopoGUI_Write_Data(address.yOffset);
      PopoGUI_Write_Data(address.yPos);
      PopoGUI_Write_Command(0x2b);//行地址设置
      PopoGUI_Write_Data(address.xOffset);
      PopoGUI_Write_Data(address.xPos);
      PopoGUI_Write_Command(0x2c);//储存器写
    #elif (PopoGUI_DEVICE_HORIZONTAL==1)
      PopoGUI_Write_Command(0x2a);//列地址设置
      PopoGUI_Write_Data(address.yOffset);
      PopoGUI_Write_Data(address.yPos);
      PopoGUI_Write_Command(0x2b);//行地址设置
      PopoGUI_Write_Data(address.xOffset+80);
      PopoGUI_Write_Data(address.xPos+80);
      PopoGUI_Write_Command(0x2c);//储存器写
    #elif (PopoGUI_DEVICE_HORIZONTAL==2)
      PopoGUI_Write_Command(0x2a);//列地址设置
      PopoGUI_Write_Data(address.yOffset);
      PopoGUI_Write_Data(address.yPos);
      PopoGUI_Write_Command(0x2b);//行地址设置
      PopoGUI_Write_Data(address.xOffset);
      PopoGUI_Write_Data(address.xPos);
      PopoGUI_Write_Command(0x2c);//储存器写
    #else
      PopoGUI_Write_Command(0x2a);//列地址设置
      PopoGUI_Write_Data(address.yOffset+80);
      PopoGUI_Write_Data(address.yPos+80);
      PopoGUI_Write_Command(0x2b);//行地址设置
      PopoGUI_Write_Data(address.xOffset);
      PopoGUI_Write_Data(address.xPos);
      PopoGUI_Write_Command(0x2c);//储存器写
    #endif
}



