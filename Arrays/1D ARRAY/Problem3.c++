//Given an array of marks of students, if the marks of any student is less than 35, print its roll number .
//roll number here refers to the index of the array.

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    for(int i = 0; i < size; i++){
        cout<<"Index "<<i<<" : ";
        cin>>arr[i];
    }

    cout<<"Roll numbers of students who have marks less than 35 are : ";
    for(int i = 0; i < size; i++){
        if(arr[i] < 35){
            cout<<i<<" ";
        }
    }
}