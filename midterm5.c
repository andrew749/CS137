#include<math.h>
#include<stdio.h>
int filldigit(int  *, int);
int filldigit(int *a, int number){
  int this=1;
  //ifnoring array
  int b[10]={0};
  while(1){
    if(number==0)return 1;

    if(b[number%10]==0){
      b[number%10]=1;

      }
      number/=10;


    }
    int i;
    for( i=0;i<10;i++){
      if(b[i]==1 &&a[i]==0){
	this=0;
	a[i]=1;

	}
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
    if( filldigit(a,n)){
      break;
    }
    else printf("%d",n);
  }
  return 0;
}

