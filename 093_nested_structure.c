// Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.
#include <stdio.h>
#include <string.h>

typedef struct {
    char title[50];
    char author[50];
    float price;
} Book;

typedef struct {
    char id[20];
    char name[50];
    char year[50];
    char grade;
    Book books_borrowed[3];
} Student;

void displayStudent(Student s);
    
int main() {
    Student s1;

    strcpy(s1.id, "CS101");
    strcpy(s1.name, "Alice Johnson");
    strcpy(s1.year, "2nd Year");
    s1.grade = 'A';

    strcpy(s1.books_borrowed[0].title, "C Programming Language");
    strcpy(s1.books_borrowed[0].author, "Kernighan & Ritchie");
    s1.books_borrowed[0].price = 455.50;

    strcpy(s1.books_borrowed[1].title, "Algorithms");
    strcpy(s1.books_borrowed[1].author, "CLRS");
    s1.books_borrowed[1].price = 600.00;

    strcpy(s1.books_borrowed[2].title, "Clean Code");
    strcpy(s1.books_borrowed[2].author, "Robert C. Martin");
    s1.books_borrowed[2].price = 557.75;

    displayStudent(s1);

    return 0;
}

void displayStudent(Student s) {
    printf("Student ID   : %s\n", s.id);
    printf("Name         : %s\n", s.name);
    printf("Year         : %s\n", s.year);
    printf("Grade        : %c\n", s.grade);

    printf("\nBooks Borrowed:\n");
    for (int i = 0; i < 3; i++) {
        printf("  Book %d:\n", i + 1);
        printf("    Title : %s\n", s.books_borrowed[i].title);
        printf("    Author: %s\n", s.books_borrowed[i].author);
        printf("    Price : %.2f\n", s.books_borrowed[i].price);
    }
}