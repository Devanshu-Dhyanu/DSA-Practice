#include<iostream>
#include<vector>
using namespace std;
int main(){
    // taking input when size is not given
    vector<int>arr;
    
    for(int i = 0; i < arr.size(); i++){
        cout<<"Index "<<i<<": ";
        cin>>arr[i];  // this will give segmentation fault because hamre vector ka size 0 hai koi size nahi hai aur muh kisi index pe input le rhe hain 
    }

    

    return 0;

}