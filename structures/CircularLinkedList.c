//
// Created by vsluis on 30/05/22.
//
#include "CircularLinkedList.h"

void insertCircularSorted(struct node **list, int key) {
    struct node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Falha ao alocar memoria!\n");
        return;
    }
    struct node *aux;
    newNode->key = key;
    /*If there is no element on the list*/
    if (*list == NULL) {
        newNode->next = newNode;
        *list = newNode;
    } else if (newNode->key < (*list)->key) { /*If the new element is less than the first element of the list*/
        aux = *list;
        while (aux->next != *list) {
            aux = aux->next;
        }
        aux->next = newNode;
        newNode->next = *list;
        *list = newNode;
    } else { /*Otherwise, search for the correct place of the new element*/
        aux = *list;
        while (aux->next != *list && newNode->key > aux->next->key) {
            aux = aux->next;
        }
        newNode->next = aux->next;
        aux->next = newNode;
    }
}

void circularDestroy(struct node **list) {
    struct node *aux = (*list)->next;
    struct node* temp;
    while (aux != *list) {
        temp = aux->next;
        free(aux);
        aux = temp;
    }
    free(*list);
    *list = NULL;

}