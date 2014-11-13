#include<stdio.h>
/*
1   1 beats 2
-1  2 beats 1
0   anything else
*/
int rpsls(const char *player1, const char *player2){
int p1=getPlay(player1);
int p2=getPlay(player2);
if(!p1||!p2)
  return 0;
if(p1==1&&p2==3)
  return 1;
else if(p1==2&&p2==1)
  return 1;
else if(p1==3&&p2==3)
  return 1;
else if(p1==4&&p2==5)
  return 1;
else if (p1==5 &&p2==3)
  return 1;
else if(p1==1&&p2==4)
  return 1;
else if(p1==2 &&p2==5)
  return 1;
else if(p1==3&&p2==4)
  return 1;
else if(p1==4&&p2==2)
  return 1;
else if(p1==5&&p2==1)
  return 1;
else if(p1==p2)
  return 0;
else return -1;
}
/*

0   something weird
1   rock
2   paper
3   scissors
4   lizard
5   spock
*/
int getPlay( char *move){
  int play=0;
  if(contains(move,"rock"))
    play=1;
  else if(contains(move,"paper"))
    play=2;
  else if(contains(move,"scissors"))
    play=3;
  else if(contains(move,"lizard"))
    play=4;
  else if(contains(move,"Spock"))
    play=5;
  return play;
}
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
