// Array passing to function in C++ and check can we access the elements of the array in the function or not.
#include <iostream>
using namespace std;
void display(int arr[])
{
    for (int i = 0; i < 5; i++)
    { // so here we can access the elements of the array in the function
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // passing the elements  of array in another function
    display(arr); // function call and passing the array to the function
    return 0;
}

