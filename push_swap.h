/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 19:26:55 by kanye             #+#    #+#             */
/*   Updated: 2025/03/28 15:27:58 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "Instructions/instructions.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	error_message(char *message);
void	check_args(int argc, char **argv);
void	init(t_stack **a, int argc, char **argv);
void	ft_free_all(char **lst);
void	ft_free_stack(t_stack **lst);
int		is_sorted(t_stack **stack);
int		get_min_value(t_stack **stack);
int		get_max_value(t_stack **stack);
void	tinysort(t_stack **a, t_stack **b);
void	push_swap(t_stack **a, t_stack **b);
void	bubble_sort(int *numbers, int size);
void	cost_insertion(t_stack **a, t_stack **b);
int		get_median(t_stack **a);
int		find_number_index(t_stack **a, int value);
int		find_number_position_b(t_stack **b, int push);
int		find_number_position_a(t_stack **a, int push);
int		best_case_a_b(t_stack **a, t_stack **b, int content);
void	push_a_to_b(t_stack **a, t_stack **b);
void	push_b_to_a(t_stack **a, t_stack **b);
int		get_node_value_index(t_stack **a, int index);

int		rarb_a_b(t_stack **a, t_stack **b, int content);
int		rrarb_a_b(t_stack **a, t_stack **b, int content);
int		rarrb_a_b(t_stack **a, t_stack **b, int content);
int		rrarrb_a_b(t_stack **a, t_stack **b, int content);

void	apply_rarb_a_b(t_stack **a, t_stack **b, int content);
void	apply_rrarb_a_b(t_stack **a, t_stack **b, int content);
void	apply_rarrb_a_b(t_stack **a, t_stack **b, int content);
void	apply_rrarrb_a_b(t_stack **a, t_stack **b, int content);

void	insertion_sort(t_stack **a, t_stack **b);

#endif