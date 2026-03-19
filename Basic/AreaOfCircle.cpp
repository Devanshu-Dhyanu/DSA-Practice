// Question : alculate the area of a circle given its radius.

#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter the radius of circle : ";
    cin>>radius;

    float pi = 3.14;
    float area = pi * radius * radius;

    cout<<"Area of Circle is : "<<area;
    return 0;
}