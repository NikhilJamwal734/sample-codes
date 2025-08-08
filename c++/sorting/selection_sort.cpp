/*
Two parts of list , one is sorted and other is unsorted
    => take the smallest element from the unsorted part place it into sorted part
    => n-1 iteations to find n-1 smallest numbers.
    => swaping elements from unsorted part all the sorted elements are considered as sorted part
    => First element of unsroted part is considered as smallest element and compare with others to actually find the smallest one.
*/

#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){   //n is used to calculate number of iterations
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallestIdx = i; // element at 1st index is consedered as smallest
        for (int j =i+1; j<n; j++){   //  j -> pepresenting running loop at the unsorted part starting from the +1 index
            if(arr[j]< arr[smallestIdx]){   //  comparing the smallest element with jth index
                smallestIdx =j;             //  if value at the jth index is smaller then replace the index value
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n=5;         // size of an array
    int arr[]={2,4,1,5,3};

    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}