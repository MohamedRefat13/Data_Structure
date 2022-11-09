

#include "Array_Queue.h"

void ArrayQueue_Init(Queue_t *pQueue)
{
	pQueue->Front=0;
	pQueue->Rear =0;
	pQueue->Size =0;
}

void ArrayQueue_Enqueue(Queue_t *pQueue , QUEUE_DATA_TYPE Data)
{
	pQueue->Rear = pQueue->Rear %QUEUE_SIZE;
	pQueue->Array[pQueue->Rear++] = Data;
	pQueue->Size++;

}
void ArrayQueue_Dequeue(Queue_t *pQueue)
{
	pQueue->Front = pQueue->Front %QUEUE_SIZE;
	pQueue->Front++;
	pQueue->Size--;
}
QUEUE_DATA_TYPE ArrayQueue_GetTop(Queue_t *pQueue)
{
	return pQueue->Array[pQueue->Front];
}

uint8_t ArrayQueue_IsFull(Queue_t *pQueue)
{
	return (pQueue->Size == QUEUE_SIZE) ? TRUE : FALSE ;
}
uint8_t ArrayQueue_IsEmpty(Queue_t *pQueue)
{
	return (pQueue->Size == 0) ? TRUE : FALSE ;
}
uint16_t ArrayQueue_GetSize(Queue_t *pQueue)
{
	return pQueue->Size;
}

void ArrayQueue_Traverse(Queue_t *pQueue , void (*pFun)(QUEUE_DATA_TYPE *Data))
{
	uint32_t Loc_Iterator;
	uint32_t Loc_Front = pQueue->Front;
	for(Loc_Iterator=0 ; Loc_Iterator <pQueue->Size ; Loc_Iterator++)
	{
		pFun(&(pQueue->Array[Loc_Front++]));
	}
}
















