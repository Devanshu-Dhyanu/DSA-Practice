// Find the last occurance of a number y in an array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;

    vector<int>arr;
    for(int i = 0; i < size; i++){
        cout<<"Index : "<<i<<" : ";
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int y;
    cout<<"Enter y : ";
    cin>>y;
    bool flag = false;
    int index= -1;
    for(int i = arr.size()-1; i >= 0; i--){
        if(arr[i] == y){
            flag = true;
            index = i;
            break;
        }
    }

    if(flag == true){
        cout<<"last occurance found at index : "<<index;
    }else{
        cout<<"Element not found";
    }

    return 0;
    

    

}