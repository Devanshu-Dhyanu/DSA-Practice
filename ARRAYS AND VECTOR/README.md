📦 Array & Vector — C++
Yeh folder Arrays aur Vectors ke concepts aur problems cover karta hai.

📁 Folder Structure
Array-Vector/
│
├── concepts/
│   ├── 01_array_basics.cpp
│   ├── 02_vector_basics.cpp
│   ├── 03_vector_input_methods.cpp
│   └── ...
│
├── problems/
│   ├── 01_second_largest.cpp
│   ├── 02_last_occurrence.cpp
│   ├── 03_reverse_array.cpp
│   └── ...
│
└── README.md

📚 Concepts
FileTopic01_array_basics.cppArray declaration, input, output02_vector_basics.cppVector syntax, push_back, pop_back03_vector_input_methods.cppEOF, sentinel, getline se input lena
Topics covered:

Array declaration & initialization
Static vs dynamic size
Vector — push_back, pop_back, insert, erase
Iterating — index loop, range-based, iterator
2D vectors
Useful functions — sort, reverse, max/min element



⚡ Quick Reference
cpp// Array
int arr[5] = {1, 2, 3, 4, 5};

// Vector
vector<int> v = {1, 2, 3};
v.push_back(10);
v.pop_back();
sort(v.begin(), v.end());

// Input jab size na pata ho
while (cin >> x) v.push_back(x);

🔧 Compile & Run
bashg++ filename.cpp -o output
./output