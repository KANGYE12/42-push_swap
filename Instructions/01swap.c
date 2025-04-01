/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:50:46 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 19:23:56 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	swap(t_stack **node)
{
	t_stack	*first_node;
	t_stack	*second_node;

	if (ft_lstsize(*node) < 2)
		return ;
	first_node = *node;
	second_node = first_node->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	*node = second_node;
}
