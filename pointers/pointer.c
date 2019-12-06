#include <stdio.h>

int main(){
    int i = 5;
    printf("%d\n", i);
    printf("%p\n", &i);

    int *pt = &i;
    printf("%p\n", pt);
    printf("%d\n", *pt);
}