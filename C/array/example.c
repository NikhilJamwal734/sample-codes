/*
find average temperature of the year and also find the hottest day


approach 1
    create 365 variables to store temperature
    create 365  scanf to take input

approach 2
    create array to store float

*/ 

#include<stdio.h>
int main(){

    float temp[365]; // creating an array to store temp at 365 different locations
    float sum =0.0 , average;

    int i;
    for(i=0; i<365;i++){
        scanf("%f",&temp[i]);
      }

    for(i=0;i<365;i++){
        sum += temp[i];
    }

    average = sum/365;
}