#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct array1 {
    int* A;
    int size;
    int length;
};

void display(struct array1 arr) {
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]); // Add a space between elements for better readability
    printf("\n");
}

int main() {
    struct array1 arr;
    int i, n;

    printf("Enter the size of an array: ");
    scanf("%d", &arr.size);

    arr.A = new int[arr.size];
    arr.length = 0;

    printf("Enter the number of total elements: ");
    scanf("%d", &n);

    if (n > arr.size) {
        printf("Number of elements exceeds the array size.\n");
        return 1; // Return an error code
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);
    
    arr.length = n;

    display(arr);

    // Free the dynamically allocated memory
    delete[] arr.A;

    return 0;
}
