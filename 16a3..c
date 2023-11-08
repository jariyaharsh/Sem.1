#include <stdio.h>
void main() {
    int num_students = 20,num_fields = 2,i;
    int student_data[num_students][num_fields];
    for(i = 0; i < num_students; i++){
        printf("Enter roll number for student %d: ", i+1);
        scanf("%d", &student_data[i][0]);
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", &student_data[i][1]);
    }
    printf("Student Data:\n");
    printf("Roll No\tMarks\n");
    for (i = 0; i < num_students; i++) {
        printf("%d\t%d\n", student_data[i][0], student_data[i][1]);
    }
}
