/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:16:26 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 18:59:15 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(char *message)
{
	ft_putendl_fd(message, 1);
	exit(1);
}

void	init(t_stack **a, int argc, char **argv)
{
	size_t	i;
	t_stack	*new_node;
	char	**temporal;

	if (argc == 2)
		temporal = ft_split(argv[1], ' ');
	else
		temporal = argv + 1;
	i = 0;
	while (temporal[i] != NULL)
	{
		new_node = ft_lstnew((int)ft_atoi(temporal[i]));
		ft_lstadd_back(a, new_node);
		i++;
	}
	if (argc == 2)
		ft_free_all(temporal);
}

int	is_sorted(t_stack **stack)
{
	t_stack	*current;

	current = *stack;
	if (ft_lstsize(current) < 2)
		return (1);
	while (current->next != NULL)
	{
		if (current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

int	get_min_value(t_stack **stack)
{
	t_stack	*current;
	int		min;

	current = *stack;
	min = current->content;
	while (current != NULL)
	{
		if (current->content < min)
			min = current->content;
		current = current->next;
	}
	return (min);
}

int	get_max_value(t_stack **stack)
{
	t_stack	*current;
	int		max;

	current = *stack;
	max = current->content;
	while (current != NULL)
	{
		if (current->content > max)
			max = current->content;
		current = current->next;
	}
	return (max);
}
