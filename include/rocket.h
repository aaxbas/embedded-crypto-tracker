
const unsigned char rocket_imgs[][48 * 48] PROGMEM = {
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00,
	 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x0c,
	 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x3c, 0x00, 0x00,
	 0x30, 0x00, 0xcf, 0xcc, 0x00, 0x00, 0x30, 0x00, 0xcf, 0xcc, 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c,
	 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c, 0x00, 0x00, 0x0c, 0x33, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x33,
	 0x0c, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x03, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x03, 0x30, 0x00, 0x00,
	 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x30, 0x00, 0x30,
	 0x00, 0x00, 0x03, 0x30, 0x00, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x0c,
	 0x00, 0xf0, 0x00, 0x00, 0x03, 0x03, 0x03, 0xcc, 0x00, 0x00, 0x03, 0x03, 0x03, 0xcc, 0x00, 0x00,
	 0x0c, 0x3c, 0xcf, 0xf3, 0x00, 0x00, 0x0c, 0x3c, 0xcf, 0xf3, 0x00, 0x00, 0x0f, 0xc0, 0x3c, 0xfc,
	 0xc0, 0x00, 0x0f, 0xc0, 0x3c, 0xfc, 0xc0, 0x00, 0x00, 0x00, 0x03, 0x3c, 0xc0, 0x00, 0x00, 0x00,
	 0x03, 0x3c, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00,
	 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00,
	 0x00, 0x00, 0x7e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x78, 0x06,
	 0x00, 0x78, 0x00, 0x00, 0x78, 0x06, 0x00, 0x78, 0x00, 0x00, 0x60, 0x01, 0x9f, 0x98, 0x00, 0x00,
	 0x60, 0x01, 0x9f, 0x98, 0x00, 0x00, 0x60, 0x18, 0x60, 0x18, 0x00, 0x00, 0x60, 0x18, 0x60, 0x18,
	 0x00, 0x00, 0x18, 0x66, 0x18, 0x60, 0x00, 0x00, 0x18, 0x66, 0x18, 0x60, 0x00, 0x00, 0x06, 0x18,
	 0x06, 0x60, 0x00, 0x00, 0x06, 0x18, 0x06, 0x60, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00,
	 0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x06, 0x60, 0x00, 0x60, 0x00, 0xc0, 0x06, 0x60, 0x00, 0x60,
	 0x00, 0x00, 0x06, 0x18, 0x01, 0xe0, 0x00, 0x00, 0x06, 0x18, 0x01, 0xe0, 0x00, 0x00, 0x06, 0x06,
	 0x07, 0x98, 0x00, 0x00, 0x06, 0x06, 0x07, 0x98, 0x00, 0x00, 0x18, 0x79, 0x9f, 0xe6, 0x00, 0x00,
	 0x18, 0x79, 0x9f, 0xe6, 0x00, 0x00, 0x1f, 0x80, 0x79, 0xe6, 0x00, 0x00, 0x1f, 0x80, 0x79, 0xe6,
	 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00,
	 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x30, 0x00, 0x00,
	 0x00, 0x00, 0xfc, 0x30, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0c, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x0c,
	 0x00, 0xf0, 0x00, 0x00, 0xc0, 0x03, 0x3f, 0x30, 0x0c, 0x00, 0xc0, 0x03, 0x3f, 0x30, 0x0c, 0x00,
	 0xc0, 0x30, 0xc0, 0x30, 0x00, 0x00, 0xc0, 0x30, 0xc0, 0x30, 0x00, 0x00, 0x30, 0xcc, 0x30, 0xc0,
	 0x00, 0x00, 0x30, 0xcc, 0x30, 0xc0, 0x00, 0x00, 0x0c, 0x30, 0x0c, 0xc0, 0x00, 0x00, 0x0c, 0x30,
	 0x0c, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x03, 0x00, 0x00, 0xc0,
	 0x0c, 0xc0, 0x00, 0xc0, 0x03, 0xf0, 0x0c, 0xc0, 0x00, 0xc0, 0x03, 0xf0, 0x0c, 0x30, 0x03, 0xc0,
	 0x00, 0xc0, 0x0c, 0x30, 0x03, 0xc0, 0x00, 0xc0, 0x0c, 0x0c, 0x0f, 0x30, 0x00, 0x00, 0x0c, 0x0c,
	 0x0f, 0x30, 0x00, 0x00, 0x30, 0xf3, 0x3f, 0x30, 0x00, 0x00, 0x30, 0xf3, 0x3f, 0x30, 0x00, 0x00,
	 0x3f, 0x00, 0xf0, 0x30, 0x00, 0x00, 0x3f, 0x00, 0xf0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0,
	 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00,
	 0x00, 0x00, 0x7e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x18, 0x00, 0x00, 0x0c, 0x00, 0x78, 0x06,
	 0x00, 0x78, 0x0c, 0x00, 0x78, 0x06, 0x00, 0x78, 0x3f, 0x00, 0x60, 0x01, 0x9f, 0x98, 0x3f, 0x00,
	 0x60, 0x01, 0x9f, 0x98, 0x0c, 0x00, 0x60, 0x18, 0x60, 0x18, 0x0c, 0x00, 0x60, 0x18, 0x60, 0x18,
	 0x00, 0x00, 0x18, 0x66, 0x18, 0x60, 0x00, 0x00, 0x18, 0x66, 0x18, 0x60, 0x00, 0x00, 0x06, 0x18,
	 0x06, 0x60, 0x00, 0x00, 0x06, 0x18, 0x06, 0x60, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00,
	 0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x06, 0x60, 0x00, 0x60, 0x00, 0xc0, 0x06, 0x60, 0x00, 0x60,
	 0x00, 0x00, 0x06, 0x18, 0x01, 0xe0, 0x00, 0x00, 0x06, 0x18, 0x01, 0xe0, 0x00, 0x00, 0x06, 0x06,
	 0x07, 0x98, 0x00, 0x00, 0x06, 0x06, 0x07, 0x98, 0x00, 0x00, 0x18, 0x79, 0x9f, 0x98, 0x00, 0x00,
	 0x18, 0x79, 0x9f, 0x98, 0x00, 0x00, 0x1f, 0x80, 0x78, 0x18, 0x00, 0x00, 0x1f, 0x80, 0x78, 0x18,
	 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00,
	 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x0c,
	 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x3c, 0x0c, 0x00, 0x3c, 0x03, 0x00, 0x3c, 0x0c, 0x00,
	 0x30, 0x00, 0xcf, 0xcc, 0x00, 0x00, 0x30, 0x00, 0xcf, 0xcc, 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c,
	 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c, 0x00, 0x00, 0x0c, 0x33, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x33,
	 0x0c, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x03, 0x30, 0x00, 0xc0, 0x03, 0x0c, 0x03, 0x30, 0x00, 0xc0,
	 0x00, 0xc0, 0x00, 0xc0, 0x03, 0xf0, 0x00, 0xc0, 0x00, 0xc0, 0x03, 0xf0, 0x03, 0x30, 0x00, 0x30,
	 0x00, 0xc0, 0x03, 0x30, 0x00, 0x30, 0x00, 0xc0, 0x03, 0x0c, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x0c,
	 0x00, 0xf0, 0x00, 0x00, 0x03, 0x03, 0x03, 0xcc, 0x00, 0x00, 0x03, 0x03, 0x03, 0xcc, 0x00, 0x00,
	 0x0c, 0x3c, 0xcf, 0xcc, 0x00, 0x00, 0x0c, 0x3c, 0xcf, 0xcc, 0x00, 0x00, 0x0f, 0xc0, 0x3c, 0x0c,
	 0x00, 0x00, 0x0f, 0xc0, 0x3c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00,
	 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00,
	 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x3f, 0x0c,
	 0x00, 0x00, 0x0c, 0x00, 0x3c, 0x03, 0x00, 0x3c, 0x3f, 0x00, 0x3c, 0x03, 0x00, 0x3c, 0x3f, 0x00,
	 0x30, 0x00, 0xcf, 0xcc, 0x0c, 0x00, 0x30, 0x00, 0xcf, 0xcc, 0x0c, 0x00, 0x30, 0x0c, 0x30, 0x0c,
	 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c, 0x00, 0x00, 0x0c, 0x33, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x33,
	 0x0c, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x03, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x03, 0x30, 0x00, 0x00,
	 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x30, 0x00, 0x30,
	 0x00, 0x00, 0x03, 0x30, 0x00, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x0c,
	 0x00, 0xf0, 0x00, 0x00, 0x03, 0x03, 0x03, 0xcc, 0x00, 0x00, 0x03, 0x03, 0x03, 0xcc, 0x00, 0x00,
	 0x0c, 0x3c, 0xcf, 0xf3, 0x00, 0x00, 0x0c, 0x3c, 0xcf, 0xf3, 0x00, 0x00, 0x0f, 0xc0, 0x3c, 0xfc,
	 0xc0, 0x00, 0x0f, 0xc0, 0x3c, 0xfc, 0xc0, 0x00, 0x00, 0x00, 0x03, 0x3c, 0xc0, 0x00, 0x00, 0x00,
	 0x03, 0x3c, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00,
	 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x03, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x03, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00,
	 0x00, 0x00, 0x7e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x78, 0x06,
	 0x00, 0x78, 0x00, 0x00, 0x78, 0x06, 0x00, 0x78, 0x00, 0x00, 0x60, 0x01, 0x9f, 0x98, 0x00, 0x00,
	 0x60, 0x01, 0x9f, 0x98, 0x00, 0x00, 0x60, 0x18, 0x60, 0x18, 0x00, 0x00, 0x60, 0x18, 0x60, 0x18,
	 0x00, 0x00, 0x18, 0x66, 0x18, 0x60, 0x00, 0x00, 0x18, 0x66, 0x18, 0x60, 0x00, 0x00, 0x06, 0x18,
	 0x06, 0x60, 0x00, 0x00, 0x06, 0x18, 0x06, 0x60, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00,
	 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x06, 0x60, 0x00, 0x60, 0x00, 0x00, 0x06, 0x60, 0x00, 0x60,
	 0x00, 0x00, 0x06, 0x18, 0x01, 0xe0, 0x00, 0x00, 0x06, 0x18, 0x01, 0xe0, 0x00, 0x00, 0x06, 0x06,
	 0x07, 0x98, 0x00, 0x00, 0x06, 0x06, 0x07, 0x98, 0x00, 0x00, 0x18, 0x79, 0x9f, 0xe6, 0x00, 0x00,
	 0x18, 0x79, 0x9f, 0xe6, 0x00, 0x00, 0x1f, 0x80, 0x79, 0xe6, 0x00, 0x00, 0x1f, 0x80, 0x79, 0xe6,
	 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00,
	 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x03, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x0f, 0xc0, 0x00, 0x03, 0x00, 0x0c, 0x0f, 0xc0,
	 0x00, 0x03, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x30, 0x00, 0x00,
	 0x00, 0x00, 0xfc, 0x30, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0c, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x0c,
	 0x00, 0xf0, 0x00, 0x00, 0xc0, 0x03, 0x3f, 0x30, 0x00, 0x00, 0xc0, 0x03, 0x3f, 0x30, 0x00, 0x00,
	 0xc0, 0x30, 0xc0, 0x30, 0x00, 0x00, 0xc0, 0x30, 0xc0, 0x30, 0x00, 0x00, 0x30, 0xcc, 0x30, 0xc0,
	 0x00, 0x00, 0x30, 0xcc, 0x30, 0xc0, 0x00, 0x00, 0x0c, 0x30, 0x0c, 0xc0, 0x00, 0x00, 0x0c, 0x30,
	 0x0c, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00,
	 0x0c, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x0c, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x0c, 0x30, 0x03, 0xc0,
	 0x00, 0x00, 0x0c, 0x30, 0x03, 0xc0, 0x00, 0x00, 0x0c, 0x0c, 0x0f, 0x30, 0x00, 0x00, 0x0c, 0x0c,
	 0x0f, 0x30, 0x00, 0x00, 0x30, 0xf3, 0x3f, 0x30, 0x00, 0x00, 0x30, 0xf3, 0x3f, 0x30, 0x00, 0x00,
	 0x3f, 0x00, 0xf0, 0x30, 0x00, 0x00, 0x3f, 0x00, 0xf0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0,
	 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x03, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00,
	 0x00, 0x00, 0x7e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x78, 0x06,
	 0x00, 0x78, 0x00, 0x00, 0x78, 0x06, 0x00, 0x78, 0x00, 0x00, 0x60, 0x01, 0x9f, 0x98, 0x00, 0x00,
	 0x60, 0x01, 0x9f, 0x98, 0x00, 0x00, 0x60, 0x18, 0x60, 0x18, 0x00, 0x00, 0x60, 0x18, 0x60, 0x18,
	 0x00, 0x00, 0x18, 0x66, 0x18, 0x60, 0x00, 0x00, 0x18, 0x66, 0x18, 0x60, 0x00, 0x00, 0x06, 0x18,
	 0x06, 0x60, 0x00, 0x00, 0x06, 0x18, 0x06, 0x60, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00,
	 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x06, 0x60, 0x00, 0x60, 0x00, 0x00, 0x06, 0x60, 0x00, 0x60,
	 0x00, 0x00, 0x06, 0x18, 0x01, 0xe0, 0x00, 0x00, 0x06, 0x18, 0x01, 0xe0, 0x00, 0x00, 0x06, 0x06,
	 0x07, 0x98, 0x00, 0x00, 0x06, 0x06, 0x07, 0x98, 0x00, 0x00, 0x18, 0x79, 0x9f, 0x98, 0x00, 0x00,
	 0x18, 0x79, 0x9f, 0x98, 0x00, 0x00, 0x1f, 0x80, 0x78, 0x18, 0x00, 0x00, 0x1f, 0x80, 0x78, 0x18,
	 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0xc0, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0xc0, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00,
	 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x0c,
	 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x3c, 0x00, 0x00,
	 0x30, 0x00, 0xcf, 0xcc, 0x00, 0x00, 0x30, 0x00, 0xcf, 0xcc, 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c,
	 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c, 0x00, 0x00, 0x0c, 0x33, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x33,
	 0x0c, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x03, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x03, 0x30, 0x00, 0x00,
	 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x30, 0x00, 0x30,
	 0x00, 0x00, 0x03, 0x30, 0x00, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x0c,
	 0x00, 0xf0, 0x00, 0x00, 0x03, 0x03, 0x03, 0xcc, 0x00, 0x00, 0x03, 0x03, 0x03, 0xcc, 0x00, 0x00,
	 0x0c, 0x3c, 0xcf, 0xcc, 0x00, 0x00, 0x0c, 0x3c, 0xcf, 0xcc, 0x00, 0x00, 0x0f, 0xc0, 0x3c, 0x0c,
	 0x00, 0x00, 0x0f, 0xc0, 0x3c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00,
	 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0xc0, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0xc0, 0x33, 0xfc, 0x3f, 0x00, 0x03, 0xf0, 0x33, 0xf0, 0xff, 0x00, 0x03,
	 0xf0, 0x33, 0xf0, 0xff, 0x00, 0x00, 0xc0, 0x30, 0xc0, 0xff, 0x00, 0x00, 0xc0, 0x30, 0xc0, 0xff}};

