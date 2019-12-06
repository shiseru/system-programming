#include <stdio.h>

int main(){
    int A[3] = {13, 55, 20};
    // accessing memory location at A[0] + size_of(int) * 4
    int out_of_bounds = A[4];

    // out put is -601634924
    printf("%d", out_of_bounds);
}