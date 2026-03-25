/* what is pointer -->> Pointer basically memory address store karta hai.
Simple words me: pointer kisi variable ka address hold karta hai, value nahi.  */

#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5};
    int *ptr = arr; // -->> storing add. of first element of the array in pointer variable ptr.
    cout<<ptr<<endl; // -->> this will print the address of the first element of the array.

    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" "; // -->> this will print the elements of the array using pointer variable ptr.
    }

    /*    So pointer has the power to  print all the elements of the array and can also update / modifies values    */

    return 0;

}