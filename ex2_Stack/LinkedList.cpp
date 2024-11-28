#include "LinkedList.h"

#include <windows.h> 

#include <iostream>'
#include <sstream>
#include <cstdlib>

void addToHead(listNode* head, int value)
{
    listNode* newlist = new listNode();
    newlist->num = value;
    newlist->next = head;
    head = newlist;
}

listNode* removeHead(listNode* head)
{
    listNode* temp = head;
    head = head->next;
    temp->next = NULL;
    cleanList(temp);
    return head;
}
listNode* addToEnd(listNode* head, int value)
{
    listNode* newNode = new listNode();
    newNode->num = value;
    newNode->next = NULL;

    if (head == NULL) return newNode;
    listNode* cur = head;

    while (cur->next != NULL)
        cur = cur->next;

    cur->next = newNode;
    return head;
}

void delEnd(listNode* head, int value)
{
    if (!head)
    {
        std::cout << "List Is Empty ." << std::endl;
        return;
    }
    if (!head->next)
    {
        delete head;
        head = NULL;
        return;
    }
    listNode* temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void initList(listNode* head)
{
    head->num = NULL;
    head->next = NULL;
}

void cleanList(listNode* head)
{
    listNode* current = head;
    listNode* temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }

    head = NULL;
}