// This is problem 2 from the Arrays. The problem is to find the sum of all elements of an array.

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

    int sum = 0; // initialised sum with 0 because 0 is the identity element for addition

    for(int i = 0; i < size; i++){
        sum = sum + arr[i]; // sum = sum + arr[i] is same as sum += arr[i]
        //adding each element of the array to the sum variable
    }

    cout<<"Sum of all elements of the array is : "<<sum;
    return 0;
}