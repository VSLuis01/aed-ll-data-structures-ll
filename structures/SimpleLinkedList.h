//
// Created by vsluis on 29/05/22.
//

#ifndef TRABALHO_AEDLL_SIMPLELINKEDLIST_H
#define TRABALHO_AEDLL_SIMPLELINKEDLIST_H
struct sl_list {
    int key;
    struct sl_list *next;
};

void insertBegin(struct sl_list**);
void remove(int key);
struct sl_list* peek(int key);
int find(int key);


#endif //TRABALHO_AEDLL_SIMPLELINKEDLIST_H
