//
// Created by vsluis on 29/05/22.
//
#include "SimpleLinkedList.h"

void insertLinkedSorted(struct node ** list, int key) {
    struct node *pt, *ptPrev;
    linkedSearch(*list, key, &pt, &ptPrev);
    if(pt == NULL) {
        struct node *newNode = malloc(sizeof(struct node));
        if (newNode == NULL) {
            printf("Falha ao alocar memoria!\n");
            return;
        }

        struct node *aux;
        newNode->key = key;
        /*If there is no element on the list*/
        if (*list == NULL) {
            newNode->next = NULL;
            *list = newNode;
        } else if (newNode->key < (*list)->key) { /*If the new element is less than the first element of the list*/
            newNode->next = *list;
            *list = newNode;
        } else { /*Otherwise, search for the correct place of the new element*/
            aux = *list;
            while (aux->next && newNode->key > aux->next->key) {
                aux = aux->next;
            }
            newNode->next = aux->next;
            aux->next = newNode;
        }
    } else {
        printf("\nElemento [%d] ja existe na lista!\n", key);
    }
}

void print(struct node *list) {
    while (list != NULL) {
        printf("%d -> ", list->key);
        list = list->next;
    }
    printf("NIL\n");
}

void destroy(struct node **list) {
    struct node *aux = *list;
    while (aux != NULL) {
        *list = aux->next;
        free(aux);
        aux = *list;
    }
}

void removeLinkedNode(struct node** list, int key) {
    struct node* prev;
    struct node* cur = *list;

    /*remover do primeiro elemento*/
    if (cur->key == key) {
        *list = (*list)->next;
        free(cur);
        return;
    }

    linkedSearch(*list, key, &cur, &prev);
    if (cur != NULL) {
        prev->next = cur->next;
        free(cur);
    }
}

void linkedSearch(struct node* list, int key, struct node** point, struct node** prev) {
    *point = list;
    while (*point != NULL) {
        if((*point)->key == key) {
            break;
        }
        *prev = *point;
        *point = (*point)->next;
    }
}

