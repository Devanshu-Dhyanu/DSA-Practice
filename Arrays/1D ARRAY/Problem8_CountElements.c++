// Count the number of elements in given array greater than a given number x.
#include <iostream>
using namespace std;
int main()
{
    int size; // Variable to store the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Declare an array of the specified size
    cout << "Enter the elements of the array: ";

    //input elements in the array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // Read each element of the array from user input
    }

    int x; // Variable to store the number to compare with
    cout << "Enter a number x: ";
    cin >> x;

    int count = 0; // Variable to count the number of elements greater than x

    for (int i = 0; i < size; i++) // Iterate through each element in the array
    {
        if (arr[i] > x) // Check if the current element is greater than x
        {
            count++; // Increment count if the condition is true
        }
    }

    cout << "Number of elements greater than " << x << " is: " << count;
    return 0;
}