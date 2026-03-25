#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};

    int *ptr = arr; // -->> storing add. of first element of the array in pointer variable ptr.

    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
        ptr++; // -->> this will move the pointer to the next element of the array.
    }
 
    /*
      ptr++ -->> means address of (ptr + 4) beacause size of element is 4 bytes (int) and pointer will move to the next element of the array.
    
    */

    cout<<ptr<<endl; // -->> this will print the address of the element of the array.

    cout<<*ptr<<endl; // -->> this means ki stored address par jo value hai usko print kro.
    
}