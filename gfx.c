#include "gfx.h"

void bufferSetDimensions(buffer *b, int w, int h){
	b->width = w;
	b->height = h;

	b->b = malloc(sizeof(char)*w*h + 1);
}


void bufferClear(buffer *b){
	for (int i = 0; i < b->width * b->height; i++)
		b->b[i] = ' ';
	b->b[b->width * b->height] = '\0';
}

void bufferDraw(buffer *b){


	//char *clr = malloc(sizeof(char)*b->width*b->height + 1);
	
	//for (int i = 0; i < b->width * b->height; i++)
	//	clr[i] = ' ';
	//clr[b->width * b->height] = '\0';

	//printf("%s", clr);
	printf("%s", b->b);
	//free(clr);
}

void bufferSetPixel(buffer *b, int x, int y, char c){
	if (x >= 0 && x < b->width && y >= 0 && y < b->height)
		//if (x != b->width && y != b->height)
			b->b[x + b->width * y] = c;
		
}

void bufferSetString(buffer *b, int x, int y, char* string){

	if (x >= 0 && x <= b->width && y >= 0 && y <= b->height)
		if (x != b->width && y != b->height){

			int i = 0;
			while (string[i] != '\0')
				bufferSetPixel(b, (x + i) % b->width, y + (x + i) / b->width, string[i++]);
		}
}

void bufferFree(buffer *b){
	free(b->b);
}