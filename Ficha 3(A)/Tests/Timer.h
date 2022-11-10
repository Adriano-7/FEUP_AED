// Pedro Ribeiro (DCC/FCUP) [last update: 25/09/2022]

#ifndef _TIMER_
#define _TIMER_

#define MAX_TIMERS 1000 // Number of timers
#include <ctime>

class Timer {
 private:
  static clock_t cstart[MAX_TIMERS];   // Start times
  static clock_t cend[MAX_TIMERS];     // End times

 public:
  static void     start(int n);        // Start the clock of a timer
  static void      stop(int n);        // Stop the clock of a timer
  static double elapsed(int n);        // Elapsed time of a timer
};

#endif
