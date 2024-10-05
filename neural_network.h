#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H

typedef struct {
    int input_size;
    int hidden_size;
    int output_size;
    double **weights_input_hidden;
    double **weights_hidden_output;
} NeuralNetwork;

void initialize_network(NeuralNetwork *nn);
void feedforward(NeuralNetwork *nn, double *input, double *output);
void backpropagate(NeuralNetwork *nn, double *input, double *target, double learning_rate);
void free_network(NeuralNetwork *nn);

#endif
