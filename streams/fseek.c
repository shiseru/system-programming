#include <stdio.h>

int main() {
    struct student {
        char first_name[20];
        char last_name[20]l
        int year;
        float gpa;
    };

    FILE *student_file;
    int error, student_num;
    struct student s;

    student_file = fopen("five_students", "rb");
    if (student_file == NULL) {
        fprintf(stderr, "Error opening file\n");
        return 1;
    }

    printf("Type -1 to exit.\n");
    printf("Enter the index of the next student to view: ");

    scanf("%d", &student_num);
    while (student_num >= 0){
        fseek(student_file, student_num * sizeof(struct student), SET_CUR);
    }

    return 0;
}







