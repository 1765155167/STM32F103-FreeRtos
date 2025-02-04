/************************************************************************************
*****说明：1.16*16汉字字模数据，横向取模，字节正序；   
          2.如果用LcmZimo这个软件取模 ，选项则为：
             从左到左，从上到下，横向取模左高位，
  	      3. 字模里的字模数据不能重复，也就是说不要有两个及以上相同
             汉字字模数据
	      4.以下汉字数	据必须要和 hz_index[]中的汉字顺序相同，
		    其中也不能有重复的汉字。
		  5.基于以上3 ，4点，使用LcmZimo取模软件取模就会很好，这个软件可以
		    自动过滤相同的汉字。 取模软件会和本程序一起打包，方便用户。
***********************************************************************************/

unsigned char hz[]={
/*--  文字:  胡  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xE0,0xC0,0x60,0x01,0xC0,0xFF,0xF0,
0x01,0xC0,0xE0,0xF0,0x01,0xC0,0xE0,0xE0,0x01,0xCE,0xE0,0xE0,0x3F,0xFF,0xE0,0xE0,
0x39,0xC0,0xE0,0xE0,0x01,0xC0,0xE0,0xE0,0x01,0xC0,0xFF,0xE0,0x01,0xC0,0xE0,0xE0,
0x01,0xC0,0xE0,0xE0,0x1D,0xDC,0xE0,0xE0,0x1F,0xFE,0xE0,0xE0,0x1E,0x1C,0xE0,0xE0,
0x1E,0x1C,0xE0,0xE0,0x1E,0x1C,0xFF,0xE0,0x1E,0x1C,0xE0,0xE0,0x1E,0x1C,0xE0,0xE0,
0x1E,0x1D,0xC0,0xE0,0x1F,0xFD,0xC0,0xE0,0x1E,0x1D,0xC0,0xE0,0x1E,0x1F,0x80,0xE0,
0x1E,0x03,0x80,0xE0,0x1C,0x07,0x0F,0xE0,0x00,0x0E,0x0F,0xE0,0x00,0x1C,0x01,0xE0,
0x00,0x38,0x01,0xC0,0x00,0x00,0x00,0x00,

/*--  文字:  秋  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x78,0x00,0x00,0xFC,0x78,0x00,
0x07,0xF8,0x78,0x00,0x3F,0xC0,0x78,0x00,0x01,0xC0,0x78,0x00,0x01,0xC0,0x78,0xC0,
0x01,0xC1,0xF8,0xE0,0x01,0xDD,0xF9,0xF0,0x7F,0xFF,0xFB,0xC0,0x31,0xC3,0xFB,0x80,
0x03,0xC3,0xFF,0x00,0x03,0xC7,0xFE,0x00,0x03,0xEF,0x78,0x00,0x07,0xF8,0x7C,0x00,
0x07,0xFC,0x7C,0x00,0x0F,0xFC,0x7C,0x00,0x0F,0xDC,0x7E,0x00,0x1D,0xD8,0xEE,0x00,
0x19,0xC0,0xE7,0x00,0x31,0xC0,0xE7,0x00,0x61,0xC1,0xC7,0x80,0x41,0xC3,0xC3,0x80,
0x01,0xC3,0x83,0xC0,0x01,0xC7,0x01,0xF0,0x01,0xCE,0x00,0xF8,0x01,0xFC,0x00,0x70,
0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  峰  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x07,0x80,0xF0,0x00,0x07,0x81,0xE1,0x80,
0x07,0x01,0xFF,0xC0,0x07,0x03,0xC3,0xC0,0x07,0x03,0xC7,0x80,0x3F,0x77,0x67,0x00,
0x3F,0x7E,0x7E,0x00,0x3F,0x7C,0x3C,0x00,0x3F,0x78,0x3E,0x00,0x3F,0x70,0x7F,0xC0,
0x3F,0x71,0xE3,0xF8,0x3F,0x73,0xBC,0xF0,0x3F,0x7E,0x3C,0x00,0x3F,0x78,0x3C,0xE0,
0x3F,0x77,0xFF,0xF0,0x3F,0x70,0x3C,0x00,0x3F,0x70,0x3C,0x00,0x3F,0xF0,0x3C,0xC0,
0x3F,0xF7,0xFF,0xE0,0x3E,0x71,0x3C,0x00,0x38,0x60,0x3C,0x70,0x00,0x1F,0xFF,0xF8,
0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,
0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  按  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0xE0,0x00,0x03,0xC0,0x70,0x00,
0x03,0x80,0x38,0x00,0x03,0x80,0x38,0x00,0x03,0x86,0x38,0x70,0x03,0xE7,0xFF,0xF8,
0x7F,0xFE,0x40,0xF0,0x03,0x9E,0x70,0xE0,0x03,0x9E,0xF0,0xC0,0x03,0x80,0xE0,0x00,
0x03,0xB0,0xE0,0x00,0x03,0xE1,0xC0,0x60,0x03,0xFF,0xFF,0xF0,0x0F,0x93,0xC3,0x80,
0x3F,0x83,0x83,0x80,0x7F,0x87,0x87,0x80,0x3B,0x87,0x07,0x00,0x03,0x8F,0x0F,0x00,
0x03,0x8F,0x8E,0x00,0x03,0x81,0xFE,0x00,0x03,0x80,0x3E,0x00,0x03,0x80,0x3F,0x80,
0x03,0x80,0x7F,0xE0,0x03,0x81,0xF1,0xE0,0x3F,0x87,0xC0,0xF0,0x0F,0x3F,0x00,0x70,
0x07,0x70,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  键  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x0C,0x00,0x0F,0x00,0x0E,0x00,
0x0E,0x00,0x0E,0x00,0x0E,0x03,0x0E,0xC0,0x1E,0xFF,0xFF,0xE0,0x1F,0xF7,0x6E,0xE0,
0x1C,0x0E,0x0E,0xF0,0x38,0x0F,0xFF,0xF8,0x31,0xCE,0xCE,0xE0,0x7F,0xFC,0x0E,0xE0,
0x6E,0x1D,0x8E,0xE0,0xCE,0x3F,0xFF,0xE0,0x0E,0x1B,0xEE,0xE0,0x0E,0x03,0x8E,0xE0,
0x0E,0xC3,0xFF,0xF0,0x7F,0xF3,0xEE,0x00,0x3E,0x37,0x0E,0x00,0x0E,0x3F,0x0E,0x70,
0x0E,0x1F,0xFF,0xF8,0x0E,0x1F,0xCE,0x00,0x0E,0x6E,0x0E,0x00,0x0F,0xCE,0x0E,0x00,
0x0F,0x9F,0x8E,0x00,0x0F,0x3B,0xEC,0x00,0x06,0x71,0xFF,0xF8,0x01,0xE0,0x3F,0xF0,
0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  下  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,
0x3F,0xFF,0xFF,0xF0,0x38,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,
0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0xC0,0x00,
0x00,0x07,0xF0,0x00,0x00,0x07,0x7E,0x00,0x00,0x07,0x1F,0x00,0x00,0x07,0x0F,0x80,
0x00,0x07,0x07,0x80,0x00,0x07,0x03,0x80,0x00,0x07,0x01,0x80,0x00,0x07,0x00,0x00,
0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,
0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,
0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  一  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xE0,0x7F,0xFF,0xFF,0xF8,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  二  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x0F,0xFF,0xFF,0xC0,
0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x01,0xF0,
0x7F,0xFF,0xFF,0xF8,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  三  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0xC0,0x1F,0xFF,0xFF,0xE0,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x80,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,
0x00,0x00,0x00,0xF0,0x7F,0xFF,0xFF,0xF8,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  四  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x00,0xC0,0x1F,0xFF,0xFF,0xE0,
0x1E,0x3C,0xF0,0xE0,0x1E,0x3C,0xF0,0xE0,0x1E,0x3C,0xF0,0xE0,0x1E,0x3C,0xF0,0xE0,
0x1E,0x38,0xF0,0xE0,0x1E,0x38,0xF0,0xE0,0x1E,0x38,0xF0,0xE0,0x1E,0x38,0xF0,0xE0,
0x1E,0x38,0xF0,0xE0,0x1E,0x38,0xF0,0xE0,0x1E,0x38,0xF0,0xE0,0x1E,0x38,0xF0,0xE0,
0x1E,0x70,0xE0,0xE0,0x1E,0x70,0xF0,0xE0,0x1E,0xF0,0xFF,0xE0,0x1E,0xE0,0x7F,0xE0,
0x1F,0xC0,0x00,0xE0,0x1F,0x80,0x00,0xE0,0x1F,0x00,0x00,0xE0,0x1E,0x00,0x00,0xE0,
0x1E,0x00,0x00,0xE0,0x1F,0xFF,0xFF,0xE0,0x1E,0x00,0x00,0xE0,0x1E,0x00,0x00,0xE0,
0x1C,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,

/*--  文字:  单  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0xC0,0x18,0x00,0x00,0x70,0x3C,0x00,0x00,0x78,0x3C,0x00,
0x00,0x38,0x70,0x00,0x00,0x3C,0x60,0x00,0x06,0x18,0xE3,0x00,0x07,0xFF,0xFF,0x80,
0x07,0x07,0x07,0x80,0x07,0x07,0x07,0x00,0x07,0x07,0x07,0x00,0x07,0x07,0x07,0x00,
0x07,0xFF,0xFF,0x00,0x07,0x07,0x07,0x00,0x07,0x07,0x07,0x00,0x07,0x07,0x07,0x00,
0x07,0xFF,0xFF,0x80,0x07,0x07,0x07,0x80,0x07,0x07,0x00,0x00,0x00,0x07,0x00,0x60,
0x00,0x07,0x00,0xF0,0x7F,0xFF,0xFF,0xF8,0x20,0x07,0x00,0x00,0x00,0x07,0x00,0x00,
0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,
0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  双  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0C,0x00,0xC0,0x3F,0xFF,0xFF,0xE0,0x18,0x0F,0xC1,0xE0,0x00,0x1E,0xE1,0xC0,
0x00,0x1C,0xE1,0xC0,0x18,0x1C,0x61,0xC0,0x0C,0x3C,0x61,0xC0,0x06,0x38,0x63,0xC0,
0x03,0x38,0x73,0x80,0x03,0xF8,0x73,0x80,0x01,0xF0,0x33,0x80,0x00,0xF0,0x3F,0x00,
0x00,0xF0,0x3F,0x00,0x01,0xF8,0x3F,0x00,0x01,0xFC,0x1E,0x00,0x03,0xBC,0x1E,0x00,
0x07,0x1E,0x1E,0x00,0x0F,0x1E,0x3F,0x00,0x0E,0x0E,0x77,0x80,0x1C,0x0E,0xE3,0xC0,
0x30,0x01,0xC3,0xE0,0x60,0x07,0x81,0xF8,0x00,0x0E,0x00,0xE0,0x00,0x1C,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  击  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,
0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x01,0xC0,0x1F,0xFF,0xFF,0xE0,
0x0C,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,
0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x70,0xFF,0xFF,0xFF,0xF8,0x60,0x07,0x00,0x00,
0x06,0x07,0x03,0x00,0x07,0x07,0x03,0xC0,0x07,0x07,0x03,0x80,0x07,0x07,0x03,0x80,
0x07,0x07,0x03,0x80,0x07,0x07,0x03,0x80,0x07,0x07,0x03,0x80,0x07,0x07,0x03,0x80,
0x07,0x07,0x03,0x80,0x0F,0xFF,0xFF,0x80,0x06,0x00,0x03,0x80,0x00,0x00,0x03,0x80,
0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x00,

/*--  文字:  长  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x0C,0x00,0x01,0xE0,0x1E,0x00,
0x01,0xC0,0x3F,0x00,0x01,0xC0,0x7C,0x00,0x01,0xC0,0xF8,0x00,0x01,0xC1,0xE0,0x00,
0x01,0xC3,0xC0,0x00,0x01,0xC7,0x00,0x00,0x01,0xDE,0x00,0x00,0x01,0xF8,0x00,0x40,
0x01,0xC0,0x00,0xE0,0x7F,0xFF,0xFF,0xF0,0x31,0xC7,0x00,0x00,0x01,0xC3,0x00,0x00,
0x01,0xC3,0x80,0x00,0x01,0xC1,0xC0,0x00,0x01,0xC1,0xC0,0x00,0x01,0xC0,0xF0,0x00,
0x01,0xC0,0x78,0x00,0x01,0xC0,0x3E,0x00,0x01,0xC1,0xDF,0x80,0x01,0xCF,0x8F,0xF0,
0x01,0xFE,0x07,0xF8,0x01,0xF8,0x01,0xE0,0x01,0xF0,0x00,0x00,0x00,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  多  --*/
/*--  宋体18;  此字体下对应的点阵为：宽x高=30x30   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x30  --*/
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0x0F,0x00,0x00,
0x00,0x1E,0x03,0x80,0x00,0x3F,0xFF,0xC0,0x00,0x78,0x07,0xC0,0x01,0xFC,0x0F,0x00,
0x03,0xDE,0x1E,0x00,0x0F,0x0E,0x3C,0x00,0x1C,0x0E,0xF8,0x00,0x00,0x07,0xE0,0x00,
0x00,0x07,0x80,0x00,0x00,0x3F,0xC0,0x00,0x01,0xFB,0xC0,0x00,0x1F,0xC7,0x80,0xC0,
0x38,0x1F,0xFF,0xE0,0x00,0x3E,0x01,0xF0,0x00,0x78,0x03,0xC0,0x01,0xFC,0x07,0x80,
0x07,0xCE,0x0F,0x00,0x0E,0x0F,0x1E,0x00,0x00,0x0F,0x3C,0x00,0x00,0x07,0xF8,0x00,
0x00,0x07,0xE0,0x00,0x00,0x0F,0x80,0x00,0x00,0x7E,0x00,0x00,0x03,0xF0,0x00,0x00,
0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,

} ;
//深圳信盈达电子有限公司

