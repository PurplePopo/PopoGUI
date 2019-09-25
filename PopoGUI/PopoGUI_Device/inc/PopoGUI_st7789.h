/*
 * @Description: st7789
 * @Author: PurplePopo
 * @Github: https://github.com/PurplePopo/PopoGUI
 * @Date: 2019-09-13 11:31:51
 * @LastEditors: PurplePopo
 * @LastEditTime: 2019-09-23 16:22:55
 */

#ifndef __POPOGUI_ST7789_H__
#define __POPOGUI_ST7789_H__

#include "PopoGUI_Interface.h"
#include "PopoGUI_defines.h"

/**
 *	Command Table Defined
 **/

//System Function Command Table 1
#define  COMMAND_ST7789_NOP					(0x00)		//No operation
#define  COMMAND_ST7789_SWRESET			(0x01)		//Software reset
#define  COMMAND_ST7789_RDDID				(0x04)		//Read display ID		
#define  COMMAND_ST7789_RDDST				(0x09)		//Read display status		
#define  COMMAND_ST7789_RDDPM				(0x0A)		//Read display power		
#define  COMMAND_ST7789_RDDMADCTL		(0x0B)		//Read display	
#define  COMMAND_ST7789_RDDCOLMOD		(0x0C)		//Read display pixel	
#define  COMMAND_ST7789_RDDIM				(0x0D)		//Read display image
#define  COMMAND_ST7789_RDDSM				(0x0E)		//Read display signal
#define  COMMAND_ST7789_RDDSDR			(0x0F)		//Read display self-diagnostic result
#define  COMMAND_ST7789_SLPIN				(0x10)		//Sleep in
#define  COMMAND_ST7789_SLPOUT			(0x11)		//Sleep out
#define  COMMAND_ST7789_PTLON				(0x12)		//Partial mode on
#define  COMMAND_ST7789_NORON				(0x13)		//Partial off
#define  COMMAND_ST7789_INVOFF			(0x20)		//Display inversion off	
#define  COMMAND_ST7789_INVON				(0x21)		//Display inversion on
#define  COMMAND_ST7789_GAMSET			(0x26)		//Gamma set	
#define  COMMAND_ST7789_DISPOFF			(0x28)		//Display off
#define  COMMAND_ST7789_DISPON			(0x29)		//Display on
#define  COMMAND_ST7789_CASET				(0x2A)		//Column address set
#define  COMMAND_ST7789_RASET				(0x2B)		//Row address set
#define  COMMAND_ST7789_RAMWR				(0x2C)		//Memory write
#define  COMMAND_ST7789_RAMRD				(0x2E)		//Memory read
#define  COMMAND_ST7789_PTLAR				(0x30)		//Partial start/end address set
#define  COMMAND_ST7789_VSCRDEF			(0x33)		//Vertcal scrolling definition	
#define  COMMAND_ST7789_TEOFF				(0x34)		//Tearing effect line off
#define  COMMAND_ST7789_TEON				(0x35)		//Tearing effect line on
#define  COMMAND_ST7789_MADCTL			(0x36)		//Memory data access control
#define  COMMAND_ST7789_VSCRSADD		(0x37)		//Vertical scrolling start addtess 
#define  COMMAND_ST7789_IDMOFF			(0x38)		//Idle mode off
#define  COMMAND_ST7789_IDMON				(0x39)		//Idle mode on
#define  COMMAND_ST7789_COLMOD			(0x3A)		//Interface pixel format
#define  COMMAND_ST7789_RAMWRC			(0x3C)		//Memory write continue
#define  COMMAND_ST7789_RAMRDC			(0x3E)		//Memory read continue
#define  COMMAND_ST7789_TESCAN			(0x44)		//Set tear scanline
#define  COMMAND_ST7789_RDTESCAN		(0x45)		//Dummy Read
#define  COMMAND_ST7789_WRDISBV			(0x51)		//Write display brightness
#define  COMMAND_ST7789_RDDISBV			(0x52)		//Read display brightness
#define  COMMAND_ST7789_WRCTRLD			(0x53)		//Write CTRL display
#define  COMMAND_ST7789_RDCTRLD			(0x54)		//Read CTRL display
#define  COMMAND_ST7789_WRCACE			(0x55)		//Write content adaptive brightness control and Color enhancement
#define  COMMAND_ST7789_RDCABC			(0x56)		//Read content adaptive brightness control
#define  COMMAND_ST7789_WRCABCMB		(0x5E)		//Write CABC minimum brightness
#define  COMMAND_ST7789_RDCABCMB		(0x5F)		//Read CABC minimum brightness
#define  COMMAND_ST7789_RDABCSDR		(0x68)		//Read Automatic Brightness Control Self-Diagnostic Result
#define  COMMAND_ST7789_RDID1				(0xDA)		//Read ID 1
#define  COMMAND_ST7789_RDID2				(0xDB)		//Read ID 2
#define  COMMAND_ST7789_RDID3				(0xDC)		//Read ID 3

