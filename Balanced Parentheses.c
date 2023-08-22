#include "Balanced Parentheses.h"


/* Description:
 * - This function takes an expression array max 10 characters
 * - Checks if the parentheses are balanced or not
 * - Checks the following parentheses types {, }, (, ) only
 * Return:
 * - returns -2 if the neither of paranthethes is used
 * - returns -1 if the parentheses are not balanced
 * - returns 0 if the parentheses are balanced
 */
int8_t isBalancedParanthethes(uint8_t* expression) {

	int8_t retVal = unused;
	int8_t check;
	uint8_t data;

	for (int i = 0; i < Expr_SIZE; i++) {

		if ((expression[i] == '{') || (expression[i] == '(')) {

			check = push(&expr, expression[i]);

			if (check == stackFull) {
				printf("Stack Overflow\n");
			}
			retVal = unbalanced;
		}

		if ((expression[i] == '}') || (expression[i] == ')')) {

			check = pop(&expr, &data);
			if (check == stackEmpty) {
				printf("Stack is Empty\n");
			}

			if (data == '{' && expression[i] == '}') {
				retVal = balanced;
			}
			else if (data == '(' && expression[i] == ')') {
				retVal = balanced;
			}
			else {
				retVal = unbalanced;
			}
		}
	}
	return retVal;
}