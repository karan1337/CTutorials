#include <stdlib.h>
#include <stdio.h>

//sample input:
//54 c 128 987654 1234567890 3.14257 9.57823410
//exhaustive test of input and output

void print_sizes(){

printf("char=%lu\nshort=%lu\nint=%lu\nlong=%lu\nlong long=%lu\nfloat=%lu\ndouble=%lu\npointer=%lu\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long),
                                                                                              sizeof(long long), sizeof(float), sizeof(double), sizeof(int*));
}

int main(int argc, char* agv[]){

int number;
char letter;
//short is same as short int
short smallno;
//long is same as long int (At least 32 bits)
long largeno;
//long long is same as long long int (At least 64 bits)
long long verylargeno;
float fp;
double db;
char name[1000] = {'\0'};

print_sizes();

//putting a space before each format specifier tells scanf to skip any number of whitespace while taking input
//and it will only take visible characters as input
//inserting any other character in the scanf mandates that character to be entered as part of the input else the input parsed will be incorrect
//inserting any other character hence is not recommended unless otherwise indicated explicitly to the user

//get a number
scanf(" %d", &number);
scanf(" %c", &letter);
// hd = short int, hu = unsigned short int (d can be changed to u to denote unsigned)
scanf(" %hd", &smallno);
// ld = long int
scanf(" %ld", &largeno);
// lld = long long int (d can be changed to u to denote unsigned)
scanf(" %lld", &verylargeno);
scanf(" %f", &fp);
//ensures that newline is present (user hits enter) after double input. This way the next string input is not skipped.
//otherwise the newline is assumed as the next string input and the user is not prompted to enter a string
scanf(" %lf\n", &db);
//scanf("%c", &testc);
//get maximum 24 characters input from stdin and store in name array
fgets(name, 25, stdin);

//specifying width of the floating point or double performs rounding on the value
printf("%d %c %hd %ld %lld %.1f %.1lf %s", number, letter, smallno, largeno, verylargeno, fp, db, name);

}
