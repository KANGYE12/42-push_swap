/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions_a_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:53:05 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 18:56:20 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_rarb_a_b(t_stack **a, t_stack **b, int content)
{
	int	index_a;
	int	index_b;

	index_a = find_number_index(a, content);
	index_b = find_number_position_b(b, content);
	while (index_a > 0 && index_b > 0)
	{
		index_a--;
		index_b--;
		rr(a, b);
	}
	while (index_a > 0)
	{
		ra(a);
		index_a--;
	}
	while (index_b > 0)
	{
		rb(b);
		index_b--;
	}
}

void	apply_rrarb_a_b(t_stack **a, t_stack **b, int content)
{
	int	index_a;
	int	index_b;
	int	size_a;

	size_a = ft_lstsize(*a);
	index_a = size_a - find_number_index(a, content);
	index_b = find_number_position_b(b, content);
	while (index_a > 0)
	{
		rra(a);
		index_a--;
	}
	while (index_b > 0)
	{
		rb(b);
		index_b--;
	}
}

void	apply_rarrb_a_b(t_stack **a, t_stack **b, int content)
{
	int	index_a;
	int	index_b;
	int	size_b;

	size_b = ft_lstsize(*b);
	index_a = find_number_index(a, content);
	index_b = size_b - find_number_position_b(b, content);
	while (index_a > 0)
	{
		ra(a);
		index_a--;
	}
	while (index_b > 0)
	{
		rrb(b);
		index_b--;
	}
}

void	apply_rrarrb_a_b(t_stack **a, t_stack **b, int content)
{
	int	index_a;
	int	index_b;
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*a);
	size_b = ft_lstsize(*b);
	index_a = size_a - find_number_index(a, content);
	index_b = size_b - find_number_position_b(b, content);
	while (index_a > 0 && index_b > 0)
	{
		index_a--;
		index_b--;
		rrr(a, b);
	}
	while (index_a > 0)
	{
		rra(a);
		index_a--;
	}
	while (index_b > 0)
	{
		rrb(b);
		index_b--;
	}
}
