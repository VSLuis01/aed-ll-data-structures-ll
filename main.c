#include <stdio.h>
#include "structures/SimpleLinkedList.h"

int main() {
    struct node* list = NULL;

    insertBegin(&list, 1);
    insertBegin(&list, 2);
    insertBegin(&list, 2);
    insertBegin(&list, 2);
    print(list);
    destroy(&list);

    //free(list);
    return 0;
}
