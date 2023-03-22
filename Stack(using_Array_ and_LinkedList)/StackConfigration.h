/*
 * StackConfigration.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Mohamed Refat
 */

#ifndef STACKCONFIGRATION_H_
#define STACKCONFIGRATION_H_


/*
 * Type of  STACK_TYPE :
 * 						LINKED_STACK
 * 						ARRAY_STACK
 *
 * */
#define STACK_TYPE ARRAY_STACK

/*
 * The following line is used to specify the size of the Stack
 * @Note : used to specify the size of the Stack array only, Because the size of Linked stack is unlimited
 *
 * */
#define  STACK_SIZE  (100)

/*
 * The following line is used to define the data type the data
 * that will be inserted into the stack
 *
 * */
typedef uint16_t STACK_DATA_TYPE ;

#endif /* STACKCONFIGRATION_H_ */
