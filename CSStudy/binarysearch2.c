#include<stdio.h>
int main(){

  int a[]={1,2,3,4,5,6,7,8,9,10};
  printf("%d\n",search4(a, 10, 4) );


}
int search(int *a, int n, int value)
{

  int l, h=n-1;
  while(h>=1){
    int m=l+(h-1)/2;
    if(a[m]==value)return m;
    else if(a[m]<value)l=m+1;
    else h=m-1;


  }return -1;


}
int search2(int *a, int n, int value){

int l,m, h=n-1;
while(h>=1){
int m=l+(h-1)/2;
if(a[m]==value)return m;
else if(a[m]<value)l=m+1;
else h=m-1;


}
return -1;
}
int search3(int *a, int n, int value){
int l=0,m,h=n-1;
while(h>=1)
{
m=l+(h-1)/2;
if(a[m]==value)return m;
else if(a[m]>value)h=m-1;
else l=m+1;


}
return -1;

}
int search4(int *a, int n, int value)
{
int l=0,h=n-1,m;
while(h>=1)
{
m=l+(h-1)/2;
if(a[m]==value)return m;
else if(a[m]>value)h=m-1;
else l=m+1;



}



}
