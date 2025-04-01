/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02push.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:50:36 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 19:24:00 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*temporal;

	if (*src == NULL)
		return ;
	temporal = *src;
	*src = (*src)->next;
	temporal->next = *dst;
	*dst = temporal;
}
