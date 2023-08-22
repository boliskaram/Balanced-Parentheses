#include "Stack.h"



/* Description:
 * - This function takes a reference to a stacks type
 * - Initialize this stack with Zeros
 * - Initialize the top with -1
 * Return:
 * - Nothing to return
 */
void createEmptyStack(ST_stack_t* stack) {

	//	Set zero for each element
	for (int elementsIndex = 0; elementsIndex < STACK_SIZE; elementsIndex++) {
		stack->elements[elementsIndex] = 0;
	}

	stack->top = -1;
}


/* Description:
 * - This function takes a reference to the stack and data to store
 * - Stores the data passed into the stack
 * Return:
 * - returns -1 if the stack is full
 * - returns 0 otherwise
 */
int8_t push(ST_stack_t* stack, uint8_t data) {

	int8_t retVal = StackNotFull;

	if (isFull(stack) == stackFull) {
		retVal = stackFull;
	}
	else {
		stack->top += 1;
		stack->elements[stack->top] = data;
		retVal = StackNotFull;
	}

	return retVal;
}


/* Description:
 * - This function takes a reference to the stack
 * - Stores the data popped from the stack in a data variable
 * Return:
 * - returns -2 if the stack is empty
 * - returns 0 otherwise
 */
int8_t pop(ST_stack_t* stack, uint8_t* data) {

	int8_t retVal = stackNotEmpty;

	if (isEmpty(stack) == stackEmpty) {
		retVal = stackEmpty;
	}
	else {
		*data = stack->elements[stack->top];
		stack->top -= 1;
		retVal = stackNotEmpty;
	}

	return retVal;

}

/* Description:
 * - This function takes a reference to the stack
 * - Prints all stack's data starting from the top
 * Return:
 * - returns -1 if the stack is full
 * - returns -2 if the stack is empty
 * - returns 0 otherwise
 */
int8_t printStack(ST_stack_t* stack) {

	int8_t retVal = stackNotEmpty;

	if (isFull(stack) == stackFull) {
		retVal = stackFull;
	}
	if (isEmpty(stack) == stackEmpty) {
		retVal = stackEmpty;
	}
	else {

		for (int elementsIndex = 0; elementsIndex < (stack->top + 1); elementsIndex++) {
			printf("%c\t", stack->elements[elementsIndex]);
		}
		printf("\n");
		if (isFull(stack) == stackFull) {
			retVal = stackFull;
		}
		else {
			retVal = stackNotEmpty;
		}

	}

	return retVal;

}

/* Description:
 * - This function takes a reference to the stack
 * - Stores its top data into a variable
 * Return:
 * - returns -2 if the stack is empty
 * - 0 otherwise
 */
int8_t getStackTop(ST_stack_t* stack, uint8_t* topData) {

	int8_t retVal = stackNotEmpty;

	if (isEmpty(stack) == stackEmpty) {
		retVal = stackEmpty;
		*topData = stack->top;
	}
	else {
		*topData = stack->top;
		retVal = stackNotEmpty;
	}

	return retVal;

}


/* Description:
 * - This function takes a reference to the stack
 * - Checks if the stack is full or not
 * Return:
 * - returns -1 if the stack is full
 * - 0 otherwise
 */
int8_t isFull(ST_stack_t* stack) {

	int8_t retVal = StackNotFull;

	if (stack->top == (STACK_SIZE - 1)) {
		retVal = stackFull;
	}
	else {
		retVal = StackNotFull;
	}

	return retVal;
}




/* Description:
 * - This function takes a reference to the stack
 * - Checks if the stack is empty or not
 * Return:
 * - returns -2 if the stack is empty
 * - 0 otherwise
 */

int8_t isEmpty(ST_stack_t* stack) {

	int8_t retVal = stackNotEmpty;

	if (stack->top == -1) {
		retVal = stackEmpty;
	}
	else {
		retVal = stackNotEmpty;
	}

	return retVal;
}