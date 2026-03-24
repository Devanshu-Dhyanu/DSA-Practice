// This is problem 1 from the Arrays section of the LeetCode problems. The problem is to find the sum of all elements of an array.

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    //declearing array
    int arr[size];

    //taking input of array elements
    for(int i = 0; i < size; i++){
        cout<<"index "<<i<<" : ";
        cin>>arr[i];
    }

    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    cout<<"Sum of all elements of the array is : "<<sum;
    return 0;
}