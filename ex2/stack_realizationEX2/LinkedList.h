#ifndef LINKED_LISTH
#define LINKED_LIST_

typedef struct listNode
{
	int num;
	listNode* next;

}listNode;


listNode* addToHead(listNode* head, int value);

listNode* removeHead(listNode* head);


