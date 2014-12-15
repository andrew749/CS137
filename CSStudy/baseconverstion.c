int convert(int number, int base){
while(number!=0)
{
  printf("%d\n",number%base );
number/=base;
}


}
int main(){
convert(100,16);


}
