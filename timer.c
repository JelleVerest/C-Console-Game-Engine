#include "timer.h"



void delay(int milli){
	
	waitToTime(clock(), milli);
}

void waitToTime(clock_t prevTime, int milli){
	int msec = 0;

	clock_t diff;
	while (!testTimeDifference(prevTime, milli));
}

int testTimeDifference(clock_t prevTime, int milli){
	
	clock_t diff = clock() - prevTime;
	if (diff * 1000 / CLOCKS_PER_SEC >= milli)
		return 1;
	else
		return 0;
}