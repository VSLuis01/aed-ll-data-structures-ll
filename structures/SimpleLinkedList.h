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

/**
 * Remove a node if key match
 * @param key
 */
void removeNode(struct node**, int key);

/**
 * Find the first node if key matchs
 * @param key
 * @param point reference to the searched node it self
 * @param prev reference to the previous node of the searched node
 */
void search(struct node*, int key, struct node** point, struct node** prev);


#endif //TRABALHO_AEDLL_SIMPLELINKEDLIST_H
