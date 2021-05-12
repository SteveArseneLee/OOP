# Vectors
- std::vector
- std::array
### Nonempty sequence
- Every nonempty sequence has a unique first element.
- Every nonempty sequence has a unique last element.

```C++
#include <vector>
using std::vector;

std::vector<int> vec_a;
std::vector<int> vec_b(10); // All elements are zero by default.
std::vector<int> vec_c(10,8); // All elements are 8.
std::vector<int> vec_d{10,20,30,40,50};
```

### Vector Methods
- push back
    - inserts a new element onto the back of a vector
- pop back
    - removes the last element from a vector
- operator[]
    - provides access to the value stored at a given index within the vector
- at
    - provides bounds-checking access to the value stored at given position within the vector
- size
    - returns the number of values currently stored in the vector
- emptyß
    - returns true if the vector contains no elements; returns false if the vector contains one or more elements
- clear
    - makes the vector empty.

```C++
```