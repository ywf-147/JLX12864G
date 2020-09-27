#ifndef __JLX12864_H_
#define __JLX12864_H_
#include "sys.h"
#include "main.h"

#define Rom_IN 		PBout(8)	//引脚1 字库IC 接口定义:Rom_IN 就是字库IC
#define Rom_OUT		PAin(7) 	//引脚2 字库IC 接口定义:Rom_OUT就是字库IC
#define Rom_SCK		PAout(6)	//引脚3 字库IC 接口定义:Rom_SCK就是字库IC
#define Rom_CS		PAout(5)

#define lcd_sclk	PAout(4)
#define lcd_sid		PAout(3)
#define lcd_rs		PAout(2)
#define lcd_reset	PAout(1)
#define lcd_cs1		PAout(0)


#define ulong unsigned long

extern u8 bmp1[];
extern u8 bmp2[];
void JLX12864_Init(void);

void transfer_command_lcd(int data1);
void initial_lcd(void); 
void transfer_data_lcd(int data1);
void lcd_address(u16 page,u16 column);
void clear_screen(void);
void display_128x64(u8 *dp);
void display_graphic_16x16(u8 page,u8 column,u8 *dp);
void send_command_to_ROM( u8 datu );

void display_string_5x8(u8 page,u8 column,u8 *text);
void display_GB2312_string(u8 page,u8 column,u8 *text);
void get_and_write_5x8(ulong fontaddr,u8 page,u8 column);
void get_and_write_8x16(ulong fontaddr,u8 page,u8 column);
void get_and_write_16x16(ulong fontaddr,u8 page,u8 column);
static u8 get_data_from_ROM( void);


#endif

