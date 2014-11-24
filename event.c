#include<stdlib.h>
#include <stdio.h>
#include "event.h"
#include<assert.h>
int available (struct event schedule[], int n, struct event e){
	struct event  *temp=(struct event *)calloc(n,sizeof(struct event));
	sortSchedule(schedule,n);
	int starttime=e.start.hour*60+e.start.minute;
	int endtime=e.end.hour*60+e.end.minute;
	int i;
	if(!schedule||n<=0)
		return 0;
	assert(n>0);
	for (i=0;i<n;i++){
		int s2=schedule[i].start.hour*60+schedule[i].start.minute;
		int e2=schedule[i].end.hour*60+schedule[i].end.minute;
		if((starttime>s2&&endtime<e2)||(endtime<e2&&endtime>s2)||(starttime>s2&&starttime<e2)||(starttime<s2&&endtime>e2))
			return 0;
	}
	return 1;
}
void sortSchedule (struct event schedule[], int n){
	struct event  *temp=(struct event *)calloc(n,sizeof(struct event));
	mergeSort(schedule,n,temp);
}
void mergeSort(struct event *a, int n, struct event *temp){
	int i, j, k;
	if(n<=1)return;

	//continually divides array in two
	mergeSort(a,n/2,temp);
	//divides up second part of array and sorts it
	mergeSort(a+n/2,n-n/2,temp);
	i=0;
	//start of second part of array
	j=n/2;
	//position in array which is being placed
	k=0;
	while(i<n/2&&j<n){
		if(a[i].start.hour*60+a[i].start.minute<a[j].start.hour*60+a[j].start.minute)
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<n/2)
		temp[k++]=a[i++];
	while(j<n)
		temp[k++]=a[j++];
	for(i=0;i<n;i++)
		a[i]=temp[i];
}
//int main (void)
//{
//	struct event schedule[] = {
//		{{15,0},{16,30}},
//		{{9,0},{9,15}},
//		{{13,0},{14,20}},
//		{{17,15},{18,0}},
//		{{9,45},{9,55}},
//
//	};
//
//	int i;
//	struct event event0 = {{10,0},{10,30}};
//	struct event event1 = {{14,20},{15,0}};
//	struct event event2 = {{17,0},{17,30}};
//	struct event event3 = {{15,30},{16,0}};
//
//	printf ("%d\n", available (schedule, sizeof(schedule)/sizeof(schedule[0]), event0));
//	printf ("%d\n", available (schedule, sizeof(schedule)/sizeof(schedule[0]), event1));
//	printf ("%d\n", available (schedule, sizeof(schedule)/sizeof(schedule[0]), event2));
//	printf ("%d\n", available (schedule, sizeof(schedule)/sizeof(schedule[0]), event3));
//
//	sortSchedule (schedule, sizeof(schedule)/sizeof(schedule[0]));
//
//	for (i = 0; i < sizeof(schedule)/sizeof(schedule[0]); i++)
//		printf ("%02d:%02d - %02d:%02d\n", schedule[i].start.hour,
//				schedule[i].start.minute, schedule[i].end.hour, schedule[i].end.minute);
//
//	return 0;
//}
