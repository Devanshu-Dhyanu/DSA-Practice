// This is problem 1 from the Arrays section of the LeetCode problems. The problem is to find the product of all elements of an array.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    // taking input from the user
    int arr[size];
    for(int i = 0; i < size; i++){
        cout<<"Index "<<i <<" : ";
        cin>>arr[i];
    }

    int product = 1;
    for(int i = 0; i < size; i++){
        product = product * arr[i];
    }

    cout<<"Product of the elements of the given array is : "<<product;
    return 0;
}