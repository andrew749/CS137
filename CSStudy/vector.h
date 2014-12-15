struct vector{
  int *elements;
  int size;
  int length;
};
void addElement(struct vector *list,int value);
struct vector *createVector();
int getElement(struct vector *list,int index);
void deleteVector(struct vector *list);

void setElement(struct vector *list, int index, int value);
