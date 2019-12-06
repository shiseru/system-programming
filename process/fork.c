#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int i;
    pid_t result;

    i = 5;
    printf("%d\n", i);

    // return the process id for child process.
    // if too many process runs simultaneously, fork fails
    result = fork();

    if (result > 0) i = i + 2;
    else if (result == 0) i = i - 2;
    else perror("fork");

    // The output depends on OS.
    // When child process executes first, the output is 5 3 7
    // When  parent process executes first, the output is 5 7 3
    printf("%d\n", i);
    return 0;
}
