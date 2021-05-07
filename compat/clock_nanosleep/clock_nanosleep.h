#ifndef CLOCK_NANOSLEEP_H
#define CLOCK_NANOSLEEP_H

#include <mach/mach_time.h>

#ifndef TIMER_ABSTIME
#define TIMER_ABSTIME 1
#endif // TIMER_ABSTIME

struct timespec;

int clock_nanosleep (clock_id_t id, int flags, const struct timespec *ts,
                     struct timespec *ots);

#endif //CLOCK_NANOSLEEP_H
