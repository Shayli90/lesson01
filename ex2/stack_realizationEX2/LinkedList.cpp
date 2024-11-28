#include "LinkedList.h"
#include <windows.h> 

#include <iostream>'
#include <sstream>
#include <cstdlib>


listNode* addToHead(listNode* head, int value)
{
	listNode* newlist = new listNode();
	newlist->num = value;
	newlist->next = head;
	head = newlist;
	return head;
}

listNode* removeHead(listNode* head)
{

	head = head->next;
	return head;

}
