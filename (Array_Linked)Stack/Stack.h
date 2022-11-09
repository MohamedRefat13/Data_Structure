/*
 * Stack.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Mohamed Refat
 */

#ifndef STACK_H_
#define STACK_H_

#include "StackConfigration.h"

#define ARRAY_STACK  5
#define LINKED_STACK 4

#if STACK_TYPE == ARRAY_STACK



/*
 * The following structure is used to define the new data type  << Struct_t >>
 * Struct_t argument ::
 * 					 StackArray[STACK_SIZE] --> array of the data in the stack
 *					 LastIndex				-->variable that point to the last element +1  in stack
 *												array
 * */
typedef struct
{
	STACK_DATA_TYPE StackArray [STACK_SIZE];
	uint32_t LastIndex ;

}Stack_t;


/* @brief: This function is used to initiate the stack to be ready to use
 * @para : *stack ::
 * 					pointer to the stack that will be initiate
 * @ret  : None
 * @note : This function must be used with every stack.
 *
 * */
void ArrayStack_Init(Stack_t *stack);


/* @brief: This function is used to push the data to the stack array
 * @para : *stack ::
 * 					pointer to the stack that data will be bushed in.
 *
 * 			Data  ::
 *					The data that will be pushed to the stack
 * @ret  : None
 *
 * */
void ArrayStack_Push(Stack_t *stack  , STACK_DATA_TYPE Data);


/* @brief: This function is used to pop data from the stack
 * @para : *stack ::
 * 					pointer to the stack that the data will be popped out from it.
 * @ret  : None
 *
 * */
void ArrayStack_Pop(Stack_t *stack);


/* @brief: This function is used to return the last data at the stack array
 * @para : *stack ::
 * 					pointer to the stack that you want to read the last data  from it (from stack array)
 *
 * @ret  : STACK_DATA_TYPE ::
 * 							  Return last data in the stack
 *
 * */
STACK_DATA_TYPE ArrayStack_GetTop(Stack_t *stack );


/* @brief: This function is used to get the size of the stack array
 * @para : *stack :
 * 					pointer to the stack that you want to know the size of it
 *
 * @ret  : Size of the stack
 *
 * */
 uint32_t ArrayStack_GetSize(Stack_t *stack );



/* @brief: This function is used to traverse each element in the stack
 * @para : *stack ::
 * 					pointer to the stack that you want to traverse it
 *
 *		   void (*ptr)(STACK_DATA_TYPE Data)::
 *					ptr is a pointer to function which take one argument of the stack type
 *					and return nothing
 * @ret  : None
 * */
void ArrayStack_Traverse(Stack_t *stack , void (*pFun)(STACK_DATA_TYPE Data));


/* @brief: This function is used to check if stack empty or not
 * @para : *stack ::
 * 					pointer to the stack that you want to check if it empty or not
 *
 * @ret  : Return 1 --> if the stack is empty
 *  	   Return 0 --> if the stack is not empty
 * */
uint8_t ArrayStack_IsEmpty(Stack_t *stack);



/* @brief: This function is used to check if stack Full or not
 * @para : *stack ::
 * 					pointer to the stack that you want to check if it full or not
 *
 * @ret  : Return 1 --> if the stack is full
 *  	   Return 0 --> if the stack is not full
 * */
uint8_t ArrayStack_IsFull(Stack_t *stack);


/* @brief: This function is used to Destroy the stack (delete all the element in it)
 * @para : *stack ::
 * 					pointer to the stack that you want to destroy it .
 *
 * @ret  : None
 * */
void ArrayStack_Destroy(Stack_t *stack);


#elif STACK_TYPE == LINKED_STACK


typedef struct Node_t
{
	STACK_DATA_TYPE  Entry;
	struct Node_t *Next ;
}Node_t;

typedef struct stack
{
	Node_t *Top;
	uint32_t StackSize;
}Stack_t;
/* @brief: This function is used to creat Linked stack
 * @para : *stack ::
 * 					pointer to the stack that data will be bushed in.
 *
 * @ret  : None
 * @note : This function must be used every time you want to creat Linked stack .
 *
 * */
void LinkedStack_creatStack(Stack_t *stack);


/* @brief: This function is used to push the data to the linked stack
 * @para : *stack ::
 * 					pointer to the stack that data will be bushed in.
 *
 * 			Data  ::
 *					The data that will be pushed to the stack
 * @ret  : None
 * */
void LinkedStack_Push(Stack_t *stack , STACK_DATA_TYPE Data);



/* @brief: This function is used to return the last data at the linked stack
 * @para : *stack ::
 * 					pointer to the stack that you want to read the last data  from it (from linked stack)
 *
 * @ret   : None
 * */
STACK_DATA_TYPE LinkedStack_GetTop(Stack_t *stack );

/* @brief: This function is used to pop data from the stack
 * @para : *stack ::
 * 					pointer to the stack that the data will be popped out from it.
 * @ret  : None
 * */
void LinkedStack_Pop(Stack_t *stack);


/* @brief: This function is used to check if stack empty or not
 * @para : stack ::
 * 					Copy from  the stack that you want to check if it empty or not
 *
 * @ret  : Ret type uint8_t
 * 		   Return 1 --> if the stack is empty
 *  	   Return 0 --> if the stack is not empty
 * */
uint8_t LinkedStack_IsEmpty(Stack_t stack);


/* @brief: This function is used to check if stack full or not
 * @para : stack ::
 * 					Copy from  the stack that you want to check if it full or not
 *
 * @ret  : Return 1 --> if the stack is full
 *  	   Return 0 --> if the stack is not full
 * */
uint8_t LinkedStack_IsFull (Stack_t stack);



/* @brief: This function is used to get the size of the linked stack
 * @para : *stack :
 * 					pointer to the stack that you want to know the size of it
 *
 * @ret  : uint32_t  Size of the stack
 * */
uint32_t LinkedStack_GetSize(Stack_t *pStack );




/* @brief: This function is used to traverse each element in the stack
 * @para : *stack ::
 * 					pointer to the stack that you want to traverse it
 *
 *		   void (*ptr)(STACK_DATA_TYPE Data)::
 *					ptr is a pointer to function which take one argument of the stack type
 *					and return nothing
 * @ret  : None
 * */
void LinkedStack_Traverse(Stack_t *pStack , void (*pFun)(STACK_DATA_TYPE data));

#endif

#endif /* STACK_H_ */
