#include<stdio.h>
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
int dayOfYear(int day, int month, int year){
	int daysofmonths[]={31,28,31,30,31,30,31,31,30,31,30,31};
		if(day<1||day>31||month<1||month>12||year<1753){
		return -1;
	}
	if(leap(year))
		daysofmonths[1]=29;


	if(!leap(year)&&day==29){
		return -1;
	}
	
	int numberOfDays=0;
	
	for(int j=0;j<month-1;j++){
		numberOfDays+=daysofmonths[j];

	}
	numberOfDays+=day;

	return numberOfDays;
}
 //  void testDayOfYear(int day, int month, int year)
 //  {
 //    printf ("%d/%d/%d => %d\n", day, month, year,
 //            dayOfYear(day, month, year));
 //  }
 // int main(){
 // 	int day,month,year;
 // 	scanf("%d %d %d",&day,&month,&year);
 	
 // 	testDayOfYear(day,month,year);
 // 	return 0;
 // }
