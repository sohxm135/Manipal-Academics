#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student {
    char name[100];
    int rollno;
    char grade;
};

void read(struct student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &s[i].rollno);
        printf("Enter grade of student %d: ", i + 1);
        scanf(" %c", &s[i].grade);
    }
}

void display(struct student s[], int n) {
    printf("\nStudent Information:\n");
    printf("Name\tRoll No\tGrade\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%c\n", s[i].name, s[i].rollno, s[i].grade);
    }
}

void sort(struct student s[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].rollno > s[j].rollno) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    struct student s[MAX_STUDENTS];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    read(s, n);
    display(s, n);
    sort(s, n);
    printf("\nSorted Student Information:\n");
    display(s, n);

    return 0;
}