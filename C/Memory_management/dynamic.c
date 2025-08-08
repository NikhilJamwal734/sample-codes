#include"stdlib.h"
#include<stdio.h>

void malloc_1(){
    int *p;
   // printf("%lu\n",p);   // it might print random addresses , which point to some value wchich is not desired leads to program failure

    p=(int*)malloc(20 * sizeof(int));
    printf("Address is %lu\n",p);
}