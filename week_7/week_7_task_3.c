#include <stdio.h>

// Fill the fourth column with the calculated metric
void fill_metric(float* arr, int rowNo, int colNo) {
    // Assumption based on provided array structure: accuracy at index 2, delay at index 1
    for (int i = 0; i < rowNo; ++i) {
        float accuracy = *((arr + i * colNo) + 2);
        float delay = *((arr + i * colNo) + 1);
        if (delay != 0) { // Check to prevent division by zero
            *((arr + i * colNo) + 3) = (accuracy / delay) * 1000.0f;
        }
    }
}

// Swap two float values
void swap(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Sort the given array by the provided idx
void sort_by_col_idx(float* arr, int rowNo, int colNo, int colIdx) {
    for (int i = 0; i < rowNo - 1; ++i) {
        for (int j = 0; j < rowNo - i - 1; ++j) {
            if (*((arr + j * colNo) + colIdx) < *((arr + (j + 1) * colNo) + colIdx)) {
                // Swap rows
                for (int k = 0; k < colNo; ++k) {
                    swap((arr + j * colNo + k), (arr + (j + 1) * colNo + k));
                }
            }
        }
    }
}

// Remove the row at a given index by shifting the subsequent rows up
void remove_row_idx(float* arr, int* ptr_rowNo, int colNo, int rowIdx) {
    for (int i = rowIdx; i < *ptr_rowNo - 1; ++i) {
        for (int j = 0; j < colNo; ++j) {
            *((arr + i * colNo) + j) = *((arr + (i + 1) * colNo) + j);
        }
    }
    (*ptr_rowNo)--;  // Decrement the total number of rows
}

// Remove all rows which exceed a threshold value in a selected column
void remove_rows_exceding_threshold(float* arr, int* ptr_rowNo, int colNo,
                                    float threshold_value, int colIdx) {
    for (int i = 0; i < *ptr_rowNo; ) {
        if (*((arr + i * colNo) + colIdx) >= threshold_value) {
            remove_row_idx(arr, ptr_rowNo, colNo, i);
            // Do not increment `i`, as the next row is now at current index
        } else {
            ++i;
        }
    }
}

int main() {
    /* Table: ID, Delay, Acc., Metric */
    float arr[10][4] = {
        {0, 14.553, 0.023, 0},
        {1, 16.827, 0.043, 0},
        {2, 11.102, 0.320, 0},
        {3, 31.969, 0.003, 0},
        {4, 16.777, 0.057, 0},
        {5, 22.500, 0.708, 0},
        {6, 08.216, 0.132, 0},
        {7, 11.477, 0.056, 0},
        {8, 12.005, 0.088, 0},
        {9, 18.348, 0.098, 0}
    };
    int rowNo = 10; // Number of rows
    int colNo = 4;  // Number of columns
    
    // a. Fill in the metric values
    fill_metric((float*)arr, rowNo, colNo);
    
    // b. Remove entries with delays of 18s or more
    remove_rows_exceding_threshold((float*)arr, &rowNo, colNo, 18.0f, 1);
    
    // c. Sort the array by the metric column in descending order
    sort_by_col_idx((float*)arr, rowNo, colNo, 3);
    
    // Output the table
    puts("ID\t\tDelay\t\tAccuracy\tMetric");
    for(int row = 0; row < rowNo; ++row) {
        printf("%d\t\t%.3f\t\t%.3f\t\t%.3f\n",
            (int)arr[row][0], arr[row][1], arr[row][2], arr[row][3]);
    }
    
    getchar();
    return 0;
}