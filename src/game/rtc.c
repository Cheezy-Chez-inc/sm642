#include <ultra64.h>
#include "game_init.h"
#include "src/game/main.h"
#include "rtc.h"

Clock gRtcState;

void rtc_init() {
	gRtcState.year = 0;
	gRtcState.month = 1;
	gRtcState.week = 0;
	gRtcState.day = 1;
	gRtcState.hour = 0;
	gRtcState.min = 0;
	gRtcState.sec = 0;
	osRTCInit(&gSIEventMesgQueue);
}

void update_rtc() {
	osRTCGetTime(&gSIEventMesgQueue, &gRtcState);
}