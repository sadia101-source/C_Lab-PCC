#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, search_value;
    int found_index = -1; // -1 means the value has not been found yet

    // 1. Get and validate the array size N
    printf("Enter the size of the array (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Error: Size must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // 2. Interactive input for array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error: Invalid input.\n");
            return 1;
        }
    }

    // 3. Get the value to search for
    printf("\nEnter the value you want to search for: ");
    if (scanf("%d", &search_value) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    // 4. Linear Search algorithm
    for (i = 0; i < n; i++) {
        if (arr[i] == search_value) {
            found_index = i; // Save the array index where it was found
            break;           // Stop searching since we found a match
        }
    }

    // 5. Output the results
    if (found_index != -1) {
        // Displaying both the technical 0-based index and human 1-based position
        printf("\nSuccess! Value %d found.\n", search_value);
        printf("Array Index : %d\n", found_index);
        printf("Position    : %d\n", found_index + 1);
    } else {
        printf("\nValue %d was not found in the array.\n", search_value);
    }

    return 0;
}
