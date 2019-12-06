#include <stdio.h>


// modify the value stored in specific memory location.
void apply_late_penalty(char *grade){
    (*grade)++;
}


int main(){
    char grade = 'A';
    apply_late_penalty(&grade);

    // output 'B'
    printf("%c", grade);
    return 0;
}
