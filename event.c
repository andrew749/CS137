#include"event.h"
int freetime(struct event schedule[], int n, int hour, int min) {
	int i;
	//iterates over the array of events
	for (i = 0; i < n; i++) {
		//checks to see if the event is in the same general range
		if (schedule[i].start.hour <= hour && schedule[i].end.hour >= hour) {

			// if the hour crosses the boundary
			if (schedule[i].start.hour < hour) {
				if (schedule[i].end.hour > hour) {
					return 0;
				}
				if (schedule[i].end.hour == hour) {
					if(schedule[i].end.minute>min){
						return 0;
					}

				}
			}else if(schedule[i].start.hour==hour){
				if(schedule[i].end.hour==hour){
					if(min>=schedule[i].start.minute&&min<schedule[i].end.minute){
						return 0;
					}
				}

				if(schedule[i].end.hour>hour){
					return 0;
				}
			}

		

		}
	}

	return 1;
}
