// Find the doublet in the Array whose sum is equal to the given value x.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size]; // declaring array
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0; i < size; i++){ // taking input of array
        cout<<"Index "<<i<<" : ";
        cin>>arr[i];
    }

    int x; // target variable
    cout<<"Enter the x : ";
    cin>>x;

    bool flag = false;
    for(int i = 0; i < size-1; i++){
        for(int j = 1; j < size; j++){
            if(arr[i] + arr[j] == x){
                cout<<"Doublet found at ("<<i<<","<<j<<")";
                flag = true;
            }
        }

    }

    if(!flag){
        cout<<"Doublet not found";
    }

    return 0;

}