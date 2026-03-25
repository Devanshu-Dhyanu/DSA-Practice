// 1>
#include <iostream>
using namespace std;
void display(int arr[])
{
    int size = sizeof(arr) / sizeof(arr[0]); 
    // this is size of the array why this will not give the size of the array when we pass the array to the function.

    for (int i = 0; i < 5; i++)
    { 
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    display(arr);
    return 0;
}

// -------------------------------------------------------------------------------------------------------------------

// 2>

