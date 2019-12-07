#include <stdio.h>

int main(){
    FILE *input_file, *output_file;

    input_file = fopen("number.txt", "r");
    if (input_file == NULL){
        fprintf(stderr, "Error");
        return 1;
    }

    output_file = fopen("output.txt", "w");
    if (output_file == NULL){
        fprintf(stderr, "Error");
        return 1;
    }

    char line[79];
    while (fgets(line, 80, input_file) != NULL){
        fprintf(output_file, "%s\n", line);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}