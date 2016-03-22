//C workshop

int* p, q; //p is an int* and q is an int. The * is associated with the variable and not the type
//Good style is to follow:-
int *p, *q //to declare 2 int* pointers

//the result of pointer arithmetic depends on the type of the pointer
//e.g. int* A; A = A + i  = A + i*sizeof(int)
//Good rule of thumb for pointer arithmetic:
//cast when performing poiter arithmetic e.g. (int*)A + i
//even if A is already of type int*
//this is specially to be done in macros e.g. macro for NEXT_BYTE requires a cast of (char*)p

//the keyword struct is part of the type here.
// the type here is struct foo_s (foo_s is not the name of the struct)
struct foo_s{
//list of fields
};
typedef struct foo_s FS;
//now can use FS to refer to the type struct foo_s

//do not cast a pointer to a larger type and deference it
//this accesses memory with undefined contents

//when malloced nested structs or arrays. free the pointers starting from the inside to outermost pointers

#define WORD_SIZE 4
#define MAX(A,B) ((A) > (B) ? (A) : (B))
#define REQUIRES(COND) assert(COND)

//the implementation of const is not specified

//header files include macros adn C declarations to be shared across multiple files
//only include funciton prototypes and no implementation code

//header guards
#ifndef HEADERNAME_H
#define HEADERNAME_H

#endif
