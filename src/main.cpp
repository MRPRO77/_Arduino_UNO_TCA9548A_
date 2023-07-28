/*******************************************************************************
   Título:      TCC Tecnico em Eletrotecnica.

   Descrição:   C L P   ---  I H M

   Processador:  ARDUINO UNO 
   


   Desenvolvido: MRPRO Tecnologia e Automação

   Autor: Tecnologo. Marcelo Rodrigues     Crea-SP 5070505617

   Data de Inicio: 23/07/2023       Versão:   2023.1.1

        


*******************************************************************************/  
/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_____________________________________
                                                                             
************************************************************************************************************/

// --- Bibliotecas Auxiliares ---
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include "Wire.h"
#include <Adafruit_GFX.h>
#include <Adafruit_BusIO_Register.h>
#include <TCA9548A.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_SSD1306.h>


// ========================================================================================================
// --- Definições ---

#define i2clcd       0

#define usalcd    I2CMux.openChannel(i2clcd)

TCA9548A I2CMux;                            // Address can be passed into the constructor
LiquidCrystal_I2C lcd(0x27,20,4);           // set the LCD address to 0x27 for a 16 chars and 2 line display








void setup() {

                                                    Wire.begin(); 
                                              Serial.begin(9600);
                                              I2CMux.begin(Wire);               // Wire instance is passed to the library
 
      


                                                           usalcd;
                                                       lcd.init();
                                                  lcd.backlight();               
                                           I2CMux.closeChannel(0);             


                                                          usalcd;
                                                     lcd.clear(); 
                                              lcd.setCursor(2,1);
                                   lcd.print("MRPRO TECNOLOGIA");
                                                      delay(200);
                                          I2CMux.closeChannel(0);   


}

void loop() {



}


