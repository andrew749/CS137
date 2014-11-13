
char * alphabetic(const char *s){
  int i=0;
  if(s){
  while(s[i]!='\0')
    i++;
  char  *j=malloc(sizeof(char)*i);
  i=0;
  int x=0;
  while(s[i]!='\0'){
    if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122) ){
      j[x]=s[i];
      x++;
    }
    i++;

  }

return j;
}else return (char*) 0;
}
