#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom
 * @stack: Double pointer to the head node of the stack
 * @line_number: Line number of the opcode in the file
 *
 * Return: void
*/
void rotr(stack_t **stack, unsigned int line_number) 
{
    stack_t *temp, *last;

    (void)line_number;

    if (*stack && (*stack)->next) 
    {
        last = *stack;
        
        while (last->next)
            last = last->next;
        
        temp = *stack;
        *stack = last;
        (*stack)->next = temp;
        last->next = NULL;
    }
}
