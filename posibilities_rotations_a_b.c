/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posibilities_rotations_a_b.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:47:50 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 19:00:38 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rarb_a_b(t_stack **a, t_stack **b, int content)
{
	int	index_a;
	int	index_b;
	int	rr;
	int	cost;

	index_a = find_number_index(a, content);
	index_b = find_number_position_b(b, content);
	rr = 0;
	while (index_a > 0 && index_b > 0)
	{
		index_a--;
		index_b--;
		rr++;
	}
	cost = index_a + index_b + rr;
	return (cost + 1);
}

int	rrarb_a_b(t_stack **a, t_stack **b, int content)
{
	int	index_a;
	int	index_b;
	int	size_a;
	int	cost;

	size_a = ft_lstsize(*a);
	index_a = size_a - find_number_index(a, content);
	index_b = find_number_position_b(b, content);
	cost = index_a + index_b;
	return (cost + 1);
}

int	rarrb_a_b(t_stack **a, t_stack **b, int content)
{
	int	index_a;
	int	index_b;
	int	size_b;
	int	cost;

	size_b = ft_lstsize(*b);
	index_a = find_number_index(a, content);
	index_b = size_b - find_number_position_b(b, content);
	cost = index_a + index_b;
	return (cost + 1);
}

int	rrarrb_a_b(t_stack **a, t_stack **b, int content)
{
	int	index_a;
	int	index_b;
	int	rrr;
	int	cost;

	index_a = ft_lstsize(*a) - find_number_index(a, content);
	index_b = ft_lstsize(*b) - find_number_position_b(b, content);
	rrr = 0;
	while (index_a > 0 && index_b > 0)
	{
		index_a--;
		index_b--;
		rrr++;
	}
	cost = index_a + index_b + rrr;
	return (cost + 1);
}

int	best_case_a_b(t_stack **a, t_stack **b, int content)
{
	int	official;

	official = rarb_a_b(a, b, content);
	if (official > rrarb_a_b(a, b, content))
		official = rrarb_a_b(a, b, content);
	if (official > rarrb_a_b(a, b, content))
		official = rarrb_a_b(a, b, content);
	if (official > rrarrb_a_b(a, b, content))
		official = rrarrb_a_b(a, b, content);
	return (official);
}
