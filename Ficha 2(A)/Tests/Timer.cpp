// Pedro Ribeiro (DCC/FCUP) [last update: 25/09/2022]

#include "Timer.h"
#include <ctime>

// Static variables
clock_t Timer::cstart[MAX_TIMERS];
clock_t Timer::cend[MAX_TIMERS];

// Stop the clock of a timer
void Timer::start(int n) {
  if (n>=0 && n<MAX_TIMERS)
      cstart[n] = clock();
}

// Elapsed time of a timer
void Timer::stop(int n) {
    if (n>=0 && n<MAX_TIMERS)
        cend[n] = clock();
}

double Timer::elapsed(int n) {
  if (n>=0 && n<MAX_TIMERS)
    return (double)(cend[n] - cstart[n]) / CLOCKS_PER_SEC;
  else
    return 0;
}
