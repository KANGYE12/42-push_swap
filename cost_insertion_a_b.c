/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_insertion_a_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:57:25 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 18:57:25 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_minimum_cost(t_stack **a)
{
	t_stack	*current;
	int		minimum_cost;

	minimum_cost = (*a)->total_cost;
	current = (*a)->next;
	while (current)
	{
		if (minimum_cost > current->total_cost)
			minimum_cost = current->total_cost;
		current = current->next;
	}
	return (minimum_cost);
}

static void	apply_rotations(t_stack **a, t_stack **b, int content)
{
	int	rotates;

	rotates = best_case_a_b(a, b, content);
	if (rotates == rarb_a_b(a, b, content))
		apply_rarb_a_b(a, b, content);
	else if (rotates == rrarb_a_b(a, b, content))
		apply_rrarb_a_b(a, b, content);
	else if (rotates == rarrb_a_b(a, b, content))
		apply_rarrb_a_b(a, b, content);
	else if (rotates == rrarrb_a_b(a, b, content))
		apply_rrarrb_a_b(a, b, content);
}

void	push_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*current;
	int		minimum;

	current = (*a);
	while (current)
	{
		current->total_cost = best_case_a_b(a, b, current->content);
		current = current->next;
	}
	minimum = get_minimum_cost(a);
	current = (*a);
	while (current)
	{
		if (current->total_cost == minimum)
		{
			apply_rotations(a, b, current->content);
			break ;
		}
		current = current->next;
	}
	pb(a, b);
}
