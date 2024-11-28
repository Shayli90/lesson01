#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct listNode
{
	int num;
	listNode* next;

}listNode;

listNode* addToEnd(listNode* head, int value);

void addToHead(listNode* head, int value);

listNode* removeHead(listNode* head);

void delEnd(listNode* head, int value);

void initList(listNode* head);

void cleanList(listNode* head);

#endif // LINKED_LIST_H