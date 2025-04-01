/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:52:07 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 19:24:13 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	rotate(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (ft_lstsize(*stack) < 2)
		return ;
	last_node = ft_lstlast(*stack);
	first_node = *stack;
	*stack = (*stack)->next;
	last_node->next = first_node;
	first_node->next = NULL;
}
