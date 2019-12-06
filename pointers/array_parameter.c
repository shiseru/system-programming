#include <stdio.h>

int sum(int *A, int size){
    int total = 0;
    for(int i=0; i < size; i++){
        total += A[i];
    }
    return total;
}


int main(){
    // the size of score is 16, that is sizeof(int) * 4
    int score[] = {4, 5, -1, 12};
    printf("%d", sum(score, 4));

}
