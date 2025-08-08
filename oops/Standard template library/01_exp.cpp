#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> numbers = {49, 29,57,20,69};

    sort(numbers.begin() ,numbers.end());

    cout<< "Ascending order: ";
    for(int num : numbers)
{
    cout<< num << " ";
}

cout << endl;
}