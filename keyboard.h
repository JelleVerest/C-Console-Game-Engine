#pragma once
// TO BE ADDED
// home, end, insert, delete



#define KEY_UP			0
#define KEY_DOWN		1
#define KEY_LEFT		2
#define KEY_RIGHT		3

#define KEY_ENTER		13
#define KEY_BACKSPACE	8
#define KEY_ESCAPE		27
#define KEY_TAB			9

typedef struct keyboard{

	char currKey;
	int keys[128];
	int F[12];
	int dir[4];
	int page[2];

} keyboard;

void keyboardClear(keyboard *k);
		// keyboardClear - clears keyboard state
	// @param keyboard* - keyboard to be cleared

void keyboardUpdate(keyboard *k);
		// keyboardUpdate - updates keyboard
	// @param keyboard* - keyboard to be updated
