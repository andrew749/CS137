#include<math.h>
#include<stdio.h>
int filldigit(int  *, int);
int filldigit(int *a, int number){
  int i=log10(number);
  int this=0;

  for(;;i--){
    if(a[number%10]==0){
      a[number%10]=1; this=1;
      }
      else{
        return 0;
      }
      number/=10;
      if(number==0)break;
    }
    return this;
  }

int main(){
  int n=0;
  scanf("%d",&n);
  if(n<0)
    return 0;
    int a[10]={0};
    filldigit(a,n);
  while(n>0){
    scanf("%d",&n);
    if(!filldigit(a,n)){
      break;
    }
    else printf("%d",n);
  }
  return 0;
}
