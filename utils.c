#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void print_matrix(double **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void randomize_weights(double **weights, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            weights[i][j] = ((double) rand() / RAND_MAX) * 2 - 1; // Random between -1 and 1
        }
    }
}
