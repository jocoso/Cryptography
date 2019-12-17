#include <stdio.h>
#include <stdlib.h>

struct Node {
    void *data;
    struct Node *next;
};

void push(struct Node ** head_ref, void* new_data, size_t data_size) {
    // Allocating Memory
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->data = malloc(data_size);
    new_node->next = (*head_ref);

    // Copy contents of new_data to newly allocated memory
    // Assumption: char takes 1 byte
    int i;
    for( i = 0; i < data_size; i++ ) 
        *(char *) (new_node->data + i) = (char *) (new_data + 1);
    (*head_ref) = new_node;

}

