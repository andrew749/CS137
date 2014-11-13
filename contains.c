#include <stdio.h>
int contains( char *s, char *t){
  int count=0,i=0;
int tindex=0;
if(s!= NULL&& t!=NULL)
  for (i=0;s[i]!=(char *)0;){
    if(s[i]!=t[tindex]){
      i++;
      tindex=0;
      continue;
    }

    while(s[i]==t[tindex]&&s[i]!= NULL ){

      if(tindex==strlen(t)-1){
        count+=1;
        i++;
        tindex=0;
        break;
      }
      i++;
      tindex++;
    }
    tindex=0;


  }

  return count;
}
