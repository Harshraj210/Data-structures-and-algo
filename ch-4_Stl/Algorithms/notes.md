# STL Algorithms Notes

## 1. Introduction to STL Algorithms

STL Algorithms are pre-written functions provided by C++ to perform
common tasks like searching, sorting, counting, etc.

They work using **iterators** and are mainly found in:

-   `<algorithm>`
-   `<numeric>`
-   `<functional>`

Algorithms do not store data --- they work on containers like `vector`,
`set`, etc.

------------------------------------------------------------------------

## 2. Sorting Algorithms

### sort()

``` cpp
sort(arr.begin(), arr.end());
```

-   Sorts elements in ascending order
-   Requires Random Access Iterators (vector, array)

Custom descending order:

``` cpp
sort(arr.begin(), arr.end(), greater<int>());
```

------------------------------------------------------------------------

## 3. Searching Algorithms

### find()

``` cpp
auto it = find(arr.begin(), arr.end(), target);
```

-   Returns iterator to element
-   Works on unsorted data

### binary_search()

``` cpp
binary_search(arr.begin(), arr.end(), target);
```

-   Returns true/false
-   Requires sorted data

### lower_bound()

Returns first position \>= target

### upper_bound()

Returns first position \> target

------------------------------------------------------------------------

## 4. Heap Algorithms

Heap is a complete binary tree stored in array form.

### make_heap()

``` cpp
make_heap(v.begin(), v.end());
```

-   Creates max heap (largest element at front)

### push_heap()

``` cpp
v.push_back(10);
push_heap(v.begin(), v.end());
```

### pop_heap()

``` cpp
pop_heap(v.begin(), v.end());
v.pop_back();
```

Min Heap:

``` cpp
make_heap(v.begin(), v.end(), greater<int>());
```

------------------------------------------------------------------------

## 5. Numeric Algorithms (`<numeric>`)

### accumulate()

``` cpp
int sum = accumulate(v.begin(), v.end(), 0);
```

-   Computes total sum

### partial_sum()

``` cpp
partial_sum(v.begin(), v.end(), result.begin());
```

-   Computes prefix sums

Example: 1 2 3 → 1 3 6

### inner_product()

``` cpp
int ans = inner_product(a.begin(), a.end(), b.begin(), 0);
```

-   Computes dot product of two vectors

------------------------------------------------------------------------

## 6. for_each()

``` cpp
for_each(v.begin(), v.end(), function_name);
```

Applies function to every element.

------------------------------------------------------------------------

## 7. Range-based for loop

``` cpp
for(int x : v) {
    cout << x;
}
```

-   Cleaner way to iterate
-   Internally uses iterators

------------------------------------------------------------------------

## 8. Set Algorithms (Basic Understanding)

`set` automatically stores elements in sorted order.

Common operations:

``` cpp
set<int> s;
s.insert(10);
s.find(10);
s.erase(10);
```

-   No duplicates allowed
-   Implemented using balanced BST
-   Search/Insert/Delete: O(log n)

------------------------------------------------------------------------

## 9. Important Concepts

-   Algorithms work using iterators
-   Some require sorted data (binary_search)
-   Heap is not fully sorted, only partially ordered
-   Use `auto` to simplify iterator declaration

------------------------------------------------------------------------

## 10. Interview Key Points

-   sort requires random access iterator
-   binary_search requires sorted data
-   find works on unsorted data
-   heap is used for priority-based problems
-   accumulate for sum
-   partial_sum for prefix sums
-   inner_product for dot product

------------------------------------------------------------------------

End of STL Algorithms Notes
