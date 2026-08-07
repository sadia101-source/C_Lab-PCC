#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, search_value;
    int found_index = -1;

    printf("Enter the size of the array (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Error: Size must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error: Invalid input.\n");
            return 1;
        }
    }

    // 1. Get the value to search for
    printf("\nEnter the value you want to search for: ");
    if (scanf("%d", &search_value) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    // 2. Linear Search algorithm
    for (i = 0; i < n; i++) {
        if (arr[i] == search_value) {
            found_index = i; //save the array index where it was found
            break;           //stop searching since we found a match
        }
    }

    if (found_index != -1) {
        //displaying both the technical 0-based index and human 1-based position
        printf("\nSuccess! Value %d found.\n", search_value);
        printf("Array Index : %d\n", found_index);
        printf("Position    : %d\n", found_index + 1);
    } else {
        printf("\nValue %d was not found in the array.\n", search_value);
    }

    return 0;
}
