/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:24:46 by kanye             #+#    #+#             */
/*   Updated: 2025/03/28 15:31:07 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_number_index(t_stack **a, int value)
{
	int		pos;
	t_stack	*current;

	current = *a;
	pos = 0;
	while (current != NULL)
	{
		if (value == current->content)
			return (pos);
		pos++;
		current = current->next;
	}
	return (pos);
}

int	find_number_position_b(t_stack **b, int push)
{
	int		i;
	t_stack	*current;

	i = 1;
	current = (*b);
	if (push > (*b)->content && push < ft_lstlast(*b)->content)
		i = 0;
	else if (push > get_max_value(b) || push < get_min_value(b))
		i = find_number_index(b, get_max_value(b));
	else
	{
		while (current->next != NULL)
		{
			if (push < current->content && push > current->next->content)
				break ;
			current = current->next;
			i++;
		}
	}
	return (i);
}

int	find_number_position_a(t_stack **a, int push)
{
	t_stack	*current;
	int		closest_index;
	int		min_difference;
	int		index;
	int		difference;

	current = *a;
	closest_index = -1;
	min_difference = INT_MAX;
	index = 0;
	while (current)
	{
		difference = current->content - push;
		if (difference > 0 && difference < min_difference)
		{
			min_difference = difference;
			closest_index = index;
		}
		current = current->next;
		index++;
	}
	return (closest_index);
}
