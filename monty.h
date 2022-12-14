#ifndef MONTY_H

#define MONTY_H



/* -------------------------------------------------- */

/* LIBRARIES */



#include <stdio.h>

#include <stdlib.h>

#include <string.h>



/* -------------------------------------------------- */

/* STRUCTURES */



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */



typedef struct stack_s

{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */



typedef struct instruction_s

{
	char *opcode;
	int (*f)(stack_t **stack);
} instruction_t;





/* -------------------------------------------------- */

/* GLOBAL VARIABLES */

int stack_queu;



/* -------------------------------------------------- */

/* PROTOTYPES */



/* functions created before */

int delete_dnodeint_at_index(stack_t **stack, unsigned int index);

stack_t *add_dnodeint_end(stack_t **stack, const int n);

stack_t *insert_dnodeint_at_index(stack_t **stack, unsigned int idx, int n);

stack_t *add_dnodeint(stack_t **stack, const int n);

void free_dlistint(stack_t **stack);

int dlistint_len(stack_t *h);

int _strcmp(char *s1, char *s2);

int _strlen(char *s);



/* function created for the exercice */

int prettier(char *line, int line_number, char **command, stack_t **stack);

int (*find_command(char *command, int line_number))(stack_t **);

char *get_command(char *src, int i);

int get_number(char *src, int i);

int change_dnodeint_at_index(stack_t **stack, unsigned int index, int value);

stack_t *get_dnodeint_at_index(stack_t *stack, const int index);

void free_file(FILE *fd, char *line_buf, stack_t **stack);

char *clean_line(char *line);



/* op function */

int unknow_instruction(stack_t **stack);

stack_t *op_push(stack_t **stack, unsigned int line_number, int number);

void op_err1(int err_code, int line_number, FILE *fd, char *line_buf, stack_t **stack);

void op_err2(int err_code, int line_number, FILE *fd, char *line_buf, stack_t **stack);

int op_pall(stack_t **stack);

int op_pint(stack_t **stack);

int op_pop(stack_t **stack);

int op_swap(stack_t **stack);

int op_add(stack_t **stack);

int op_nop(stack_t **stack);

int op_sub(stack_t **stack);

int op_div(stack_t **stack);

int op_mul(stack_t **stack);

int op_mod(stack_t **stack);

int op_pchar(stack_t **stack);

int op_pstr(stack_t **stack);

int op_rotr(stack_t **stack);

int op_rotl(stack_t **stack);

int op_stack(stack_t **stack);

int op_queue(stack_t **stack);

#endif /* MONTY_H */
