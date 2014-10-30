#include <stdio.h>
#include "event.h"

int main (void)
{
  struct event schedule[] = {{{9,1},{8,1}}};
printf("%d",freetime(schedule,1,8,55));
//  printf ("%d\n", freetime (schedule,3,8,0));
//  printf ("%d\n", freetime (schedule,3,9,50));
//  printf ("%d\n", freetime (schedule,3,13,0));
//  printf ("%d\n", freetime (schedule,3,9,30));

  return 0;
}
