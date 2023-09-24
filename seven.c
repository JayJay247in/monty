#include "monty.h"

/**
 * div - Divides the second top element of stack by the top element
 * @stack: Double pointer to the head node of the stack
 * @line_number: Line number of the opcode in the file
 *
 * Return: void
*/
void div(stack_t **stack, unsigned int line_number)
{
    int div;

    if (!(*stack) || !(*stack)->next)
    {
        fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    div = (*stack)->next->n / (*stack)->n;
    pop(stack, line_number);
    (*stack)->n = div;
}
