//Write a program to create a student structure and input marks of 5 subjects, and then sort the structure using bubble sort to find out the sorted marks.

#include<stdio.h>

struct Student {
    char name[50];
    int marks[5];
};

void sort(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < 5 - 1; x++) {
            for (int y = 0; y < 5 - x - 1; y++) {
                if (students[i].marks[y] > students[i].marks[y + 1]) {
                    int temp = students[i].marks[y];
                    students[i].marks[y] = students[i].marks[y + 1];
                    students[i].marks[y + 1] = temp;
                }
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i=0;i<n;i++){
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter marks for 5 subjects for %s:\n", students[i].name);
        for (int j=0;j<5;j++){
            printf("Subject %d: ",j+1);
            scanf("%d", &students[i].marks[j]);
        }
        
        sort(students, n);
    }

    printf("\nSorted Marks:\n");
    for (int i=0;i<n;i++){
        printf("%s: ", students[i].name);
        for (int j=0;j<5;j++){
            printf("%d ", students[i].marks[j]);
        }
        printf("\n");
    }
    return 0;
}
