/*
    Find number of prime numbers upto N

        => all even numbers are not prime.
        =>
*/

#include<stdio.h>
# define N 100          // macro

int main(void){
    int p, i, primes[N],primeIndex;
    int isprime;
    primes[0]=2;
    primes[1]=3;
    primeIndex=2;

    for(p=5;p<=N;p=p+2){   // iterate over all odd numbers <=N
        isprime=1;
        for(i=1;i<primeIndex; i++){
            if(p%primes[i]==0)
            isprime =0;
        }
        if(isprime ==1){
            primes[primeIndex]=p;
            ++primeIndex;
        }
    }
    for(i=0;i<primeIndex;i++){
        printf("\n%d",primes[i]);
    }
} 