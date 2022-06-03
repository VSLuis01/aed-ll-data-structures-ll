#include <stdio.h>
#include "structures/SimpleLinkedList.h"
#include "structures/CircularLinkedList.h"

int main() {
    struct node* list = NULL;


    insertCircularSorted(&list, 5);
    insertCircularSorted(&list, 2);
    insertCircularSorted(&list, 1);
    insertCircularSorted(&list, 6);
    insertCircularSorted(&list, 6);

    removeCircularNode(&list, 5);
//    removeCircularNode(&list, 6);
    circularDestroy(&list);
//    printCircular(list);

    /*
    insertLinkedSorted(&list, 5);
    insertLinkedSorted(&list, 1);
    insertLinkedSorted(&list, 4);
    insertLinkedSorted(&list, 4);
    insertLinkedSorted(&list, 6);

    //struct node* i = search(list, 4);
    print(list);

    removeLinkedNode(&list, 6);
    destroy(&list);
     */


    //free(list);
    return 0;
}
