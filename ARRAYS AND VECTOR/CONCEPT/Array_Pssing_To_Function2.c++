// Array passing to function in C++ and check can we Update the elements of the array in the function or not.
#include <iostream>
using namespace std;
void display(int arr[])
{
    for (int i = 0; i < 5; i++)
    { 
        cout << arr[i] << " ";
    }
}

void change(int arr[]){
    arr[0] = 92;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // passing the elements  of array in another function
    display(arr); 
    change(arr);
    display(arr);
    return 0;
}
 
// we can update the elements of array in function

// When we pass an array as an argument to a function - address of array is passed
//(address of the first element of array)


