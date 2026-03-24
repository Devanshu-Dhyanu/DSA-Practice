# 📦 Array — 1D

> One-Dimensional Arrays | Data Structures & Algorithms

---

## 📌 What is a 1D Array?

A **1D array** is a linear collection of elements stored at **contiguous memory locations**, all of the same data type. It is the simplest and most fundamental data structure.

```
Index:   0     1     2     3     4
       +-----+-----+-----+-----+-----+
       |  10 |  20 |  30 |  40 |  50 |
       +-----+-----+-----+-----+-----+
Address: 100  104   108   112   116     (assuming int = 4 bytes)
```

---

## 🧠 Key Concepts

| Concept | Detail |
|---|---|
| **Indexing** | 0-based (first element at index `0`) |
| **Access** | O(1) — direct via index |
| **Memory** | Contiguous block |
| **Size** | Fixed at declaration (static) |
| **Type** | Homogeneous (all elements same type) |

---

## ⚙️ Basic Operations & Time Complexity

| Operation | Time Complexity | Notes |
|---|---|---|
| Access | O(1) | Direct index access |
| Search (Linear) | O(n) | Unsorted array |
| Search (Binary) | O(log n) | Sorted array only |
| Insertion (end) | O(1) | If space available |
| Insertion (mid) | O(n) | Shifting required |
| Deletion (end) | O(1) | — |
| Deletion (mid) | O(n) | Shifting required |
| Traversal | O(n) | Visit every element |

**Space Complexity:** O(n)

---

## 💻 Code Snippets (C++)

### Declaration & Initialization
```cpp
int arr[5];                        // Uninitialized
int arr[5] = {10, 20, 30, 40, 50}; // Initialized
int arr[] = {1, 2, 3, 4, 5};       // Size inferred
```

### Traversal
```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

### Linear Search
```cpp
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1; // Not found
}
```

### Binary Search (on sorted array)
```cpp
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
```

### Reverse an Array
```cpp
void reverse(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++; right--;
    }
}
```

---

## 🧩 Common Problems

| # | Problem | Technique |
|---|---|---|
| 1 | Find max / min element | Linear traversal |
| 2 | Reverse an array | Two pointers |
| 3 | Find second largest | Single pass |
| 4 | Remove duplicates | Sorting / Hashing |
| 5 | Rotate array by K | Reversal algorithm |
| 6 | Two Sum | HashMap / Two pointers |
| 7 | Kadane's Algorithm (max subarray) | Dynamic programming |
| 8 | Move zeros to end | Two pointers |
| 9 | Dutch National Flag | Three pointers |
| 10 | Merge two sorted arrays | Two pointers |

---


---

## 📎 Notes

- Always check for **array bounds** — going out of bounds causes undefined behavior in C++.
- Prefer `vector<int>` in competitive programming for dynamic sizing.
- For sorted arrays, always think **Binary Search** before Linear Search.
- Two Pointer technique solves many array problems in O(n).

---

*Part of DSA preparation — Arrays Module*