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

void insertBegin(struct node**, int key);
void destroy(struct node**);
void print(struct node*);
//void remove(int key);
//struct node* peek(int key);
//int find(int key);


#endif //TRABALHO_AEDLL_SIMPLELINKEDLIST_H
