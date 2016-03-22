#include <stdio.h>
#include <stdlib.h>

//void pointers cannot be directly dereferenced.
//they need to be casted before being dereferenced
void* return_me(int*);

int main(){

int x = 10;
int *p = return_me(&x);
printf("%p", p);
return 0;
}

void* return_me(int* pnum){
  return pnum;
}
