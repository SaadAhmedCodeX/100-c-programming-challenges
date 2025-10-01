// Initialize an array of Book structures with different data for each book using designated initializers.
#include <stdio.h>

struct book
{
    char title[50];
    char author[50];
    float price;
};

int main(){
    struct book books[3] =
    {
        {.title = "Atomic Habits", .author = "James Clear", .price = 599.99},
        {.title = "Mindset: The New Psychology of Success", .author = "Carol S. Dweck", .price = 699.99},
        {.title = "Grit: The Power of Passion and Perseverance", .author = "Angela Duckworth", .price = 649.99}
    };

    printf("\nBooks Collection:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i + 1);
        printf(" Title : %s\n", books[i].title);
        printf(" Author: %s\n", books[i].author);
        printf(" Price : %.2f\n", books[i].price);
    }
    return 0;
}