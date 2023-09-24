#include "monty.h"

/**
 * rotl - Rotates the stack to the top
 * @stack: Double pointer to the head node of the stack
 * @line_number: Line number of the opcode in the file
 * 
 * Return: void
*/
void rotl(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    (void)line_number;
    
    if (*stack && (*stack)->next)
    {
        temp = *stack;
        *stack = (*stack)->next;
        temp->next = NULL;
        
        while ((*stack)->next)        
            *stack = (*stack)->next;
        
        (*stack)->next = temp;
    }   
}
