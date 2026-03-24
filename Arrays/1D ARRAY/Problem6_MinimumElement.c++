// Find the minimum element in an array

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


    int min = arr[0];// Initialize min to the first element of the array

    for (int i = 1; i < size; i++) // Start from the second element and compare with min
    {
        if (arr[i] < min) // Compare each element with the current minimum
        {
            min = arr[i]; // Update min if a smaller element is found
        }
    }
    cout << "The minimum element in the array is: " << min;
    return 0;
}