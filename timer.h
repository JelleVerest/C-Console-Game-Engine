#pragma once
#include <time.h>


void delay(int milli);
		// delay - delays the program n seconds
	// @param int - milliseconds to delay

void waitToTime(clock_t prevTime, int milli);
		// waitToTime - waits till a certain time has passed since prevTime
	// @param clock_t - initial time to check current time to
	// @param int - time difference in milliseconds

int testTimeDifference(clock_t prevTime, int milli);
		// testTimeDifference - tests if more time has elapsed than specified
	// @param clock_t - time to check current time to
	// @param int - time difference in milliseconds
