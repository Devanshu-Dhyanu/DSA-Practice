// Find the maximum element in the array
#include<iostream>
// #include<climits>
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

    int max = arr[0];
    // max = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<"Max element of the element is "<<max;
    return 0;
}