/*
 * @Description: Device Interface, need defined by yourself.
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-13 11:13:11
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-14 22:52:50
 */

#include "PopoGUI_Interface.h"

/**
 * user defined here
 * */
 #include "main.h"

extern SPI_HandleTypeDef hspi1;

//#error "implement interface first! and annotate this."


void PopoGUI_Write_Data(PopoGUI_Data *popoData, PopoGUI_Size size)
{
    //to implement here
	
	HAL_GPIO_WritePin(IPS_DC_GPIO_Port,IPS_DC_Pin,GPIO_PIN_SET);
	HAL_SPI_Transmit(&hspi1,popoData,size,0xff);
}

void PopoGUI_Write_Command(PopoGUI_Command *popoCommand, PopoGUI_Size size)
{
    //to implement here
  HAL_GPIO_WritePin(IPS_DC_GPIO_Port,IPS_DC_Pin,GPIO_PIN_RESET);
	HAL_SPI_Transmit(&hspi1,popoCommand,size,0xff);
}

