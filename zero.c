#include "monty.h"

/**
 * push - Pushes an element to the stack
 * @stack: Double pointer to head node of stack
 * @line_number: Line number of opcode in file
 *
 * Return: void
*/
void push(stack_t **stack, unsigned int line_number)
{
        int n;

        if (!token)
        {
                fprintf(stderr, "L%u: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
        }

        n = atoi(token);
        add_node(stack, n);
}

/**
 * pall - Prints all values in the stack from top down
 * @stack: Double pointer to head node of stack
 *
 * Return: void
*/
void pall(stack_t **stack)
{
        stack_t *current = *stack;

        while (current)
        {
                printf("%d\n", current->n);
                current = current->next;
        }
}
