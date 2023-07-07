//smart pointers.

1. if anything is created inside heap memory, POinters are used.
2. through pointers, we use copy of resource to make any change. the actual resource
is not changed. 
3. to change original copy of resource, smart pointers are used. 
4. they are used to delete the memory of unused resources
5. smart pointer is a class = pointer, operators(*, ->), destructor.
 

Issues with normal pointers..
1. memory leak - many times infinite loops or anything else could result into continous memory allocation,
but no delocation. 
therefore, this leads to excessive memory consumption.

2. Dangling pointers- 
a pointer pointing to 0 is Null Pointer
a pointer pointing to deleted location is dangling pointer.

3. buffer overflow



 