const unsigned char rocket_fall[][48 * 48] PROGMEM = {
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00,
	 0x00, 0x00, 0x60, 0x78, 0x07, 0xe0, 0x00, 0x00, 0x60, 0x78, 0x07, 0xe0, 0x00, 0x00, 0x67, 0xe6,
	 0x78, 0x60, 0x00, 0x00, 0x67, 0xe6, 0x78, 0x60, 0x00, 0x00, 0x67, 0x81, 0x81, 0x80, 0x00, 0x00,
	 0x67, 0x81, 0x81, 0x80, 0x00, 0x00, 0x1e, 0x00, 0x61, 0x80, 0x00, 0x00, 0x1e, 0x00, 0x61, 0x80,
	 0x00, 0x00, 0x18, 0x00, 0x19, 0x80, 0x00, 0x00, 0x18, 0x00, 0x19, 0x80, 0x00, 0x00, 0x06, 0x00,
	 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x19, 0x80, 0x61, 0x80, 0x00, 0x00,
	 0x19, 0x80, 0x61, 0x80, 0x00, 0x00, 0x18, 0x61, 0x98, 0x60, 0x00, 0x00, 0x18, 0x61, 0x98, 0x60,
	 0x00, 0x00, 0x60, 0x18, 0x60, 0x18, 0x00, 0x00, 0x60, 0x18, 0x60, 0x18, 0x00, 0x00, 0x67, 0xe6,
	 0x00, 0x18, 0x00, 0x00, 0x67, 0xe6, 0x00, 0x18, 0x00, 0x00, 0x78, 0x01, 0x80, 0x78, 0x00, 0x00,
	 0x78, 0x01, 0x80, 0x78, 0x00, 0x00, 0x00, 0x00, 0x61, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x61, 0xf8,
	 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x20,
	 0x00, 0x00, 0x60, 0x60, 0x00, 0x50, 0x00, 0x00, 0x60, 0x60, 0x00, 0x88, 0x00, 0x00, 0x67, 0x9e,
	 0x01, 0xf8, 0x00, 0x00, 0x67, 0x9e, 0x01, 0xf8, 0x00, 0x00, 0x67, 0xf9, 0x9e, 0x18, 0x00, 0x00,
	 0x67, 0xf9, 0x9e, 0x18, 0x00, 0x00, 0x19, 0xe0, 0x60, 0x60, 0x00, 0x00, 0x19, 0xe0, 0x60, 0x60,
	 0x00, 0x00, 0x07, 0x80, 0x18, 0x60, 0x00, 0x00, 0x07, 0x80, 0x18, 0x60, 0x00, 0x00, 0x06, 0x00,
	 0x06, 0x60, 0x00, 0x00, 0x06, 0x00, 0x06, 0x60, 0x00, 0x00, 0x01, 0x80, 0x01, 0x82, 0x00, 0x00,
	 0x01, 0x80, 0x01, 0x84, 0x00, 0x00, 0x06, 0x60, 0x18, 0x64, 0x00, 0x00, 0x06, 0x60, 0x18, 0x68,
	 0x00, 0x00, 0x06, 0x18, 0x66, 0x18, 0x00, 0x00, 0x06, 0x18, 0x66, 0x18, 0x00, 0x00, 0x18, 0x06,
	 0x18, 0x06, 0x00, 0x00, 0x18, 0x06, 0x18, 0x06, 0x00, 0x00, 0x19, 0xf9, 0x80, 0x06, 0x00, 0x00,
	 0x19, 0xf9, 0x80, 0x06, 0x00, 0x00, 0x1e, 0x00, 0x60, 0x1e, 0x00, 0x00, 0x1e, 0x00, 0x60, 0x1e,
	 0x00, 0x00, 0x00, 0x00, 0x18, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x18, 0x7e, 0x00, 0x00, 0x00, 0x00,
	 0x07, 0xfe, 0x00, 0x00, 0x03, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x30, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x30, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00,
	 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x10, 0x00, 0x00, 0xcf, 0x30, 0x00, 0x28, 0x00, 0x00, 0xcf, 0x30,
	 0x00, 0x54, 0x00, 0x00, 0xcf, 0xcf, 0x00, 0xfc, 0x00, 0x00, 0xcf, 0xcf, 0x00, 0xfc, 0x00, 0x00,
	 0x33, 0xfc, 0xcf, 0x0c, 0x00, 0x00, 0x33, 0xfc, 0xcf, 0x0c, 0x00, 0x00, 0x0c, 0xf0, 0x30, 0x30,
	 0x00, 0x00, 0x0c, 0xf0, 0x30, 0x30, 0x00, 0x00, 0x03, 0xc0, 0x0c, 0x30, 0x00, 0x00, 0x03, 0xc0,
	 0x0c, 0x30, 0x00, 0x00, 0x03, 0x00, 0x03, 0x30, 0x00, 0x00, 0x03, 0x00, 0x03, 0x30, 0x00, 0x00,
	 0x00, 0xc0, 0x00, 0xc1, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc2, 0x80, 0x00, 0x03, 0x30, 0x0c, 0x32,
	 0x40, 0x00, 0x03, 0x30, 0x0c, 0x35, 0x40, 0x00, 0x03, 0x0c, 0x33, 0x0d, 0x40, 0x00, 0x03, 0x0c,
	 0x33, 0x0c, 0x80, 0x00, 0x0c, 0x03, 0x0c, 0x03, 0x00, 0x00, 0x0c, 0x03, 0x0c, 0x03, 0x00, 0x00,
	 0x0c, 0xfc, 0xc0, 0x03, 0x00, 0x00, 0x0c, 0xfc, 0xc0, 0x03, 0x00, 0x00, 0x0f, 0x00, 0x30, 0x0f,
	 0x00, 0x00, 0x0f, 0x00, 0x30, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x3f, 0x00, 0x00, 0x03, 0x00,
	 0x0c, 0x3f, 0x00, 0x00, 0x03, 0x00, 0x03, 0xff, 0x00, 0x00, 0x0f, 0xc0, 0x03, 0xff, 0x00, 0x00,
	 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x30, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x30, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x20,
	 0x00, 0x00, 0x60, 0x60, 0x00, 0x40, 0x00, 0x00, 0x60, 0x60, 0x00, 0x28, 0x00, 0x00, 0x67, 0x98,
	 0x00, 0x14, 0x00, 0x00, 0x67, 0x98, 0x00, 0x2a, 0x00, 0x00, 0x67, 0xe7, 0x80, 0x7e, 0x00, 0x00,
	 0x67, 0xe7, 0x80, 0x7e, 0x00, 0x00, 0x19, 0xfe, 0x67, 0x86, 0x00, 0x00, 0x19, 0xfe, 0x67, 0x86,
	 0x00, 0x00, 0x06, 0x78, 0x18, 0x18, 0x00, 0x00, 0x06, 0x78, 0x18, 0x18, 0x00, 0x00, 0x01, 0xe0,
	 0x06, 0x18, 0x00, 0x00, 0x01, 0xe0, 0x06, 0x18, 0x00, 0x00, 0x01, 0x80, 0x01, 0x98, 0x40, 0xc0,
	 0x01, 0x80, 0x01, 0x98, 0x20, 0xc0, 0x00, 0x60, 0x00, 0x60, 0xc0, 0x00, 0x00, 0x60, 0x00, 0x61,
	 0x40, 0x00, 0x01, 0x98, 0x06, 0x19, 0x20, 0x00, 0x01, 0x98, 0x06, 0x1a, 0xa0, 0x00, 0x01, 0x86,
	 0x19, 0x87, 0xa0, 0x00, 0x01, 0x86, 0x19, 0x86, 0x40, 0x00, 0x06, 0x01, 0x86, 0x01, 0x80, 0x00,
	 0x06, 0x01, 0x86, 0x01, 0x80, 0x00, 0x06, 0x7e, 0x60, 0x01, 0x80, 0x00, 0x06, 0x7e, 0x60, 0x01,
	 0x80, 0x00, 0x07, 0x80, 0x18, 0x07, 0x80, 0x00, 0x07, 0x80, 0x18, 0x07, 0x80, 0x00, 0x00, 0x00,
	 0x06, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x06, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00,
	 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x30, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x30, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0xfc, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0xfc, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x30, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x30, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x04, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x28,
	 0x00, 0x00, 0x60, 0x60, 0x00, 0x50, 0x00, 0x00, 0x60, 0x60, 0x00, 0xa8, 0x00, 0x00, 0x67, 0x9e,
	 0x01, 0xf8, 0x00, 0x00, 0x67, 0x9e, 0x01, 0xf8, 0x00, 0x00, 0x67, 0xf9, 0x9e, 0x18, 0x00, 0x00,
	 0x67, 0xf9, 0x9e, 0x18, 0x00, 0x00, 0x19, 0xe0, 0x60, 0x60, 0x00, 0x00, 0x19, 0xe0, 0x60, 0x60,
	 0x00, 0x00, 0x07, 0x80, 0x18, 0x60, 0x00, 0x00, 0x07, 0x80, 0x18, 0x60, 0x00, 0x00, 0x06, 0x00,
	 0x06, 0x60, 0x00, 0xc0, 0x06, 0x00, 0x06, 0x60, 0x00, 0xc0, 0x01, 0x80, 0x01, 0x80, 0x03, 0xf0,
	 0x01, 0x80, 0x01, 0x83, 0x83, 0xf0, 0x06, 0x60, 0x18, 0x64, 0x80, 0xc0, 0x06, 0x60, 0x18, 0x6a,
	 0x80, 0xc0, 0x06, 0x18, 0x66, 0x1a, 0x80, 0x00, 0x06, 0x18, 0x66, 0x1d, 0x00, 0x00, 0x18, 0x06,
	 0x18, 0x06, 0x00, 0x00, 0x18, 0x06, 0x18, 0x06, 0x00, 0x00, 0x19, 0xf9, 0x80, 0x06, 0x00, 0x00,
	 0x19, 0xf9, 0x80, 0x06, 0x00, 0x00, 0x1e, 0x00, 0x60, 0x1e, 0x00, 0x00, 0x1e, 0x00, 0x60, 0x1e,
	 0x00, 0x00, 0x00, 0x00, 0x18, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x18, 0x7e, 0x00, 0x00, 0x00, 0x00,
	 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x30, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x30, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0xc0,
	 0x00, 0x00, 0x0f, 0xc0, 0x01, 0x20, 0x00, 0x00, 0x30, 0x3c, 0x03, 0xf0, 0x00, 0x00, 0x30, 0x3c,
	 0x03, 0xf0, 0x00, 0x00, 0x33, 0xf3, 0x3c, 0x30, 0x00, 0x00, 0x33, 0xf3, 0x3c, 0x30, 0x00, 0x00,
	 0x33, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x33, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x0f, 0x00, 0x30, 0xc0,
	 0x00, 0x00, 0x0f, 0x00, 0x30, 0xc0, 0x00, 0x00, 0x0c, 0x00, 0x0c, 0xc0, 0x00, 0x00, 0x0c, 0x00,
	 0x0c, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x03, 0x00, 0x00, 0xc0,
	 0x0c, 0xc0, 0x30, 0xc8, 0x00, 0x00, 0x0c, 0xc0, 0x30, 0xd4, 0x00, 0x00, 0x0c, 0x30, 0xcc, 0x32,
	 0x00, 0x00, 0x0c, 0x30, 0xcc, 0x34, 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c, 0x00, 0x00, 0x30, 0x0c,
	 0x30, 0x0c, 0x00, 0x00, 0x33, 0xf3, 0x00, 0x0c, 0x00, 0x00, 0x33, 0xf3, 0x00, 0x0c, 0x00, 0x00,
	 0x3c, 0x00, 0xc0, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0xc0, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x30, 0xfc,
	 0x00, 0x00, 0x00, 0x00, 0x30, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00,
	 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00,
	 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xf0, 0x03,
	 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x33,
	 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00,
	 0x00, 0x33, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x30, 0xc0, 0xff}};