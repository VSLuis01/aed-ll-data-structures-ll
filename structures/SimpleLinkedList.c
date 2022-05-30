//
// Created by vsluis on 29/05/22.
//
#include "SimpleLinkedList.h"

void insertBegin(struct node** list, int key) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->key = key;
    if (*list == NULL) {
        newNode->next = NULL;
        *list = newNode;
    } else {
        newNode->next = *list;
        *list = newNode;
    }
}

void print(struct node* list) {
    while (list != NULL) {
        printf("%d -> ", list->key);
        list = list->next;
    }
    printf("NIL\n");
}

void destroy(struct node** list) {
    struct node* aux = *list;
    while (aux != NULL) {
        *list = aux->next;
        free(aux);
        aux = *list;
    }
}
