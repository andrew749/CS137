#include<stdio.h>
int main(){
int a[]={9,78,5,4,32,321,1,0};
sort3(a,8);
int i;
for(i=0;i<8;i++)
  printf("%d\n",a[i] );


}
int sort(int *a, int n)
{
  int i ,j,temp;
  for(i=1;i<n;i++){
    j=i;temp=a[j];
    while(j>0&&a[j-1]>temp)
    {
      a[j]=a[j-1];
      --j;

    }
a[j]=temp;

  }




}
int sort2(int *a, int n)
{
int j, temp, i;
for(i=1;i<n;i++)
{j=i;temp=a[j];
while(j>0&&a[j-1]>temp)
{
a[j]=a[j-1];
--j;

}
a[j]=temp;
}

}
void sort3(int *a, int n)
{
int i,j,temp;
for(i=1;i<n;i++){
j=i;temp=a[j];
while(j>0&&a[j-1]>temp)
{
a[j]=a[j-1];
--j;

}
a[j]=temp;



}




}
