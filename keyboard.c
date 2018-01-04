#include "keyboard.h"



void keyboardClear(struct keyboard *k){
	for (int i = 0; i < 128; i++)
		k->keys[i] = 0;
	for (int i = 0; i < 12; i++)
		k->F[i] = 0;
	for (int i = 0; i < 4; i++)
		k->dir[i] = 0;
	for (int i = 0; i < 2; i++)
		k->page[i] = 0;


	k->currKey = 0;
}

void keyboardUpdate(struct keyboard *k){

	keyboardClear(k);

	if (kbhit())
		k->currKey = getch(); 
	if (k->currKey == -32){
		// some keys are 2 character symbols, 
		// starting with -32

		k->currKey = getch();
			
			// directional keys
		if (k->currKey == 72)
			k->dir[KEY_UP] = 1;
		if (k->currKey == 75)
			k->dir[KEY_LEFT] = 1;
		if (k->currKey == 77)
			k->dir[KEY_RIGHT] = 1;
		if (k->currKey == 80)
			k->dir[KEY_DOWN] = 1;

			// page keys
		if (k->currKey == 73)
			k->page[KEY_UP] == 1;
		if (k->currKey == 81)
			k->page[KEY_DOWN] == 1;

			// F keys 11 and 12
		if (k->currKey == -123)
			k->F[11] == 1;
		if (k->currKey == -122)
			k->F[12] == 1;



	}
		// other F keys, which don't have -32
	else if (k->currKey == 59)
		k->F[1] = 1;
	else if (k->currKey == 60)
		k->F[2] = 1;
	else if (k->currKey == 61)
		k->F[3] = 1;
	else if (k->currKey == 62)
		k->F[4] = 1;
	else if (k->currKey == 63)
		k->F[5] = 1;
	else if (k->currKey == 64)
		k->F[6] = 1;
	else if (k->currKey == 65)
		k->F[7] = 1;
	else if (k->currKey == 66)
		k->F[8] = 1;
	else if (k->currKey == 67)
		k->F[9] = 1;
	else if (k->currKey == 68)
		k->F[10] = 1;
	else 
		// other keys
		k->keys[k->currKey] = 1;
}
