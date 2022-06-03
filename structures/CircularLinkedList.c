//
// Created by vsluis on 30/05/22.
//
#include "CircularLinkedList.h"

void insertCircularSorted(struct node **list, int key) {
    struct node *pt, *ptPrev;

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
    } else {
        circularSearch(*list, key, &pt, &ptPrev);
        if (pt == NULL) {
            if (newNode->key < (*list)->key) { /*If the new element is less than the first element of the list*/
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
        } else {
            free(newNode);
            printf("\nA chave [%d] ja existe!\n", key);
        }
    }


}

void printCircular(struct node* list) {
    struct node *aux;
    aux = list->next;
    printf("%d -> ", list->key);
    while (aux != list) {
        printf("%d -> ", aux->key);
        aux = aux->next;
    }
    printf("%d", list->key);
}

void circularDestroy(struct node **list) {
    struct node *aux = (*list)->next;
    struct node *temp;
    while (aux != *list) {
        temp = aux->next;
        free(aux);
        aux = temp;
    }
    free(*list);
    *list = NULL;

}

void removeCircularNode(struct node **list, int key) {
    struct node *prev, *aux;
    struct node *cur = *list;

    /*remover do primeiro elemento*/
    if (cur->key == key) {
        /*Procura ultimo elemento para trocar o next para a nova cabeça*/
        aux = *list;
        while (aux->next != *list) {
            aux = aux->next;
        }
        aux->next = (*list)->next;
        *list = (*list)->next;
        free(cur);

    } else {
        circularSearch(*list, key, &cur, &prev);
        if (cur != NULL) {
            prev->next = cur->next;
            free(cur);
        }
    }

}

void circularSearch(struct node *list, int key, struct node **point, struct node **prev) {
    *point = list->next;
    while (*point != list) {
        if ((*point)->key == key) {
            return;
        }
        *prev = *point;
        *point = (*point)->next;
    }
    *point = NULL;

}