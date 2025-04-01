/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:30:23 by kanye             #+#    #+#             */
/*   Updated: 2025/03/28 15:30:23 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) >= 2 && ft_lstsize(*a) <= 5)
		tinysort(a, b);
	else if (ft_lstsize(*a) >= 6 && ft_lstsize(*a) <= 50)
		insertion_sort(a, b);
	else
	{
		pb(a, b);
		pb(a, b);
		while (ft_lstsize(*a) > 3)
			push_a_to_b(a, b);
		tinysort(a, b);
		while ((*b) != NULL)
			push_b_to_a(a, b);
		while (!(is_sorted(a)))
			ra(a);
	}
}

void	push_b_to_a(t_stack **a, t_stack **b)
{
	int		index;
	int		index_to_find;
	int		size;

	size = ft_lstsize(*a);
	index_to_find = find_number_position_a(a, (*b)->content);
	index = 0;
	if (index_to_find > size / 2)
	{
		index_to_find = size - index_to_find;
		while (index < index_to_find)
		{
			rra(a);
			index++;
		}
	}
	else
	{
		while (index < index_to_find)
		{
			ra(a);
			index++;
		}
	}
	pa(a, b);
}
