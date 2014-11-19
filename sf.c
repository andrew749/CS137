#include<stdio.h>
#include"sf.h"
int debug=0;
void sortCards(struct card hand[], int n);
int straightflush(struct card hand[], int n){
	int i=0,previous;
	sortCards(hand,n);
	int count=0;
	char suit;
	i=0;
	while(i<n){
		suit=hand[i].suit;
		count=0;
		while(hand[i].suit==suit)
		{

			for(;i<n&&hand[i].suit==suit;i++){

				//skip over similar elements
				while(hand[i].value==previous){
					i++;
				}
				//checks if the previous element is 1 less than the current to
				if(previous=hand[i].value-1/*account for special cases*/){
					count++;
				}
				else{
					count=0;
					continue;
				}
				if(count==5)
					return 1;
				previous=hand[i].value;
			}

		}}
	return 0;

}

void sortCards(struct card hand[], int n){
	int i,j=0;
	struct card temp;
	int min;
	// order c,d,h,s
	//sorts based on suit
	for (i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++)
			if(hand[j].suit<hand[min].suit) min=j;
		temp=hand[min];
		hand[min]=hand[i];
		hand[i]=temp;
	}
	i=0;j=0;
	//print array



	while(i<n){
		char suit=hand[i].suit;
		min=i;
		while(hand[i].suit==suit){
			//sort the suit
			for(j=i+1;j<n&&hand[j].suit==suit;j++){

				if(hand[j].value<hand[min].value){
					min=j;
				}
			}
			temp=hand[min];
			hand[min]=hand[i];
			hand[i]=temp;
			i++;
			min=i;
		}
		//when not equal to suiit
	}

}
