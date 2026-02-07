# 📘 STL Containers Notes (Vector → Doubly Linked List)

These notes cover **STL Containers** starting from **vector** up to **list (doubly linked list)**. Written in an **exam + DSA friendly** way.

---

## 1️⃣ What is a Container in STL?

A **container** is a data structure provided by the **C++ Standard Template Library (STL)** that is used to **store and manage collections of data**.

### Why Containers?

* Dynamic size
* Built-in functions
* Efficient memory handling
* Easy traversal using iterators

> Containers are **class templates**.

---

## 2️⃣ Types of STL Containers (Overview)

1. **Sequence Containers**

   * vector
   * list
   * deque

2. **Associative Containers** (not covered here)

3. **Unordered Containers** (not covered here)

4. **Container Adapters** (stack, queue)

---

## 3️⃣ Vector (Dynamic Array)

### What is `vector`?

`vector` is a **sequence container** that works like a **dynamic array**.

* Stored in **contiguous memory**
* Supports **random access**
* Size can grow or shrink

### Header File

```cpp
#include <vector>
```

---

### Creating a Vector

```cpp
vector<int> v;
```

### Inserting Elements

```cpp
v.push_back(10);
v.push_back(20);
```

### Accessing Elements

```cpp
v[0];        // direct access
v.at(1);     // safe access
```

---

### Traversing a Vector

**Using loop**

```cpp
for(int i = 0; i < v.size(); i++) {
    cout << v[i];
}
```

**Using range-based loop**

```cpp
for(int x : v) {
    cout << x;
}
```

---

### Important Vector Functions

| Function    | Description         |
| ----------- | ------------------- |
| push_back() | Insert at end       |
| pop_back()  | Remove last element |
| size()      | Number of elements  |
| empty()     | Check if empty      |
| clear()     | Remove all elements |

---

### Time Complexity (Vector)

| Operation               | Complexity       |
| ----------------------- | ---------------- |
| Access                  | O(1)             |
| Insert at end           | O(1) (amortized) |
| Insert/Delete in middle | O(n)             |

---

## 4️⃣ Iterators (with Vector)

### What is an Iterator?

An **iterator** is an object that works like a **pointer** to access container elements.

### Syntax

```cpp
vector<int>::iterator it;
it = v.begin();
```

* `begin()` → points to first element
* `end()` → points after last element

### Example

```cpp
for(it = v.begin(); it != v.end(); it++) {
    cout << *it;
}
```

---

## 5️⃣ 2D Vector (Vector of Vectors)

### Declaration

```cpp
vector<vector<int>> arr;
```

### Creating Fixed Size 2D Vector

```cpp
vector<vector<int>> arr(3, vector<int>(4, 0));
```

### Accessing Elements

```cpp
arr[i][j];
```

### Rows and Columns

```cpp
arr.size();        // rows
arr[i].size();     // columns in row i
```

---

### Jagged Array using Vector

```cpp
vector<vector<int>> brr(3);
brr[0] = vector<int>(2);
brr[1] = vector<int>(4);
brr[2] = vector<int>(1);
```

> Rows can have **different number of columns**.

---

## 6️⃣ List (Doubly Linked List)

### What is `list`?

`list` is a **sequence container** implemented as a **doubly linked list**.

Each node contains:

* Data
* Pointer to previous node
* Pointer to next node

### Header File

```cpp
#include <list>
```

---

### Creating a List

```cpp
list<int> mylist;
```

### Inserting Elements

```cpp
mylist.push_back(10);
mylist.push_front(20);
```

### Removing Elements

```cpp
mylist.pop_back();
mylist.pop_front();
```

---

### Traversing a List

```cpp
for(int x : mylist) {
    cout << x;
}
```

---

### Important List Functions

| Function     | Description     |
| ------------ | --------------- |
| push_back()  | Insert at end   |
| push_front() | Insert at front |
| pop_back()   | Remove last     |
| pop_front()  | Remove first    |
| front()      | First element   |
| back()       | Last element    |
| size()       | Number of nodes |

---

### Time Complexity (List)

| Operation     | Complexity |
| ------------- | ---------- |
| Insert/Delete | O(1)       |
| Access/Search | O(n)       |

---

## 7️⃣ Vector vs List (VERY IMPORTANT)

| Feature                | Vector     | List           |
| ---------------------- | ---------- | -------------- |
| Memory                 | Contiguous | Non-contiguous |
| Random access          | Yes        | No             |
| Insert/Delete (middle) | Slow       | Fast           |
| push_front             | No         | Yes            |

---

## 8️⃣ Exam-Oriented Short Notes

* `vector` → dynamic array
* `list` → doubly linked list
* `vector<vector<int>>` → 2D array
* `begin()` returns iterator to first element
* `size()` gives number of elements/rows

---

## ✅ Final Summary

✔ STL containers store data efficiently
✔ `vector` is best for fast access
✔ `list` is best for frequent insert/delete
✔ Iterators help traverse containers
✔ 2D vectors are used in matrices, graphs, DP

---

📌 **Tip for Exams:**

> Always mention **time complexity + use case** for each container.
