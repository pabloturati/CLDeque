#include "circularList.h"
#include <stdio.h>

int main()
{
    struct CircularList* deque = circularListCreate();
    printf("Testing empty list:\n");
    circularListPrint(deque);
    printf("Testing Adding Front:\n");
    circularListPrint(deque);
    circularListAddFront(deque, (TYPE)4);
    circularListAddFront(deque, (TYPE)5);
    circularListAddFront(deque, (TYPE)6);
    printf("Testing Adding Back:\n");
    circularListAddBack(deque, (TYPE)1);
    circularListAddBack(deque, (TYPE)2);
    circularListAddBack(deque, (TYPE)3);
    printf("%i\n", circularListIsEmpty(deque));
    circularListPrint(deque);
    
    printf("Testing reversing:\n");
    circularListReverse(deque);
    circularListPrint(deque);
    
    printf("Testing removing:  space\n");
    printf("Removing front  space\n");
    circularListRemoveFront(deque);
    printf("Removing back  space\n");
    circularListRemoveBack(deque);
    printf("Printing the list:\n");
    circularListPrint(deque);
    
    circularListDestroy(deque);
    
    
    return 0;
}
