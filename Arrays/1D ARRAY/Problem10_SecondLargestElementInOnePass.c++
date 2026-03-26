#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0], smax = arr[0];  // dono ko pehle element se init kia

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            smax = max;       // purana max ab second largest hai
            max = arr[i];     // naya max update hua
        }
        else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];    // agar ( arr[i] > max ) -> wrong hai to  sirf smax update karege with this -> (arr[i] > smax && arr[i] != max) condition
        }
    }

    cout << "Largest: " << max << endl;
    cout << "Second Largest: " << smax << endl;

    return 0;
}