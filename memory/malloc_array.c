#include <stdio.h>
#include <stdlib.h>

int *squares(int max_val){
    int *result = malloc(sizeof(int) * max_val);

    for (int i = 0; i < max_val; i++){
        result[i] = i * i;
    }

    return result;
}

int main(){
    int *square_to_10 = squares(10);

    for (int i = 0; i < 10; i++){
        // accessing the memory allocated to heap
        printf("%d\t", square_to_10[i]);
    }
    return 0;
}
