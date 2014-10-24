#include"event.h"
int freetime (struct event schedule[], int n, int hour, int min){
  int i;
  //iterates over the array of events
  for(i=0;i<n;i++)
  {
    if(schedule[i].start.hour<=hour&&schedule[i].end.hour>hour)
      {
        if(schedule[i].start.minute<=min&&schedule[i].end.minute>min)
          {
            return 0;
          }
      }



  }
  return 1;
}
