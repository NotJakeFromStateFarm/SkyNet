#include <stdio.h>
#include "logger.h"

void log_progress(int epoch, double error) {
    printf("Epoch %d: Error = %f\n", epoch, error);
}
