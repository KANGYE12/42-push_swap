/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_insertion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:01:32 by kanye             #+#    #+#             */
/*   Updated: 2025/03/19 17:25:52 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	insertion_push_b(t_stack **a, t_stack **b)
{
	int	size_a;
	int	min_value_index;

	size_a = ft_lstsize(*a);
	min_value_index = find_number_index(a, get_min_value(a));
	if (min_value_index < size_a / 2)
	{
		while (min_value_index > 0)
		{
			ra(a);
			min_value_index--;
		}
	}
	else
	{
		min_value_index = size_a - min_value_index;
		while (min_value_index > 0)
		{
			rra(a);
			min_value_index--;
		}
	}
	pb(a, b);
}

void	insertion_sort(t_stack **a, t_stack **b)
{
	while (*a)
		insertion_push_b(a, b);
	while (*b)
		pa(a, b);
}
