#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack
 * @stack: Double pointer to the head node of the stack
 * @line_number: Line number of the opcode in the file 
 *
 * Return: void
*/
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    (void)line_number;
    
    while (temp)
    {
        if (temp->n > 0 && temp->n <= 127)
            printf("%c", temp->n);
        else
            break;
        
        temp = temp->next;
    }

    printf("\n");
}
