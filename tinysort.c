/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tinysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 19:03:14 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 19:03:14 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	three_nodes(t_stack **a)
{
	if (((*a)->content > (*a)->next->content)
		&& ((*a)->content > (*a)->next->next->content)
		&& ((*a)->next->content < (*a)->next->next->content))
		ra(a);
	else if (((*a)->content < (*a)->next->content)
		&& ((*a)->next->content > (*a)->next->next->content)
		&& ((*a)->content < (*a)->next->next->content))
	{
		rra(a);
		sa(a);
	}
	else if (((*a)->content > (*a)->next->content)
		&& ((*a)->content < (*a)->next->next->content))
		sa(a);
	else if ((*a)->content < (*a)->next->content
		&& (*a)->content > (*a)->next->next->content)
	{
		rra(a);
	}
	else
	{
		ra(a);
		sa(a);
	}
}

static int	get_min_index(t_stack **stack, int min_value)
{
	t_stack	*head;
	int		index;

	head = *stack;
	index = 0;
	while (head != NULL)
	{
		if (head->content == min_value)
			break ;
		index++;
		head = head->next;
	}
	return (index);
}

static void	four_nodes(t_stack **a, t_stack **b)
{
	int	min_value;
	int	index;

	min_value = get_min_value(a);
	index = get_min_index(a, min_value);
	if (index == 1)
		ra(a);
	else if (index == 2)
	{
		ra(a);
		ra(a);
	}
	else if (index == 3)
		rra(a);
	pb(a, b);
	if (!is_sorted(a))
		three_nodes(a);
	pa(a, b);
}

static void	five_nodes(t_stack **a, t_stack **b)
{
	int	min_value;
	int	index;

	min_value = get_min_value(a);
	index = get_min_index(a, min_value);
	if (index == 1)
		ra(a);
	else if (index == 2)
	{
		ra(a);
		ra(a);
	}
	else if (index == 3)
	{
		rra(a);
		rra(a);
	}
	else if (index == 4)
		rra(a);
	pb(a, b);
	if (!is_sorted(a))
		four_nodes(a, b);
	pa(a, b);
}

void	tinysort(t_stack **a, t_stack **b)
{
	if (is_sorted(a) == 1)
		return ;
	if (ft_lstsize(*a) == 2)
		sa(a);
	else if (ft_lstsize(*a) == 3)
		three_nodes(a);
	else if (ft_lstsize(*a) == 4)
		four_nodes(a, b);
	else
		five_nodes(a, b);
}