//System Function Command Table 2
#define  COMMAND_ST7789_RAMCTRL			(0xB0)		//RAM Control
#define  COMMAND_ST7789_RGBCTRL			(0xB1)		//RGB Control
#define  COMMAND_ST7789_PORCTRL			(0xB2)		//Porch control		
#define  COMMAND_ST7789_FRCTRL1			(0xB3)		//Frame Rate Control 1		
#define  COMMAND_ST7789_PARCTRL			(0xB5)		//Partial control	
#define  COMMAND_ST7789_GCTRL				(0xB7)		//Gate control	
#define  COMMAND_ST7789_GTADJ				(0xB8)		//Gate on timing adjustment	
#define  COMMAND_ST7789_DGMEN				(0xBA)		//Digital Gamma Enable
#define  COMMAND_ST7789_VCOMS				(0xBB)		//VCOM Setting
#define  COMMAND_ST7789_POWSAVE			(0xBC)		//Power saving mode
#define  COMMAND_ST7789_DLPOFFSAVE	(0xBD)		//Display off power save
#define  COMMAND_ST7789_LCMCTRL			(0xC0)		//LCM Control
#define  COMMAND_ST7789_IDSET				(0xC1)		//ID Setting
#define  COMMAND_ST7789_VDVVRHEN		(0xC2)		//VDV and VRH Command Enable
#define  COMMAND_ST7789_VRHS				(0xC3)		//VRH Set
#define  COMMAND_ST7789_VDVSET			(0xC4)		//VDV Setting
#define  COMMAND_ST7789_VCMOFSET		(0xC5)		//VCOM Offset Set
#define  COMMAND_ST7789_FRCTR2			(0xC6)		//FR Control 2
#define  COMMAND_ST7789_CABCCTRL		(0xC7)		//CABC Control
#define  COMMAND_ST7789_REGSEL1			(0xC8)		//Register value selection 1
#define  COMMAND_ST7789_REGSEL2			(0xCA)		//Register value selection 2
#define  COMMAND_ST7789_PWMFRSEL		(0xCC)		//PWM Frequency Selection
#define  COMMAND_ST7789_PWCTRL1			(0xD0)		//Power Control 1
#define  COMMAND_ST7789_VAPVANEN		(0xD2)		//Enable VAP/VAN signal output
#define  COMMAND_ST7789_CMD2EN			(0xDF)		//Command 2 Enable
#define  COMMAND_ST7789_PVGAMCTRL		(0xE0)		//Positive Voltage Gamma Control
#define  COMMAND_ST7789_NVGAMCTRL		(0xE1)		//Negative Voltage Gamma Control
#define  COMMAND_ST7789_DGMLUTR			(0xE2)		//Digital Gamma Look-up Table for Red
#define  COMMAND_ST7789_DGMLUTB			(0xE3)		//Digital Gamma Look-up Table for Blue
#define  COMMAND_ST7789_GATECTRL		(0xE4)		//Gate control
#define  COMMAND_ST7789_SPI2EN			(0xE7)		//SPI2 enable
#define  COMMAND_ST7789_PWCTRL2			(0xE8)		//Power Control 2
#define  COMMAND_ST7789_EQCTRL			(0xE9)		//Equalize Time Control 
#define  COMMAND_ST7789_PROMCTRL		(0xEC)		//Program Control
#define  COMMAND_ST7789_PROMEN			(0xFA)		//Program Mode Enable
#define  COMMAND_ST7789_NVMSET			(0xFC)		//NVM Setting
#define  COMMAND_ST7789_PROMACT			(0xFE)		//Program Action


PopoGUI_StatusTypeDef PopoGUI_Driver_Init(void);
PopoGUI_StatusTypeDef PopoGUI_Driver_Set_Address(const PopoGUI_Address address);

#endif


