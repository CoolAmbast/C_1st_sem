#include <stdio.h>

// Function declarations
void merge_sort(int array[], int start_index, int last_index);
void merge(int array[], int a, int b, int c);

int main() {
    int n, i;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);

    int array[n];
    printf("Enter each number (press Enter after each):\n");
    for (i = 0; i < n; i++) {  
        scanf("%d", &array[i]); 
    }

    // Print unsorted array
    printf("Unsorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", array[i]);  
    }

    // Function call
    merge_sort(array, 0, n - 1);

    printf("\nSorted array after merge sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }

    return 0;
}

// Merge sort function
void merge_sort(int array[], int start_index, int last_index) {
    if (start_index < last_index) {
        int mid_index = start_index + (last_index - start_index) / 2;
        merge_sort(array, start_index, mid_index);
        merge_sort(array, mid_index + 1, last_index);
        merge(array, start_index, mid_index, last_index);
    }
}

// Merge function
void merge(int array[], int a, int b, int c) {
    int i, j, k;
    int size1 = b - a + 1;
    int size2 = c - b;

    int left_array[size1], right_array[size2];

    for (int m = 0; m < size1; m++) {
        left_array[m] = array[a + m];
    }
    for (int m = 0; m < size2; m++) {
        right_array[m] = array[b + 1 + m];
    }

    i = 0;
    j = 0;
    k = a;

    while (i < size1 && j < size2) {
        if (left_array[i] < right_array[j]) {
            array[k] = left_array[i];
            i++;
        } else {
            array[k] = right_array[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        array[k] = left_array[i];
        i++;
        k++;
    }

    while (j < size2) {
        array[k] = right_array[j];
        j++;
        k++;
    }
}