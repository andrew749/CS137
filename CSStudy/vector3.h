struct vector{
int *values;
int size;
int length;
};
struct vector *createVector();
int getValue(struct vector *a,int index);
void addValue(struct vector *a, int value);
void deleteVector(struct vector *a);
void setValue(struct vector *a, int value, int index);
