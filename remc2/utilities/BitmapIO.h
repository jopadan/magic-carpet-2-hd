#pragma once
#ifndef BitmapIO_H
#define BitmapIO_H

#include <cstdint>
#include <png.h>
#include "../portability/port_filesystem.h"

class BitmapIO
{
private:
	static unsigned char* CreateBitBitmapFileHeader(int fileHeaderSize, int infoHeaderSize, int height, int stride);
	static unsigned char* CreateBitBitmapInfoHeader(int infoHeaderSize, int width, int height, int bytesPerPixel);	
	static void WriteImagePNG(const char* filename, int width, int height, uint8_t* buffer, char* title);
	static void setRGBA(png_byte* ptr, uint8_t* val);
	static uint8_t MultiplyValue(uint8_t orig, double multiplier);

public:
	static const int TRUECOLOR_BYTES_PER_PIXEL;
	static const int RGBA_BYTES_PER_PIXEL;
	static const int BITMAP_FILE_HEADER_SIZE;
	static const int BITMAP_INFO_HEADER_SIZE;
	static const int TRANSPARENT_COLOUR;

	static void WriteImageBufferAsImageBMP(const char* path, int width, int height, uint8_t* ptrPalette , uint8_t* ptrBuffer);
	static void WriteRGBAImageBufferAsImageBMP(const char* path, int width, int height, uint8_t* ptrPalette, uint8_t* ptrBuffer);
	static void WritePaletteAsImageBMP(const char* path, int numColors, uint8_t* ptrPalette);
#ifdef _DEBUG
	static void WritePosistructToPng(uint8_t* ptrPalette, uint8_t* ptrBuffer, int width, int height, char* filename, char* title, int frame, double multiplier = 4);
	static void WritePosistructToPng(uint8_t* ptrPalette, uint8_t* ptrBuffer, int width, int height, char* filename, char* title, int frame, double multiplier, uint8_t transColR, uint8_t transColG, uint8_t transColB);
#endif

};

#endif