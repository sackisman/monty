#include "monty.h"



/**
 * op_sub - subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: pointer to the address of the stack
 * Return: 0 on success, -6 on error
 */



int op_sub(stack_t **stack)

{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
		return (-6);
	result = (*stack)->next->n - (*stack)->n;
	delete_dnodeint_at_index(stack, 0);
	change_dnodeint_at_index(stack, 0, result);
	return (0);
}
