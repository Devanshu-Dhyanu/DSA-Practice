/* what is pointer -->> Pointer basically memory address store karta hai.
Simple words me: pointer kisi variable ka address hold karta hai, value nahi.  */

#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5};

     /* if we want to store add. of a array to a pointer we dont need to use ampercent ( & )*/
    int *ptr = arr; // -->> this is correct because array name itself is a pointer which point to the first element of the array.

    /* ( int *ptr = &arr ) -->> this is wrong  */

    int *Ptr = &arr[0]; // -->> this is also correct because we are storing the address of the first element of the array.
   // int *ptr1 = arr[0]; // -->> this is not correct because arr[0] is the value of the first element of the array, not the address.

    int x = 4;
    int *ptr2 = &x; // -->> this is correct because we are storing the address of the variable x.
   // int *ptr3 = x; // -->> this is not correct because x is the value of the variable, not the address.  here we need to use ampercent ( & ) to store the address of the variable x.
}