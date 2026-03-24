//Find the element x in the array (first occurance). Take array and x as input;

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int x;
    cout<<"Enter x : ";
    cin>>x;

    // declaring array
    int arr[size];

    // taking input array
    for(int i = 0; i < size; i++){
        cout<<"Index "<<i<<" : ";
        cin>>arr[i];
    }

    

    // searching x
    int index;
    bool flag = false;
    for(int i = 0; i < size; i++){
        if(arr[i]==x){
            flag = true;
            index = i;
        }
    }

    if(flag == true){
        cout<<"x found at index : "<<index;
    }else{
        cout<<"Element not found";
    }
    
    return 0;
    
    
}