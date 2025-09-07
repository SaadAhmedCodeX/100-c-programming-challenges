// Create a program to check if the array is palindrome or not
#include <stdio.h>

void input_array(int arr[], int size);
int isPalindrome(int arr[], int size);
void display_arr(int arr[], int size);

int main(){
    int size, result;
    
    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    input_array(arr, size);

    printf("\nArray entered: ");
    display_arr(arr, size);

    result = isPalindrome(arr, size);

    if(result){
        printf("\nThe given array is Palindrome\n");
    }
    else{
        printf("\nThe given array is not Palindrome\n");
    }
    return 0;
}

void input_array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}

int isPalindrome(int arr[], int size){
    for (int i = 0; i < size / 2 ; i++) // Loop only till half since each iteration checks two elements
    {
      if(arr[i] != arr[(size - 1)- i]){
        return 0; // Not Palindrome
      }
    }
    return 1; // Palindrome
}

void display_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
