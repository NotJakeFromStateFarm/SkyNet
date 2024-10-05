#ifndef DATASET_H
#define DATASET_H

typedef struct {
    double **features;
    double **labels;
    int size;
} Dataset;

Dataset* load_dataset(const char *file_path);
void free_dataset(Dataset *dataset);

#endif
