// Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.
#include <stdio.h>

typedef struct {
    char id[20];
    char name[50];
    char year[50];
    char grade;
} Student;

void increase_grade(Student *stu);
void decrease_grade(Student *stu);
void print_student(Student stu, int number);

int main() {
    Student stu1 = {"CS001", "Alice", "First", 'B'};
    Student stu2 = {"CS002", "Bob", "Second", 'A'};
    Student stu3 = {"CS003", "John", "Third", 'F'};

    printf("Before grade changes:\n");
    print_student(stu1, 1);
    print_student(stu2, 2);
    print_student(stu3, 3);

    increase_grade(&stu1);  // B -> A
    decrease_grade(&stu2);  // A -> B
    increase_grade(&stu3);  // F -> E

    printf("\nAfter grade changes:\n");
    print_student(stu1, 1);
    print_student(stu2, 2);
    print_student(stu3, 3);

    return 0;
}

void increase_grade(Student *stu) {
    if (stu->grade > 'A')  // Prevent going above 'A' 
        stu->grade--;
}

void decrease_grade(Student *stu) {
    if (stu->grade < 'F')  // Prevent going below 'F'
        stu->grade++;
}

void print_student(Student stu, int number) {
    printf("Student %d:\n", number);
    printf("ID: %s\n", stu.id);
    printf("Name: %s\n", stu.name);
    printf("Year: %s\n", stu.year);
    printf("Grade: %c\n", stu.grade);
    printf("------------------------\n");
}
