#include <stdlib.h>
#include <stdio.h>

struct Room{
  float width;
  float length;
  float height;
  char* name;
};

struct House{
  char *address;
  //array of 10 Room pointers
  struct Room *rooms[10];
};

//house is passed by value here
void printHouse(struct House house){
  printf("%s", house.address);
  printf("\n");
  for(int i=0; i < 10; i++){
    if(house.rooms[i] != NULL){
      struct Room r = *house.rooms[i];
      printf("Room #%d %s %.1f by %.1f\n", i, house.rooms[i]->name, r.width, r.height);
    }
  }
}

struct Room* createRoom(char* name, float width, float length, float height){

  //get memory for allocating struct
  struct Room* r = (struct Room*)malloc(sizeof(struct Room));

  //initialize the newly allocated struct via pointer
  r->width = width;
  r->length = length;
  r->height = height;
  r->name = name;
  //return the address of the pointer
  return r;
}

int main(int args, char* argv[]){

  struct House h;
  h.address = "10 Palace Road";

  //set all other room pointers to NULL
  for(int i=0; i < 10; i++){
    h.rooms[i] = NULL;
  }

  //manually create a Room and initialize members
  struct Room hall;
  hall.width = 10;
  hall.height = 9;
  hall.name = "Hall";

  //set first room pointer to the hall
  h.rooms[0] = &hall;
  //use the createRoom function to return a pointer to an initialized room
  h.rooms[1] = createRoom("Lounge", 20, 20, 9);
  //print the house details (pass house by value)
  printHouse(h);
  //struct can be passed both as a reference and by value. By reference is preferred since it saves space
  //system("PAUSE");
}
