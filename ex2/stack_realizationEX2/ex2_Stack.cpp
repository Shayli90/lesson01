#include "Stack.h"

#include <windows.h> 
#include <iostream>
#include <sstream>
#include <cstdlib>


typedef struct Stack
{
    struct listNode* _elements;
    int _count;
} Stack;

// add to end
void push(Stack* s, unsigned int element)
{
    s->_elements = addToEnd(s->_elements, element);
    s->_count++;

}

// del end
int pop(Stack* s) // Return -1 if stack is empty
{
    if (s->_count == 0)
    {
        return -1;
    }

    listNode* prev = s->_elements;
    listNode* cur = s->_elements;
    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }
    int val = cur->num;
    prev->next = NULL;
    s->_count--;
    return val;
}

void initStack(Stack* s)
{
    s->_elements = NULL;
    s->_count = 0;
}

void cleanStack(Stack* s)
{
    listNode* current = s->_elements;
    listNode* temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        delete temp;
    }

    s = NULL;
}

bool isEmpty(Stack* s)
{
    return s->_count == 0;
}

bool isFull(Stack* s)
{
    return s->_count == 0;
}