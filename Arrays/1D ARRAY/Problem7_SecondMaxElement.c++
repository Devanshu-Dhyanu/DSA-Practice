// Find the second maximum element in the array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size]; // declearing array
    for(int i = 0; i < size; i++){
        cout<<"Index "<<i<<" : ";
        cin>>arr[i];
    }

    // first maximum element
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"First max element is : "<<max<<endl;

    //second max element
    int smax = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > smax && arr[i] != max){
            smax = arr[i];
        }
    }
    cout<<"Second max element is : "<<smax;
    return 0;
}