/************************************************************************************
*****创建：XYD 
*****说明：1.8*16字符字模数据，横向取模，字节正序；   
           2.如果用LcmZimo这个软件取模 ，选项则为：
            从左到左，从上到下，横向取模左高位，
	       3.字模里的字模数据不能重复，也就是说不要有两个及以上相同
            汉字字模数据
	       4.以下汉字数据必须要和 zf_index[]中的汉字顺序相同，
		    其中也不能有重复的汉字。
		  5.基于以上3 ，4点，使用LcmZimo取模软件取模就会很好，这个软件可以
		    自动过滤相同的汉字。 取模软件会和本程序一起打包，方便用户。
***********************************************************************************/
unsigned char zf[]=
{
 /*	 //横向取模，字节正序
   0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ,.:;!'"(){}|\/?<>~@#$%^&*_-+=`
*/
		/*--  文字:  0  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00,
		
		/*--  文字:  1  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x10,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,
		
		/*--  文字:  2  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x04,0x04,0x08,0x10,0x20,0x42,0x7E,0x00,0x00,
		
		/*--  文字:  3  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x3C,0x42,0x42,0x04,0x18,0x04,0x02,0x02,0x42,0x44,0x38,0x00,0x00,
		
		/*--  文字:  4  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x04,0x0C,0x14,0x24,0x24,0x44,0x44,0x7E,0x04,0x04,0x1E,0x00,0x00,
		
		/*--  文字:  5  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x7E,0x40,0x40,0x40,0x58,0x64,0x02,0x02,0x42,0x44,0x38,0x00,0x00,
		
		/*--  文字:  6  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x1C,0x24,0x40,0x40,0x58,0x64,0x42,0x42,0x42,0x24,0x18,0x00,0x00,
		
		/*--  文字:  7  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x7E,0x44,0x44,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,
		
		/*--  文字:  8  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00,
		
		/*--  文字:  9  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x26,0x1A,0x02,0x02,0x24,0x38,0x00,0x00,
		
		/*--  文字:  a  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x1E,0x22,0x42,0x42,0x3F,0x00,0x00,
		
		/*--  文字:  b  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x58,0x64,0x42,0x42,0x42,0x64,0x58,0x00,0x00,
		
		/*--  文字:  c  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x22,0x40,0x40,0x40,0x22,0x1C,0x00,0x00,
		
		/*--  文字:  d  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x06,0x02,0x02,0x02,0x1E,0x22,0x42,0x42,0x42,0x26,0x1B,0x00,0x00,
		
		/*--  文字:  e  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x7E,0x40,0x40,0x42,0x3C,0x00,0x00,
		
		/*--  文字:  f  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x0F,0x11,0x10,0x10,0x7E,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,
		
		/*--  文字:  g  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x44,0x44,0x38,0x40,0x3C,0x42,0x42,0x3C,
		
		/*--  文字:  h  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,
		
		/*--  文字:  i  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,
		
		/*--  文字:  j  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x1C,0x04,0x04,0x04,0x04,0x04,0x04,0x44,0x78,
		
		/*--  文字:  k  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x4E,0x48,0x50,0x68,0x48,0x44,0xEE,0x00,0x00,
		
		/*--  文字:  l  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,
		
		/*--  文字:  m  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x49,0x49,0x49,0x49,0x49,0xED,0x00,0x00,
		
		/*--  文字:  n  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDC,0x62,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,
		
		/*--  文字:  o  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,
		
		/*--  文字:  p  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8,0x64,0x42,0x42,0x42,0x44,0x78,0x40,0xE0,
		
		/*--  文字:  q  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x22,0x42,0x42,0x42,0x22,0x1E,0x02,0x07,
		
		/*--  文字:  r  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x32,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,
		
		/*--  文字:  s  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x42,0x40,0x3C,0x02,0x42,0x7C,0x00,0x00,
		
		/*--  文字:  t  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x7C,0x10,0x10,0x10,0x10,0x10,0x0C,0x00,0x00,
		
		/*--  文字:  u  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0x42,0x42,0x42,0x42,0x46,0x3B,0x00,0x00,
		
		/*--  文字:  v  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x28,0x10,0x10,0x00,0x00,
		
		/*--  文字:  w  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD7,0x92,0x92,0xAA,0xAA,0x44,0x44,0x00,0x00,
		
		/*--  文字:  x  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6E,0x24,0x18,0x18,0x18,0x24,0x76,0x00,0x00,
		
		/*--  文字:  y  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x28,0x18,0x10,0x10,0xE0,
		
		/*--  文字:  z  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x44,0x08,0x10,0x10,0x22,0x7E,0x00,0x00,
		
		/*--  文字:  A  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x10,0x10,0x18,0x28,0x28,0x24,0x3C,0x44,0x42,0x42,0xE7,0x00,0x00,
		
		/*--  文字:  B  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xF8,0x44,0x44,0x44,0x78,0x44,0x42,0x42,0x42,0x44,0xF8,0x00,0x00,
		
		/*--  文字:  C  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x3E,0x42,0x42,0x80,0x80,0x80,0x80,0x80,0x42,0x44,0x38,0x00,0x00,
		
		/*--  文字:  D  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xF8,0x44,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x44,0xF8,0x00,0x00,
		
		/*--  文字:  E  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xFC,0x42,0x48,0x48,0x78,0x48,0x48,0x40,0x42,0x42,0xFC,0x00,0x00,
		
		/*--  文字:  F  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xFC,0x42,0x48,0x48,0x78,0x48,0x48,0x40,0x40,0x40,0xE0,0x00,0x00,
		
		/*--  文字:  G  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x3C,0x44,0x44,0x80,0x80,0x80,0x8E,0x84,0x44,0x44,0x38,0x00,0x00,
		
		/*--  文字:  H  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,
		
		/*--  文字:  I  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,
		
		/*--  文字:  J  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x88,0xF0,
		
		/*--  文字:  K  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xEE,0x44,0x48,0x50,0x70,0x50,0x48,0x48,0x44,0x44,0xEE,0x00,0x00,
		
		/*--  文字:  L  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x42,0xFE,0x00,0x00,
		
		/*--  文字:  M  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xEE,0x6C,0x6C,0x6C,0x6C,0x54,0x54,0x54,0x54,0x54,0xD6,0x00,0x00,
		
		/*--  文字:  N  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xC7,0x62,0x62,0x52,0x52,0x4A,0x4A,0x4A,0x46,0x46,0xE2,0x00,0x00,
		
		/*--  文字:  O  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00,
		
		/*--  文字:  P  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xFC,0x42,0x42,0x42,0x42,0x7C,0x40,0x40,0x40,0x40,0xE0,0x00,0x00,
		
		/*--  文字:  Q  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0xB2,0xCA,0x4C,0x38,0x06,0x00,
		
		/*--  文字:  R  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xFC,0x42,0x42,0x42,0x7C,0x48,0x48,0x44,0x44,0x42,0xE3,0x00,0x00,
		
		/*--  文字:  S  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x3E,0x42,0x42,0x40,0x20,0x18,0x04,0x02,0x42,0x42,0x7C,0x00,0x00,
		
		/*--  文字:  T  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xFE,0x92,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00,
		
		/*--  文字:  U  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,
		
		/*--  文字:  V  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xE7,0x42,0x42,0x44,0x24,0x24,0x28,0x28,0x18,0x10,0x10,0x00,0x00,
		
		/*--  文字:  W  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xD6,0x92,0x92,0x92,0x92,0xAA,0xAA,0x6C,0x44,0x44,0x44,0x00,0x00,
		
		/*--  文字:  X  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x18,0x18,0x18,0x24,0x24,0x42,0xE7,0x00,0x00,
		
		/*--  文字:  Y  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00,
		
		/*--  文字:  Z  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x7E,0x84,0x04,0x08,0x08,0x10,0x20,0x20,0x42,0x42,0xFC,0x00,0x00,
		
		/*--  文字:  ,  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x20,0xC0,
		
		/*--  文字:  .  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,
		
		/*--  文字:  :  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,
		
		/*--  文字:  ;  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20,
		
		/*--  文字:  !  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x18,0x18,0x00,0x00,
		
		/*--  文字:  '  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x60,0x60,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		
		/*--  文字:  "  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x12,0x36,0x24,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		
		/*--  文字:  (  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x02,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x04,0x02,0x00,
		
		/*--  文字:  )  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x40,0x20,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x10,0x10,0x20,0x40,0x00,
		
		/*--  文字:  {  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x03,0x04,0x04,0x04,0x04,0x04,0x08,0x04,0x04,0x04,0x04,0x04,0x04,0x03,0x00,
		
		/*--  文字:  }  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x60,0x10,0x10,0x10,0x10,0x10,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x60,0x00,
		
		/*--  文字:  |  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
		
		/*--  文字:  \  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x40,0x40,0x20,0x20,0x10,0x10,0x10,0x08,0x08,0x04,0x04,0x04,0x02,0x02,
		
		/*--  文字:  /  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x01,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x40,0x40,0x00,
		
		/*--  文字:  ?  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x3C,0x42,0x42,0x62,0x02,0x04,0x08,0x08,0x00,0x18,0x18,0x00,0x00,
		
		/*--  文字:  <  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x02,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x02,0x00,0x00,
		
		/*--  文字:  >  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x40,0x20,0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x40,0x00,0x00,
		
		/*--  文字:  ~  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x30,0x4C,0x43,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		
		/*--  文字:  @  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x38,0x44,0x5A,0xAA,0xAA,0xAA,0xAA,0xB4,0x42,0x44,0x38,0x00,0x00,
		
		/*--  文字:  #  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x24,0x24,0x24,0xFE,0x48,0x48,0x48,0xFE,0x48,0x48,0x48,0x00,0x00,
		
		/*--  文字:  $  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x10,0x38,0x54,0x54,0x50,0x30,0x18,0x14,0x14,0x54,0x54,0x38,0x10,0x10,
		
		/*--  文字:  %  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x44,0xA4,0xA8,0xA8,0xA8,0x54,0x1A,0x2A,0x2A,0x2A,0x44,0x00,0x00,
		
		/*--  文字:  ^  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x1C,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		
		/*--  文字:  &  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x30,0x48,0x48,0x48,0x50,0x6E,0xA4,0x94,0x88,0x89,0x76,0x00,0x00,
		
		/*--  文字:  *  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x10,0x10,0xD6,0x38,0x38,0xD6,0x10,0x10,0x00,0x00,0x00,0x00,
		
		/*--  文字:  _  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
		
		/*--  文字:  -  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		
		/*--  文字:  +  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x10,0x00,0x00,0x00,
		
		/*--  文字:  =  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,
		
		/*--  文字:  `  --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x60,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 
				/*--  文字:  空格 --*/
		/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 
 };
