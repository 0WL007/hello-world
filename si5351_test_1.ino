// Библиотека iarduino_I2C_connect разработана для удобства соединения нескольких arduino по шине I2C
// Данная Arduino является ведущим устройством на шине I2C
// Arduino                                            http://iarduino.ru/shop/arduino/
// Trema кнопка                                       http://iarduino.ru/shop/Expansion-payments/knopka-trema-modul.html
// Trema светодиод                                    http://iarduino.ru/shop/Expansion-payments/svetodiod---zelenyy-trema-modul.html
//
// Светодиод нужно подключить к цифровому выводу D13, а кнопку к цифровому выводу D2

// Подключаем библиотеки:
#include <Wire.h>                                     // подключаем библиотеку для работы с шиной I2C
#include <iarduino_I2C_connect.h>                     // подключаем библиотеку для соединения arduino по шине I2C


//#include "si5351.h"
//Si5351 si5351;

// Объявляем переменные и константы:
iarduino_I2C_connect I2C2;                            // объявляем переменную для работы c библиотекой iarduino_I2C_connect

void setup(){
//Wire.setClock(400000);                              // устанавливаем скорость передачи данных по шине I2C = 400кБит/с
  Wire.begin();                                       // инициируем подключение к шине I2C в качестве ведомого (slave) устройства, с указанием своего адреса на шине.


  
}

