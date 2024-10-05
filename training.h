#ifndef TRAINING_H
#define TRAINING_H

#include "neural_network.h"
#include "dataset.h"

void train(NeuralNetwork *nn, Dataset *data, int epochs, double learning_rate);

#endif
