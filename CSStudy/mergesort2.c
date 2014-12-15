#include<stdio.h>
void sort(int *a, int n, int *temp){
if(n<=1)return ;
sort(a,n/2,temp);
sort(a+n/2,n-n/2,temp);
  int i=0,j=0,k=n/2;
while(j<n/2 &&k<n)
  if(a[j]<a[k])
    temp[i++]=a[j++];
  else
    temp[i++]=a[k++];
while(j<n/2)
  temp[i++]=a[j++];
while(k<n)temp[i++]=a[k++];

for(i=0;i<n;i++)
  a[i]=temp[i];
}
int main(){
int b[]={3414,31,43214,3,324,31,31,3,3,4654,654,3,563,456,54,36,543675,4,2};
int *temp=(int *)calloc(sizeof(b)/sizeof(int),sizeof(int));
sort(b,sizeof(b)/sizeof(int),temp);
int i=0;
for(i=0;i<sizeof(b)/sizeof(int);i++)
  printf("%d\n",b[i] );



}
