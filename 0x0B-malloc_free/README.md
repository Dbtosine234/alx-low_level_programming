<h2>0x0B-Malloc_free</h2>

This is a directory that contains programm write on  Dynamic and automatic memory allocations.

malloc
#include <stdlib.h>
void *malloc(size_t size);
The malloc() function allocates size bytes and returns a pointer to the allocated 
memory
The memory is not initialized

<h2>Automatic Allocations</h2>

Automatic allocation
When you declare variables or when you use strings within double quotes, the 
program is taking care of all the memory allocation. You do not have to think about

<h2>Dynamic Allocations</h2>

Dynamic allocation
So far we have used variables, arrays with fixed size. But what happens if you do 
not know the size of the array you have to declare and / or if this size depends on 
another variable?
Note: remember, you can declare arrays only with a constant.
type variable[constant]; /* works */
int n;
n = 10;
type variable[n]; /* does not work */


