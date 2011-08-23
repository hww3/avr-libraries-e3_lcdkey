#ifndef E3_LCDKEY_H
#define E3_LCDKEY_H

//
// the following defines may be commented out in order to save program space.
//
#define E3_TEXT_SUPPORT
// if commented out, support for 45 characters 
// (upper case letters, numbers, basic punctuation) will be enabled.
#define E3_TEXT_CHAR 96
#define E3_GRAPH_SUPPORT
#define E3_CLEAR_PIXELS
#define E3_TEXT_SUPPORT
#define E3_IMAGE_SUPPORT

class E3_LCDKey
{
  private:
	void write_byte( uint8_t data);
	void write_data( uint8_t data);
	void write_address( uint16_t addr_data);
	
  public:
	void e3_init();
	void e3_set_pixels( uint8_t data[], uint8_t array_bytes, uint16_t line_address);
	void e3_set_color( uint8_t red_byte, uint8_t green_byte, uint8_t blue_byte);	
	void e3_bar_graph( uint8_t bar_value, uint16_t line);
	void e3_clear_line( uint16_t line);
	void e3_set_scr( uint8_t data_byte);
	void e3_set_text_line( char* text, uint8_t justify, uint16_t line);
	void e3_set_text_loc( char* text, uint8_t mode_option, uint8_t exact_length_char, uint8_t justify, uint16_t line, uint8_t text_loc);
	void e3_set_image( uint8_t image_index);
	
}

#endif