/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:30:40 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 18:57:41 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_all(char **lst)
{
	size_t	i;

	i = 0;
	while (lst[i] != NULL)
	{
		free(lst[i]);
		i++;
	}
	free(lst);
}

void	ft_free_stack(t_stack **lst)
{
	t_stack	*temporal;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		temporal = (*lst)->next;
		free(*lst);
		*lst = temporal;
	}
}
