#include<stdio.h>
int main()
{
  int a, b;

  scanf("%d %d",&a,&b);
  int *c=(int *)malloc(sizeof(int)*a);
  int i;
  for(i=0;i<a;i++)
    c[i]=i;

  int c;
  int j;
  for(i=0;i<b;i++){
    scanf("%d\n",&c);
    for(j=0;j<a;j+=c)
      c[j]=0;

  }


}
void arrayshrink(int *a,int n)
{
  int i;int *b=(int *)malloc(sizeof(int)*n);
  int k=0;
  for(i=0;i<n;i++)
    if(a[i]!=0)
      b[k++]=a[i];
    else
  for(i=0;i<n;i++)
    a[i]=b[b];


}
