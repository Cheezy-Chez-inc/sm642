#include <ultra64.h>

// alias
typedef OSRTCTime Clock;

extern Clock gRtcState;

void rtc_init();
void update_rtc();