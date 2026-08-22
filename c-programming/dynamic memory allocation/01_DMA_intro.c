//            Dynamic Memory Allocation in C
/*
Dynamic memory allocation means creating memory while the program is running, instead of fixing the memory size in advance.

In C, this is done using functions from the standard library:

malloc()
calloc()
realloc()
free()
Why it is useful
Sometimes you do not know how much memory you need before execution. For example:

user input size
reading data from a file
storing a list of unknown length
With static memory, you must decide the size at compile time. With dynamic memory, you can decide at runtime.
*/
// Example

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);   // release allocated memory
    return 0;
}

/*
Key idea
malloc() allocates a block of memory
free() releases it when no longer needed
If you forget to free memory, it causes memory leak
Important note
Memory allocated dynamically is taken from the heap, not the stack.

*/

//   stack overflow :- 
/*
1. compiler allocates some space for the stack part of the memory.
2. when this is space gets exhausted for same bad resion, the solution is callled as stack overflow.
3. typical example includes recursion with wrong / no base condition.

*/

//   use of Heap

/*
1. there are a lot of limitations of stack (static memory allocation)
2. some of the examples includes variable sized array, freeing memory no longer required etc.
3. heap can be used flexibly by the programmer as per his needs.
*/

//   use of heap

/*
1. we can create a pointer in our main function and point to a memory block in the heap.
2. the address is stored by the local vaariable in the main function.
3. the memory consumed will not get freed autometically in case we overwrite the pointer.
*/