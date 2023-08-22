#include "stdio.h"
#include "Stack.h"
#include "Types.h"
#include "Balanced Parentheses.h"

void test_stack(ST_stack_t* stack);

int main() {
	//ST_stack_t	stack ;
	//test_stack(&stack);

	int8_t check;

	uint8_t expression[11][25] = { "{(2 + 3)}","{((2+3)}","[(2+3)]","{(2+3)/((3+3)*(15-10))}","(2+3)/((3+3)*(15-10))","{{2+3)/((3+3)*(15-10)))","{(2+3(/((3+3)*(15-10))}","{(2+3)/((3+3(*)15-10))}","})2+3)/((3+3)*(15-10))}","{(2+3)/(<3+3>*(15-10))}","2+3/<3+3>*15-10" };

	for (int index = 0; index < 11; index++) {

		check = isBalancedParanthethes(expression[index]);
		printf("Expression : %s\t", expression[index]);
		if (check == unbalanced) {
			printf("parentheses Not Balanced");
		}
		else if (check == balanced) {
			printf("parentheses Balanced");
		}
		else {
			printf("Parentheses Unused");
		}
		printf("\n\n");
	}

}

void test_stack(ST_stack_t* stack) {

	int8_t		check;
	uint8_t		last_data;
	int8_t		stack_top;

	//1. Create an empty stack
	createEmptyStack(&stack);

	//2. Push 5 different characters to the stack
	check = push(&stack, 'B');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'O');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'L');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'I');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'S');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	//3. Print all stack data
	check = printStack(&stack);
	if (check == stackEmpty) {
		printf("Can't Print Data, Stack is Empty\n");
	}

	//4. Pop one character from the stack
	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}


	//5. Print the stack's top
	check = getStackTop(&stack, &stack_top);
	if (check == stackEmpty) {
		printf("Stack is Empty, Top = %d\n", stack_top);
	}
	else {
		printf("StackTop = %d\n", stack_top);
	}


	//6. Print all stack data
	check = printStack(&stack);
	if (check == stackEmpty) {
		printf("Can't Print Data, Stack is Empty\n");
	}



	//7. Push another 7 different characters to the stack
	check = push(&stack, 'K');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'A');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'R');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'A');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'M');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'S');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	check = push(&stack, 'O');
	if (check == stackFull) {
		printf("Can't Add Data, Stack is Full\n");
	}

	//8. Print the stack's top
	check = getStackTop(&stack, &stack_top);
	if (check == stackEmpty) {
		printf("Stack is Empty, Top = %d\n", stack_top);
	}
	else {
		printf("StackTop = %d\n", stack_top);
	}


	//9. Print all stack data
	check = printStack(&stack);
	if (check == stackEmpty) {
		printf("Can't Print Data, Stack is Empty\n");
	}

	//10. Pop 4 characters from the stack
	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	//11. Print the stack's top 
	check = getStackTop(&stack, &stack_top);
	if (check == stackEmpty) {
		printf("Stack is Empty Top = %d\n", stack_top);
	}
	else {
		printf("StackTop = %d\n", stack_top);
	}


	//12. Print all stack data
	check = printStack(&stack);
	if (check == stackEmpty) {
		printf("Can't Print Data, Stack is Empty\n");
	}

	//13. Pop 7 more times from the stack
	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");

	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}

	check = pop(&stack, &last_data);
	if (check == stackEmpty) {
		printf("Can't Remove Data, Stack is Empty\n");
	}
	else {
		printf("Removed Data : %c\n", last_data);
	}


	//14. Print the stack's top 
	check = getStackTop(&stack, &stack_top);
	if (check == stackEmpty) {
		printf("Stack is Empty Top = %d\n", stack_top);
	}
	else {
		printf("StackTop = %d\n", stack_top);
	}

	//15. Print all stack data
	check = printStack(&stack);
	if (check == stackEmpty) {
		printf("Can't Print Data , Stack is Empty\n");
	}
}