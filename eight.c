#include "monty.h"

/**
 * mul - Multiplies the second top element of stack with the top element
 * @stack: Double pointer to the head node of the stack
 * @line_number: Line number of the opcode in the file
 *
 * Return: void
*/
void mul(stack_t **stack, unsigned int line_number)
{
    int prod;

    if (!(*stack) || !(*stack)->next)
    {
        fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    prod = (*stack)->next->n * (*stack)->n;
    pop(stack, line_number); 
    (*stack)->n = prod;
}
