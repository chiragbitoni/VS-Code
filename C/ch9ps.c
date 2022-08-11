#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    (*ptr).id= 10; 
    strcpy((*ptr).name,"Chirag");
    printf("Result after using pointer = %d , %s\n",(*ptr).id,(*ptr).name);
    ptr->id=10;
    strcpy(ptr->name,"Chirag");
    printf(" Result after using arrow operator = %d , %s",ptr->id,ptr->name);
    return 0;
} 