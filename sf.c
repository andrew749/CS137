#include<stdio.h>
#include"sf.h"
#include<assert.h>
int debug=0;
void sortCards(struct card hand[], int n);
int straightflush(struct card hand[], int n){
	if(n<=0||!hand)
		return 0;
	int i=0,previous,reset=0;
	sortCards(hand,n);
	// for (;i<n;i++){
	// 	printf("Suit %c, Value %d\n",hand[i].suit,hand[i].value);
	// }

	int count=0,ace=0;
	char suit;
	i=0;
	while(i<n){
		suit=hand[i].suit;
		count=0;
		ace=0;
		previous=hand[i].value-1;
			for(;i<n&&hand[i].suit==suit;i++){
			//	printf("analysing %d %c\n",hand[i].value, hand[i].suit);
				//set the ace flag to handle special case
				if(hand[i].value==1){
					ace=1;

				}

	assert(hand[i].suit=='h'||hand[i].suit=='d'||hand[i].suit=='s'||hand[i].suit=='c');
				//skip over similar elements
				while(hand[i].value==previous){
					i++;
				}

				//checks if the previous element is 1 less than the current or special ace case
				if(count==0||previous==hand[i].value-1||(count==4&&ace&&hand[i].value==13&&hand[i].value-previous==1)){
					count++;

					//printf("incrementing count to %d for value %d, and suit %c\n",count,hand[i].value, hand[i].suit);
					previous=hand[i].value;

				}
				else{
					count=1;
					previous=hand[i].value;
					ace=0;
					if(hand[i].value==1){
						ace=1;

					}
					continue;
				}

				//fits the criteria
				if(count==5)
					return 1;

			}


		}
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
		assert((hand[i].suit=='h'||hand[i].suit=='d'||hand[i].suit=='s'||hand[i].suit=='c')&&n>0);
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
