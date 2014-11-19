#include<stdio.h>
#include"sf.h"
int straightflush(struct card hand[], int n){


}
struct card *sortSuits(struct card hand[], int n){
int i,j=0;
//sort based on suit
//returns order c,d,h,s
//filter out cards that are the same
  struct card *sortedArray=(struct card *) calloc(n,sizeof(struct card));
  //put the first element in the array
  sortedArray[0]=hand[0];
  //sets the lowest suit
  char lowest=hand[0].suit;
  //sorts based on suit
  for (i=1;i<n;i++){
    //if the element is out of order
  while(hand[i].suit>sortedArray[j].suit&&j<n){
    printf("hand at %d is %c, sorted Array %d suit=%c\n",i,hand[i].suit,j,sortedArray[j].suit);
    j++;
  }
  sortedArray[j]=hand[i];


}

}
int main(){
  struct card hand1[] = {{4,'s'}, {9,'s'},{12,'c'},{11,'s'},{8,'s'},
                           {6,'d'}, {3,'d'},{7,'s'},{10,'s'},{12,'d'}};
  struct card s[]=sortSuits(hand1,10);
  int i;
  for(i=0;i<10;i++){
    printf("Sorted: Card %c  %d",s[i]->suit,s[i]->value);
  }
  return 0;
}
