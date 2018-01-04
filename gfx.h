#pragma once
#include <stdio.h>

typedef struct buffer{

	int width;
	int height;

	char *b;

}buffer;

void bufferSetDimensions(buffer *b, int w, int h);
		// setDimensions - sets dimensions of the buffer
	// @param buffer* - buffer to set dimensions for
	// @param int - width
	// @param int - height

void bufferClear(buffer *b);
		// clear - clears buffer content
	// @param buffer* - buffer to be cleared

void bufferDraw(buffer *b);
		// draw - draws buffer content
	// @param buffer* buffer to be drawn

void bufferSetPixel(buffer *b, int x, int y, char c);
		// setPixel - sets pixel on [x,y] in buffer
	// @param buffer* - buffer the pixel is to be added
	// @param int - x coordinate of pixel
	// @param int - y coordinate of pixel
	// @param char - character to be set

void bufferSetString(buffer *b, int x, int y, char* string);
		// setString - puts string at [x,y] in buffer
	// @param buffer* - buffer to add the string to
	// @param int - x coordinate of string
	// @param int - y coordinate of string
	// @param char* - string to be added

void bufferFree(buffer *b);
		// bufferFree - frees content of buffer
	// @param buffer* - buffer of which content is to be freed
