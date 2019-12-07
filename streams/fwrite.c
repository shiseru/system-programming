#include <stdio.h>

int main(){
    FILE *data_file;
    int numbers[] = {100, 200, 300};
    int error;

    data_file = fopen("my_data", "rb");

    error = fread(numbers, sizeof(int), 3, data_file);

    for(int i = 0; i < 3; i++){
        printf("%d\n", numbers[i]);
    }

    if (error != 3){
        fprintf(stderr, "something wrong");
    }

    fclose(data_file);

    return 0;
}