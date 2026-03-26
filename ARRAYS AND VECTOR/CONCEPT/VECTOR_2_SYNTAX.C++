#include <iostream>
#include <vector> // for using vector we need to add this library
using namespace std;
int main()
{

    // declearing vector
    vector<int> v;                    // empty vector
    vector<int> v1(5);                // size 5, sab 0 se init
    vector<int> v3(5, 5);             // size 5, sab 5 se init  {5,5,5,5,5}
    vector<int> v4 = {1, 2, 3, 4, 5}; // direct initialize

    /*

    arr[0] = 2 --> it will give segmentation fault because size of our vector is 0, there is no 0 index;

    */

    v.push_back(10); // end me add
    v.pop_back();    // end se remove

    v.insert(v.begin() + 2, 99); // index 2 pe insert
    v.erase(v.begin() + 2);      // index 2 pe delete
    v.clear();                   // sab delete

    v[0];      // index access (no bounds check)
    v.at(0);   // index access (bounds check karta hai)
    v.front(); // pehla element
    v.back();  // aakhri element

    v.size();     // kitne elements hain
    v.empty();    // true if empty
    v.resize(10); // size badao/ghataao
}