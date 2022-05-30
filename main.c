#include <stdio.h>
#include "structures/SimpleLinkedList.h"

int main() {
    struct node* list = NULL;

    insertSorted(&list, 5);
    insertSorted(&list, 1);
    insertSorted(&list, 4);
    insertSorted(&list, 6);
    struct node* i = peek(list, 4);
    print(list);
    destroy(&list);

    //free(list);
    return 0;
}
