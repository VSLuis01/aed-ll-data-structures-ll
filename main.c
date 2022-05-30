#include <stdio.h>
#include "structures/SimpleLinkedList.h"
#include "structures/CircularLinkedList.h"

int main() {
    struct node* list = NULL;

    insertCircularSorted(&list, 5);
    insertCircularSorted(&list, 1);
    insertCircularSorted(&list, 6);

    /*
    insertSorted(&list, 5);
    insertSorted(&list, 1);
    insertSorted(&list, 4);
    insertCircularSorted(&list, 6);
    //struct node* i = search(list, 4);
    print(list);

    removeNode(&list, 6);
    destroy(&list);
     */

    //free(list);
    return 0;
}
