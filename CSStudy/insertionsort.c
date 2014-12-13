#include<stdio.h>
int main(){
  int a[]={0,3,4,5,4325,5425,4325,4,4,4,324325,5425,4,35,435435,43543,543,53,2,6,765746,7654,76,987,64,3,2,6};
  sort(a,sizeof(a)/sizeof(int));
  int i;
  for(i=0;i<sizeof(a)/sizeof(int);i++)
    printf("%d\n",a[i] );
}
void sort(int *a, int n){
  int sortedindex=0;
  int i=0;
  while(sortedindex+1<n){
    //move index because altready sorted
    if(a[sortedindex]<a[sortedindex+1])
      sortedindex++;
    else{
      //move to the proper position
      while(a[sortedindex+1]>a[i]){
        i++;
      }
      int temp=a[sortedindex+1];
      int j;
      for(j=sortedindex+1;j>i;j--){
        a[j]=a[j-1];
      }
      a[i]=temp;
      i=0;
    }

  }

}
