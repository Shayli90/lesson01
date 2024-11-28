#include "Queue.h"
#include <iostream>
#include <sstream>
#include <windows.h> 


void initQueue(Queue* q, unsigned int size)
{
	q->elements = new int[size];
	q->maxSize = size;
	q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	int i = 0;
	if (q->count < q->maxSize)
	{
		q->elements[q->count] = newValue;
		q->count++;
	}
}

int dequeue(Queue* q)// return element in top of queue, or -1 if empty
{
	int i = 0;
	int first = q->elements[0];
	if (q->count == 0)
	{
		return -1;
	}
	while (i < q->count)
	{
		q->elements[i] = q->elements[i + 1];
		i++;
	}
	q->count--;
	return first;
}

void cleanQueue(Queue* q)
{
	free(q->elements);
}

bool isEmpty(Queue* s)
{
	if (s->count != 0)
	{
		return false;
	}
	return true;
}

bool isFull(Queue* s)
{
	if (s->count == s->maxSize)
	{
		return true;
	}
	return false;
}










