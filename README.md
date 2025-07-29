# ⭐ C++ Pattern Programs – Inverted Star & Alphabetic Pattern

Welcome to the Pattern Programs Repository! This document provides a clear overview and implementation of two classic C++ pattern programs:

- 🔻 Inverted Star Triangle
- 🔠 Alphabetic Triangle

---

## 🎯 Aim

To understand and implement basic **nested loops in C++** through visual pattern programming, focusing on:

- **Control flow mastery** with loops
- Use of **character manipulation** (`char`)
- Improving logical thinking in pattern creation

---

## 📌 1. Inverted Star Triangle

#
### 🧠 Explanation:
- The pattern starts with 4 stars and reduces by 1 on each line.
- We use a decreasing outer loop to control the number of lines.
- The inner loop prints stars from `1` to the current row number.

### 💻 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

