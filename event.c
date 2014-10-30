#include"event.h"
int freetime2(struct event schedule[], int n, int hour, int min) {
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
int freetime(struct event schedule[], int n, int hour, int  min){
int i;
    min=hour*60+min;
	//iterates over the array of events
	for (i = 0; i < n; i++) {
		int startmin=schedule[i].start.minute + schedule[i].start.hour*60;
        int endmin=schedule[i].end.minute+schedule[i].end.hour*60;
        if(startmin>endmin)
            if(min>=startmin||min<endmin)
                return 0;
            
        //case for the next day
       
        if(endmin>startmin){
            if(startmin<=min &&endmin>min)
                return 0;
        }
	   	

	}
    return 1;
}