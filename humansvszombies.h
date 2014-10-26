#ifndef _HVZ_H_
#define _HVZ_H_

struct human{
int alive;
int str;
int stunned;
}
struct human createHuman(int str);
struct human createZombie();
void fight(struct human *h
