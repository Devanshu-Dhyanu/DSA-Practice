#include<iostream>
#include<vector>
using namespace std;
int main(){
    // taking input when size is given
    vector<int>arr(5);
    int size = arr.size();
    for(int i = 0; i < size; i++){
        cout<<"Index "<<i<<": ";
        cin>>arr[i];
    }

    // Printing vector
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}