//
unsigned char zf_index[]={"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ,.:;!'\"(){}|\\/?<>~@#$%^&*_-+=` "};
unsigned char hz_index[]={"胡秋峰按键下一二三四单双击长多"};

/*****************************************************************************
*****函数名：  ASCII_NUM()
*****参数：    无
*****功能：    返回ASCII字符个数
*****备注：创建这个函数是解决KEIL中sizeof()必须和结构变量同一个文件才准确识别的BUGE
*****************************************************************************/  
unsigned int ASCII_NUM(void)
{
  unsigned int ASCI_NUM;
  unsigned char *PT;

    /*不知道什么原因，用sizeof(hz_index)/2不能返回准确的值，
    所以只能自己写程序取得字库里汉字的个数*/
   //  ASCI_NUM=sizeof(zf_index);
    PT = zf_index;
  while(*PT++ != '\0')
  {
  	 ASCI_NUM++;
  }
  return (ASCI_NUM-1);
}  

/*****************************************************************************
*****函数名：  GB16_NUM()
*****参数：    无
*****功能：    返回GB16字库里汉字个数
*****备注：创建这个函数是解决KEIL中sizeof()必须和结构变量同一个文件才准确识别的BUGE
*****************************************************************************/  
unsigned int GB16_NUM(void)
{
  unsigned int HZ_NUM;
  unsigned char *PT;
  PT = hz_index;

  /*不知道什么原因，用sizeof(hz_index)/2不能返回准确的值，
    所以只能自己写程序取得字库里汉字的个数*/
//  HZ_NUM = (sizeof(hz_index));

  while(*PT++ != '\0')
  {
  	 HZ_NUM++;
  }

  return HZ_NUM/2;
} 


