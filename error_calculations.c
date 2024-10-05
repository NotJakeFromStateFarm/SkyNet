#include "error_calculation.h"

double mean_squared_error(double *predictions, double *targets, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        double error = predictions[i] - targets[i];
        sum += error * error;
    }
    return sum / size;
}
