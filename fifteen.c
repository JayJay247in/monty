#include "monty.h"

/**
 * stack - Sets the format of the data to a stack (LIFO)
 * @stack: Double pointer to the head node of the stack/queue
 * @line_number: Line number of the opcode in the file
 *
 * Return: void
 */
void stack(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;

    format = STACK; 
}

/** 
 * queue - Sets the format of the data to a queue (FIFO)
 * @stack: Double pointer to the head node of the stack/queue
 * @line_number: Line number of the opcode in the file
 *
 * Return: void
 */
void queue(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;

    format = QUEUE;
}