void loop(){

I2C2.writeByte(0x60,0,16);
I2C2.writeByte(0x60,1,248);
I2C2.writeByte(0x60,2,3);
I2C2.writeByte(0x60,3,5);
I2C2.writeByte(0x60,4,0);
I2C2.writeByte(0x60,5,255);
I2C2.writeByte(0x60,6,0);
I2C2.writeByte(0x60,7,0);
I2C2.writeByte(0x60,8,0);
I2C2.writeByte(0x60,9,0);
I2C2.writeByte(0x60,10,0);
I2C2.writeByte(0x60,11,0);
I2C2.writeByte(0x60,12,0);
I2C2.writeByte(0x60,13,0);
I2C2.writeByte(0x60,14,144);
I2C2.writeByte(0x60,15,0);
I2C2.writeByte(0x60,16,12);
I2C2.writeByte(0x60,17,12);
I2C2.writeByte(0x60,18,12);
I2C2.writeByte(0x60,19,128);
I2C2.writeByte(0x60,20,128);
I2C2.writeByte(0x60,21,128);
I2C2.writeByte(0x60,22,128);
I2C2.writeByte(0x60,23,128);
I2C2.writeByte(0x60,24,0);
I2C2.writeByte(0x60,25,0);
I2C2.writeByte(0x60,26,255);
I2C2.writeByte(0x60,27,255);
I2C2.writeByte(0x60,28,0);
I2C2.writeByte(0x60,29,14);
I2C2.writeByte(0x60,30,169);
I2C2.writeByte(0x60,31,253);
I2C2.writeByte(0x60,32,234);
I2C2.writeByte(0x60,33,41);
I2C2.writeByte(0x60,34,255);
I2C2.writeByte(0x60,35,255);
I2C2.writeByte(0x60,36,0);
I2C2.writeByte(0x60,37,14);
I2C2.writeByte(0x60,38,169);
I2C2.writeByte(0x60,39,253);
I2C2.writeByte(0x60,40,234);
I2C2.writeByte(0x60,41,41);
I2C2.writeByte(0x60,42,255);
I2C2.writeByte(0x60,43,255);
I2C2.writeByte(0x60,44,0);
I2C2.writeByte(0x60,45,48);
I2C2.writeByte(0x60,46,197);
I2C2.writeByte(0x60,47,253);
I2C2.writeByte(0x60,48,178);
I2C2.writeByte(0x60,49,197);
I2C2.writeByte(0x60,50,0);
I2C2.writeByte(0x60,51,1);
I2C2.writeByte(0x60,52,0);
I2C2.writeByte(0x60,53,7);
I2C2.writeByte(0x60,54,0);
I2C2.writeByte(0x60,55,0);
I2C2.writeByte(0x60,56,0);
I2C2.writeByte(0x60,57,0);
I2C2.writeByte(0x60,58,0);
I2C2.writeByte(0x60,59,0);
I2C2.writeByte(0x60,60,0);
I2C2.writeByte(0x60,61,0);
I2C2.writeByte(0x60,62,0);
I2C2.writeByte(0x60,63,0);
I2C2.writeByte(0x60,64,0);
I2C2.writeByte(0x60,65,0);
I2C2.writeByte(0x60,66,0);
I2C2.writeByte(0x60,67,0);
I2C2.writeByte(0x60,68,0);
I2C2.writeByte(0x60,69,0);
I2C2.writeByte(0x60,70,0);
I2C2.writeByte(0x60,71,0);
I2C2.writeByte(0x60,72,0);
I2C2.writeByte(0x60,73,0);
I2C2.writeByte(0x60,74,0);
I2C2.writeByte(0x60,75,0);
I2C2.writeByte(0x60,76,0);
I2C2.writeByte(0x60,77,0);
I2C2.writeByte(0x60,78,0);
I2C2.writeByte(0x60,79,0);
I2C2.writeByte(0x60,80,0);
I2C2.writeByte(0x60,81,0);
I2C2.writeByte(0x60,82,0);
I2C2.writeByte(0x60,83,0);
I2C2.writeByte(0x60,84,0);
I2C2.writeByte(0x60,85,0);
I2C2.writeByte(0x60,86,0);
I2C2.writeByte(0x60,87,0);
I2C2.writeByte(0x60,88,0);
I2C2.writeByte(0x60,89,0);
I2C2.writeByte(0x60,90,0);
I2C2.writeByte(0x60,91,0);
I2C2.writeByte(0x60,92,0);
I2C2.writeByte(0x60,93,0);
I2C2.writeByte(0x60,94,0);
I2C2.writeByte(0x60,95,0);
I2C2.writeByte(0x60,96,0);
I2C2.writeByte(0x60,97,0);
I2C2.writeByte(0x60,98,0);
I2C2.writeByte(0x60,99,0);
I2C2.writeByte(0x60,100,0);
I2C2.writeByte(0x60,101,0);
I2C2.writeByte(0x60,102,0);
I2C2.writeByte(0x60,103,0);
I2C2.writeByte(0x60,104,0);
I2C2.writeByte(0x60,105,0);
I2C2.writeByte(0x60,106,0);
I2C2.writeByte(0x60,107,0);
I2C2.writeByte(0x60,108,0);
I2C2.writeByte(0x60,109,0);
I2C2.writeByte(0x60,110,0);
I2C2.writeByte(0x60,111,0);
I2C2.writeByte(0x60,112,0);
I2C2.writeByte(0x60,113,0);
I2C2.writeByte(0x60,114,0);
I2C2.writeByte(0x60,115,0);
I2C2.writeByte(0x60,116,0);
I2C2.writeByte(0x60,117,0);
I2C2.writeByte(0x60,118,0);
I2C2.writeByte(0x60,119,0);
I2C2.writeByte(0x60,120,0);
I2C2.writeByte(0x60,121,0);
I2C2.writeByte(0x60,122,0);
I2C2.writeByte(0x60,123,0);
I2C2.writeByte(0x60,124,0);
I2C2.writeByte(0x60,125,0);
I2C2.writeByte(0x60,126,0);
I2C2.writeByte(0x60,127,0);
I2C2.writeByte(0x60,128,0);
I2C2.writeByte(0x60,129,0);
I2C2.writeByte(0x60,130,0);
I2C2.writeByte(0x60,131,0);
I2C2.writeByte(0x60,132,0);
I2C2.writeByte(0x60,133,0);
I2C2.writeByte(0x60,134,0);
I2C2.writeByte(0x60,135,0);
I2C2.writeByte(0x60,136,0);
I2C2.writeByte(0x60,137,0);
I2C2.writeByte(0x60,138,0);
I2C2.writeByte(0x60,139,0);
I2C2.writeByte(0x60,140,0);
I2C2.writeByte(0x60,141,0);
I2C2.writeByte(0x60,142,0);
I2C2.writeByte(0x60,143,0);
I2C2.writeByte(0x60,144,0);
I2C2.writeByte(0x60,145,0);
I2C2.writeByte(0x60,146,0);
I2C2.writeByte(0x60,147,0);
I2C2.writeByte(0x60,148,0);
I2C2.writeByte(0x60,149,0);
I2C2.writeByte(0x60,150,0);
I2C2.writeByte(0x60,151,0);
I2C2.writeByte(0x60,152,0);
I2C2.writeByte(0x60,153,0);
I2C2.writeByte(0x60,154,0);
I2C2.writeByte(0x60,155,0);
I2C2.writeByte(0x60,156,0);
I2C2.writeByte(0x60,157,0);
I2C2.writeByte(0x60,158,0);
I2C2.writeByte(0x60,159,0);
I2C2.writeByte(0x60,160,0);
I2C2.writeByte(0x60,161,0);
I2C2.writeByte(0x60,162,0);
I2C2.writeByte(0x60,163,0);
I2C2.writeByte(0x60,164,0);
I2C2.writeByte(0x60,165,0);
I2C2.writeByte(0x60,166,0);
I2C2.writeByte(0x60,167,0);
I2C2.writeByte(0x60,168,0);
I2C2.writeByte(0x60,169,0);
I2C2.writeByte(0x60,170,0);
I2C2.writeByte(0x60,171,0);
I2C2.writeByte(0x60,172,0);
I2C2.writeByte(0x60,173,0);
I2C2.writeByte(0x60,174,0);
I2C2.writeByte(0x60,175,0);
I2C2.writeByte(0x60,176,255);
I2C2.writeByte(0x60,177,0);
I2C2.writeByte(0x60,178,0);
I2C2.writeByte(0x60,179,0);
I2C2.writeByte(0x60,180,0);
I2C2.writeByte(0x60,181,48);
I2C2.writeByte(0x60,182,30);
I2C2.writeByte(0x60,183,146);
I2C2.writeByte(0x60,184,96);
I2C2.writeByte(0x60,185,96);
I2C2.writeByte(0x60,186,184);
I2C2.writeByte(0x60,187,2);
I2C2.writeByte(0x60,188,0);
I2C2.writeByte(0x60,189,0);
I2C2.writeByte(0x60,190,0);
I2C2.writeByte(0x60,191,0);
I2C2.writeByte(0x60,192,0);
I2C2.writeByte(0x60,193,0);
I2C2.writeByte(0x60,194,0);
I2C2.writeByte(0x60,195,0);
I2C2.writeByte(0x60,196,0);
I2C2.writeByte(0x60,197,0);
I2C2.writeByte(0x60,198,0);
I2C2.writeByte(0x60,199,0);
I2C2.writeByte(0x60,200,0);
I2C2.writeByte(0x60,201,0);
I2C2.writeByte(0x60,202,0);
I2C2.writeByte(0x60,203,0);
I2C2.writeByte(0x60,204,0);
I2C2.writeByte(0x60,205,68);
I2C2.writeByte(0x60,206,178);
I2C2.writeByte(0x60,207,0);
I2C2.writeByte(0x60,208,0);
I2C2.writeByte(0x60,209,0);
I2C2.writeByte(0x60,210,0);
I2C2.writeByte(0x60,211,128);
I2C2.writeByte(0x60,212,0);
I2C2.writeByte(0x60,213,0);
I2C2.writeByte(0x60,214,0);
I2C2.writeByte(0x60,215,0);
I2C2.writeByte(0x60,216,0);
I2C2.writeByte(0x60,217,0);
I2C2.writeByte(0x60,218,28);
I2C2.writeByte(0x60,219,0);
I2C2.writeByte(0x60,220,0);
I2C2.writeByte(0x60,221,0);
I2C2.writeByte(0x60,222,0);
I2C2.writeByte(0x60,223,64);
I2C2.writeByte(0x60,224,0);
I2C2.writeByte(0x60,225,0);
I2C2.writeByte(0x60,226,56);
I2C2.writeByte(0x60,227,0);
I2C2.writeByte(0x60,228,10);
I2C2.writeByte(0x60,229,0);
I2C2.writeByte(0x60,230,0);
I2C2.writeByte(0x60,231,0);
I2C2.writeByte(0x60,232,0);
I2C2.writeByte(0x60,233,0);
I2C2.writeByte(0x60,234,0);
I2C2.writeByte(0x60,235,0);
I2C2.writeByte(0x60,236,0);
I2C2.writeByte(0x60,237,0);
I2C2.writeByte(0x60,238,0);
I2C2.writeByte(0x60,239,0);
I2C2.writeByte(0x60,240,0);
I2C2.writeByte(0x60,241,0);
I2C2.writeByte(0x60,242,0);
I2C2.writeByte(0x60,243,0);
I2C2.writeByte(0x60,244,0);
I2C2.writeByte(0x60,245,0);
I2C2.writeByte(0x60,246,0);
I2C2.writeByte(0x60,247,0);
I2C2.writeByte(0x60,248,0);
I2C2.writeByte(0x60,249,0);
I2C2.writeByte(0x60,250,0);
I2C2.writeByte(0x60,251,0);
I2C2.writeByte(0x60,252,0);
I2C2.writeByte(0x60,253,0);
I2C2.writeByte(0x60,254,0);
I2C2.writeByte(0x60,255,0);



delay (5000);

}
