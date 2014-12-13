#include<stdio.h>
int main(){

  int a[]={1,2,3,4,5,6,7,8,9,10};

  printf("%d\n",search(a,10,10));
}int search(int a[],int n,int value){
int l=0,h=n-1;
while(h>=l){
int m=l+(h-l)/2;
if(a[m]==value)return m;
if(a[m]>value)h=m-1;
else h=m+1;

}


}
int improvedsearch(int *a, int value, int minindex, int maxindex){



}
