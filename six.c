#include "monty.h"

/**
 * sub - Subtracts the top element from the second top element of stack
 * @stack: Double pointer to the head node of the stack
 * @line_number: Line number of the opcode in the file
 *
 * Return: void
*/
void sub(stack_t **stack, unsigned int line_number)
{
    int diff;

    if (!(*stack) || !(*stack)->next)
    {
        fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    diff = (*stack)->next->n - (*stack)->n;
    pop(stack, line_number); 
    (*stack)->n = diff;
}
