/*
 * stack.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Mohamed Refat
 */
#include"../STD_TYPES.h"
#include "Stack.h"
#include <stdlib.h>
#include "StackConfigration.h"



#if STACK_TYPE == ARRAY_STACK

void ArrayStack_Init(Stack_t *stack)
{
	stack->LastIndex = 0 ;
}


void ArrayStack_Push(Stack_t *stack  , STACK_DATA_TYPE Data)
{
	stack->StackArray[stack->LastIndex] = Data;
	stack->LastIndex++;
}


void ArrayStack_Pop(Stack_t *stack)
{
	stack->LastIndex--;
}


STACK_DATA_TYPE ArrayStack_GetTop(Stack_t *stack )
{
	return  stack->StackArray[(stack->LastIndex)-1] ;
}


uint32_t ArrayStack_GetSize(Stack_t *stack )
{
	return stack->LastIndex;
}


void ArrayStack_Traverse(Stack_t *stack , void (*pFun)(STACK_DATA_TYPE Data))
{
	uint32_t StackCounter ;
	for(StackCounter=0 ; StackCounter< stack->LastIndex ; StackCounter++)
	{
		pFun(stack->StackArray[StackCounter]);
	}
}

uint8_t ArrayStack_IsEmpty(Stack_t *stack)
{
	return stack->LastIndex ==0 ? TRUE : FALSE;
}

uint8_t ArrayStack_IsFull(Stack_t *stack)
{

	return stack->LastIndex ==STACK_SIZE ? TRUE : FALSE;
}
void ArrayStack_Destroy(Stack_t *stack)
{
	(stack->LastIndex) = 0;
}

#elif STACK_TYPE == LINKED_STACK

void LinkedStack_creatStack(Stack_t *stack)
{
	//Node_t firstNode ;
	//firstNode.Next = NULL;
	stack->Top = NULL_ptr;
	stack->StackSize=0;

}

void LinkedStack_Push(Stack_t *stack , STACK_DATA_TYPE Data)
{
	Node_t *pNode = (Node_t *)malloc(sizeof(Node_t));
	pNode->Entry = Data;
	pNode->Next = stack->Top;
	stack->Top = pNode;
	stack->StackSize++;
}

STACK_DATA_TYPE LinkedStack_GetTop(Stack_t *stack )
{
	return stack->Top->Entry ;

}

void LinkedStack_Pop(Stack_t *stack)
{
	Node_t *pLocalNode = stack->Top;
	Stack_t *pLocalStack = stack;
	stack->Top=pLocalNode->Next;
	free(pLocalStack);
	stack->StackSize--;
}

uint8_t LinkedStack_IsEmpty(Stack_t stack)
{
	uint8_t LocalReturn;
	if(NULL_ptr==stack.Top)
	{
		LocalReturn=1;
	}else if(NULL_ptr!=stack.Top)
	{
		LocalReturn=0;
	}else
	{
		/*Do Nothing*/
	}

	return LocalReturn ;
}

uint8_t LinkedStack_IsFull (Stack_t stack)
{
	return 0; /*The linked stack will never be full*/
}

uint32_t LinkedStack_GetSize(Stack_t *pStack )
{

	return pStack->StackSize;
}

void LinkedStack_Traverse(Stack_t *pStack , void (*pFun)(STACK_DATA_TYPE data))
{
	Node_t *Local_pTop = pStack->Top;
	while(Local_pTop !=NULL_ptr)
	{
		pFun(Local_pTop->Entry);
		Local_pTop = Local_pTop->Next;
	}
}


#endif

