/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04reverse_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:52:04 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 19:24:19 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*penultimate_node;
	t_stack	*last_node;

	if (ft_lstsize(*stack) < 2)
		return ;
	penultimate_node = *stack;
	while (penultimate_node->next->next != NULL)
		penultimate_node = penultimate_node->next;
	last_node = penultimate_node->next;
	penultimate_node->next = NULL;
	last_node->next = *stack;
	*stack = last_node;
}
