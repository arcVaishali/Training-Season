### Features of C++ POinters

1. Pointers save memory space.

2. Execution time with pointers is faster because data are manipulated with the address, that is, direct access to memory location. 

> It is faster in execution in the sense that they are faster when accessing the memory they are pointing to. But there can be some overhead while accessing the value stored at that address.

#### More specifically, following are the reasons that can make pointers slower than normal variables-

a. Indirection: When you use a pointer to access a value, t**he CPU needs to follow the pointer to the actual memory location where the value is stored**. This extra step of indirection can introduce a small amount of overhead compared to directly accessing a variable.

b. Memory Management: With pointers, you often **need to manually manage memory, especially when dynamically allocating and de-allocating memory using new and delete in C++. This management adds complexity and can lead to errors if not done correctly**.

c. Caching: Modern CPUs use caching to speed up memory access. Pointers can sometimes result in less efficient use of caches, especially if the memory locations accessed through pointers are not contiguous. 
>Reason- Cache works on the principle of Spatial Locality, lets suppose if you are trying to access non contiguous memory locations using pointers, it can cause more cache misses int his case.


3. Memory is accessed efficiently with the pointers. The pointer assigns and releases the memory as well. Hence it can be said the Memory of pointers is dynamically allocated.

4. Pointers are used with data structures. They are useful for representing two-dimensional and multi-dimensional arrays.

5. An array, of any type, can be accessed with the help of pointers, without considering its subscript range.

6. Pointers are used for file handling.

7. Pointers are used to allocate memory dynamically.

8. In C++, a pointer declared to a base class could access the object of a derived class. However, a pointer to a derived class cannot access the object of a base class.


### Drawbacks of Pointers
1. If pointers are pointed to some incorrect location then it may end up reading a wrong value.
2. Erroneous input always leads to an erroneous output
Segmentation fault can occur due to uninitialized pointer.
Pointers are slower than normal variable
It requires one additional dereferences step 
If we forgot to deallocate a memory then it will lead to a memory leak. 