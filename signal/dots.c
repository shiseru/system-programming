#include <stdio.h>

// the program will continuously display dot.
// 'ps aux | grep dots' to find the process id and 'kill -QUIT PROCESS_ID' to stop the program
int main(){
    int i = 0;
    for(;;){
        if (( i++ % 500) == 0) {
            fprintf(stderr, ".");
        }
    }
    return 0;
}
