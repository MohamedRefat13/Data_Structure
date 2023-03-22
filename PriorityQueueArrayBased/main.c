/*
 * main.c
 *
 *  Created on: Oct 21, 2022
 *      Author: Mohamed Refat
 */
#include <stdio.h>
#include "Priority_Queue.h"
#include "STD_TYPES.h"
void Print(QUEUE_DATA_TYPE Data)
{
	printf("%ld\n",Data);
}
int main()
{
	printf("Hell World \n");
	PriorityQueue_t PQ ;
	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Initiate(&PQ);


	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 10);

	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 30);

	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 50);

	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 70);

	printf("Top  %ld\n",PriorityQueue_GetTop(&PQ));
	printf("Size %hd\n",PriorityQueue_GetSize(&PQ));
	printf("***********************************\n\n");

	if(!PriorityQueue_IsEmpty(&PQ))
		PriorityQueue_Dequeue(&PQ);
	if(!PriorityQueue_IsEmpty(&PQ))
		PriorityQueue_Dequeue(&PQ);
	if(!PriorityQueue_IsEmpty(&PQ))
		PriorityQueue_Dequeue(&PQ);
	if(!PriorityQueue_IsEmpty(&PQ))
		PriorityQueue_Dequeue(&PQ);
	if(!PriorityQueue_IsEmpty(&PQ))
		PriorityQueue_Dequeue(&PQ);



	printf("Top  %ld\n",PriorityQueue_GetTop(&PQ));
	printf("Size %hd\n",PriorityQueue_GetSize(&PQ));
	printf("***********************************\n\n");

	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 70);
	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 80);

	printf("Top  %ld\n",PriorityQueue_GetTop(&PQ));
	printf("Size %hd\n",PriorityQueue_GetSize(&PQ));
	printf("***********************************\n\n");


	PriorityQueue_ClearQueue(&PQ);
	printf("Top  %ld\n",PriorityQueue_GetTop(&PQ));
	printf("Size %hd\n",PriorityQueue_GetSize(&PQ));
	printf("***********************************\n\n");




	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 740);
	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 133);
	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 145);
	if(!PriorityQueue_IsFull(&PQ))
		PriorityQueue_Enqueue(&PQ, 364);

	PriorityQueue_Traverse(&PQ, Print);

	printf("Top  %ld\n",PriorityQueue_GetTop(&PQ));
	printf("Size %hd\n",PriorityQueue_GetSize(&PQ));
	printf("***********************************\n\n");

	printf("Goodbye World \n");
	return  0;
}
