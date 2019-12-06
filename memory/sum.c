#include <stdio.h>

// a, b are stored in Stack.
int sum(int a, int b){
    // p is stored in heap. 2000 bytes (4 * 500) memory is allocated in heap.
    int *p = malloc(sizeof(int) * 500);
    int i;
    i = a + b;
    return i;
}

// stored in Global Data Segment of memory. * constant, such as "Hi" also stored in Global Data.
int z;

int main(){
    z = sum(1, 3);
    printf("%d", z);
}