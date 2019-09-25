/*
 * @Description: st7789
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-14 11:08:10
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-23 17:05:05
 */

#include "PopoGUI_st7789.h"

/**
 * @description: Driver Init
 * @param {void} 
 * @return: PopoGUI_StatusTypeDef
 */

PopoGUI_StatusTypeDef PopoGUI_Driver_Init(void)
{
	PopoGUI_Command command;
	PopoGUI_Data data[16];
	PopoGUI_Size dataSize;
	
	command = COMMAND_ST7789_MADCTL;
  PopoGUI_Write_Command(&command,1);
	#if (PopoGUI_DEVICE_HORIZONTAL==0)
	data[0] = 0x00;
	PopoGUI_Write_Data(data,1);
	#elif (PopoGUI_DEVICE_HORIZONTAL==1)
	data[0] = 0xC0;
	PopoGUI_Write_Data(data,1);
	#elif (PopoGUI_DEVICE_HORIZONTAL==2)
	data[0] = 0x70;
	PopoGUI_Write_Data(data,1);
	#else 
	data[0] = 0xA0;
	PopoGUI_Write_Data(data,1);
	#endif
	
	command = COMMAND_ST7789_COLMOD;
  PopoGUI_Write_Command(&command,1); 
  data[0] = 0x05;
  PopoGUI_Write_Data(data,1);

	command = COMMAND_ST7789_PORCTRL;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0x0c;
  data[1] = 0x0c;
  data[2] = 0x00;
  data[3] = 0x33;
  data[4] = 0x33;
  PopoGUI_Write_Data(data,5);

  command = COMMAND_ST7789_GCTRL;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0x35;
  PopoGUI_Write_Data(data,1);
  

  command = COMMAND_ST7789_VCOMS;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0x19;
  PopoGUI_Write_Data(data,1);
  

  command = COMMAND_ST7789_LCMCTRL;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0x2c;
  PopoGUI_Write_Data(data,1);
  
  command = COMMAND_ST7789_VDVVRHEN;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0x01;
  PopoGUI_Write_Data(data,1);


  command = COMMAND_ST7789_VRHS;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0x12;
  PopoGUI_Write_Data(data,1);

  
  command = COMMAND_ST7789_VDVSET;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0x20;
  PopoGUI_Write_Data(data,1);

  
  command = COMMAND_ST7789_FRCTR2;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0x0F;
  PopoGUI_Write_Data(data,1);



  command = COMMAND_ST7789_PWCTRL1;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0xA4;
  data[1] = 0xA1;
  PopoGUI_Write_Data(data,2);



  command = COMMAND_ST7789_PVGAMCTRL;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0xD0;
  data[1] = 0x04;
  data[2] = 0x0D;
  data[3] = 0x11;
  data[4] = 0x13;
  data[5] = 0x2B;
  data[6] = 0x3F;
  data[7] = 0x54;
  data[8] = 0x4C;
  data[9] = 0x18;
  data[10] = 0x0D;
  data[11] = 0x0B;
  data[12] = 0x1F;
  data[13] = 0x23;
  PopoGUI_Write_Data(data,14);


  command = COMMAND_ST7789_NVGAMCTRL;
  PopoGUI_Write_Command(&command,1);
  data[0] = 0xD0;
  data[1] = 0x04;
  data[2] = 0x0C;
  data[3] = 0x11;
  data[4] = 0x13;
  data[5] = 0x2C;
  data[6] = 0x3F;
  data[7] = 0x44;
  data[8] = 0x51;
  data[9] = 0x2F;
  data[10] = 0x1F;
  data[11] = 0x1F;
  data[12] = 0x20;
  data[13] = 0x23;
  PopoGUI_Write_Data(data,14);
  

  
  data[0] = COMMAND_ST7789_INVON;
  data[1] = COMMAND_ST7789_SLPOUT;
  data[2] = COMMAND_ST7789_DISPON;
  PopoGUI_Write_Command(data,3); 
		
		return PopoGUI_OK;
}


/**
 * @description: Set_Address
 * @param {PopoGUI_Device_Address} 
 * @return: PopoGUI_StatusTypeDef
 */

PopoGUI_StatusTypeDef PopoGUI_Driver_Set_Address(const PopoGUI_Address address)
{
    #if (PopoGUI_DEVICE_HORIZONTAL==0)
      PopoGUI_Write_Command(COMMAND_ST7789_CASET,1);//列地址设置
      PopoGUI_Write_Data((PopoGUI_Data*)&address.yOffset,2);
      PopoGUI_Write_Data((PopoGUI_Data*)&address.yPos,2);
      PopoGUI_Write_Command(COMMAND_ST7789_RASET,1);//行地址设置
      PopoGUI_Write_Data((PopoGUI_Data*)&address.xOffset,2);
      PopoGUI_Write_Data((PopoGUI_Data*)&address.xPos,2);
      PopoGUI_Write_Command(COMMAND_ST7789_RAMWR,1);//储存器写
    #elif (PopoGUI_DEVICE_HORIZONTAL==1)
      PopoGUI_Write_Command(0x2a,1);//列地址设置
      PopoGUI_Write_Data((PopoGUI_Data*)&address.yOffset,2);
      PopoGUI_Write_Data((PopoGUI_Data*)&address.yPos,2);
      PopoGUI_Write_Command(0x2b,1);//行地址设置
      PopoGUI_Write_Data((PopoGUI_Data*)&address.xOffset+80,2);
      PopoGUI_Write_Data((PopoGUI_Data*)&address.xPos+80,2);
      PopoGUI_Write_Command(0x2c,1);//储存器写
    #elif (PopoGUI_DEVICE_HORIZONTAL==2)
      PopoGUI_Write_Command(0x2a,1);//列地址设置
      PopoGUI_Write_Data((PopoGUI_Data*)&address.yOffset,2);
      PopoGUI_Write_Data((PopoGUI_Data*)&address.yPos,2);
      PopoGUI_Write_Command(0x2b,1);//行地址设置
      PopoGUI_Write_Data((PopoGUI_Data*)&address.xOffset,2);
      PopoGUI_Write_Data((PopoGUI_Data*)&address.xPos,2);
      PopoGUI_Write_Command(0x2c,1);//储存器写
    #else
      PopoGUI_Write_Command(0x2a,1);//列地址设置
      PopoGUI_Write_Data((PopoGUI_Data*)&address.yOffset+80,2);
      PopoGUI_Write_Data((PopoGUI_Data*)&address.yPos+80,2);
      PopoGUI_Write_Command(0x2b,1);//行地址设置
      PopoGUI_Write_Data((PopoGUI_Data*)&address.xOffset,2);
      PopoGUI_Write_Data((PopoGUI_Data*)&address.xPos,2);
      PopoGUI_Write_Command(0x2c,1);//储存器写
    #endif
		
		return PopoGUI_OK;
		
}



