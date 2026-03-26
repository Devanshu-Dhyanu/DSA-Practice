#include<iostream>
#include<vector>
using namespace std;
int main(){
    // taking input when size is not given
    vector<int>arr;
    for(int i = 0; i < 5; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    // Printing vector
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}