#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct t_stack //Defying the structure of the program
{
    int value;
    struct t_stack *next;

} t_stack;



#endif