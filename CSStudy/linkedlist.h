struct listitem{
struct listitem *nextitem;
int value;
};
struct list{
struct listitem *headelement;
  int length;

};
void additem(int location, int value,struct list *list);
int getitem(struct list *l,int index);
void deleteitem(struct list *l,int index);
struct list *createlist();
