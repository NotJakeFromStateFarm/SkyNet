#include <stdio.h>
#include "neural_network.h"
#include "dataset.h"
#include "training.h"

int main() {
    NeuralNetwork nn;
    Dataset *data = load_dataset("data.txt");

    initialize_network(&nn);
    train(&nn, data, 1000, 0.01);
    
    // Free resources
    free_dataset(data);
    free_network(&nn);
    
    return 0;
}
