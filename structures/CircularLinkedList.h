//
// Created by vsluis on 30/05/22.
//

#ifndef TRABALHO_AEDLL_CIRCULARLINKEDLIST_H
#define TRABALHO_AEDLL_CIRCULARLINKEDLIST_H
#include <stdlib.h>
#include <stdio.h>
#include "NodeType.h"

/**
 * Insert at the beginning of the list
 * @param key
 */
void insertCircularSorted(struct node** list, int key);
/**
 * Free all the nodes of the list
 */
void circularDestroy(struct node**);
/**
 * Print the list
 */
void printCircular(struct node*);

/**
 * Remove a node if key match
 * @param key
 */
void removeCircularNode(struct node**, int key);

/**
 * Find the first node if key matchs
 * @param key
 * @param point reference to the searched node it self
 * @param prev reference to the previous node of the searched node
 */
void circularSearch(struct node*, int key, struct node** point, struct node** prev);
#endif //TRABALHO_AEDLL_CIRCULARLINKEDLIST_H
