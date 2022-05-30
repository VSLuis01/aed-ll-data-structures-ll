//
// Created by vsluis on 29/05/22.
//

#ifndef TRABALHO_AEDLL_SIMPLELINKEDLIST_H
#define TRABALHO_AEDLL_SIMPLELINKEDLIST_H

#include <stdlib.h>
#include <stdio.h>

struct node {
    int key;
    struct node *next;
};

/**
 * Insert at the beginning of the list
 * @param key
 */
void insertSorted(struct node** list, int key);
/**
 * Free all the nodes of the list
 */
void destroy(struct node**);
/**
 * Print the list
 */
void print(struct node*);
//void remove(int key);
/**
 * Find the first node if key match
 * @param key
 * @return A pointer to the node if the node exists, NULL pointer otherwise
 */
struct node* peek(int key);


#endif //TRABALHO_AEDLL_SIMPLELINKEDLIST_H
