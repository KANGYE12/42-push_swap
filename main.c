#include "push_swap.h"

int main(int argc, char **argv)
{
    /*t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;*/
    if(argc < 2)
        return 0; //Error in the input exception
    if(argc == 2)
    {
        printf("%d", ft_atoi(argv[1]));
    }
    return 0;
}