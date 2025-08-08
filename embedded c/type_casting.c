#include<stdio.h>

int main(){
        int a =5;
        int addredd_a =(unsigned int)&a;

        printf("the address of a is %p \n",&a);
        printf("the type casted  address of a is %ld \n",addredd_a);




    return 0;

}