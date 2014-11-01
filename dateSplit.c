#include<stdio.h>
int dateSplit(int dayOfYear, int year, int *day, int *month){
  int daysofmonths[]={31,28,31,30,31,30,31,31,30,31,30,31};
  if(dayOfYear<=0||year<1753||dayOfYear>366)
    return 0;
  if(leap(year)) daysofmonths[1]=29;
  else if(dayOfYear>365) return 0;
  int i;
  *month=0;
  for (i=0;dayOfYear>0;i++){
    *month=i+1;
    dayOfYear-=daysofmonths[i];
    if(dayOfYear<=daysofmonths[i+1]&&i<=10){
      *month+=1;

      *day=dayOfYear;

      break;
    }
  }

  return 1;
}
int leap(int year){

  if (year%400==0)

    return 1;
  else if (year%100==0)

    return 0;
  else if (year%4 ==0)
    return 1;
  else
return 0;
}
