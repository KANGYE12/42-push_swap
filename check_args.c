/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:56:27 by kanye             #+#    #+#             */
/*   Updated: 2025/03/15 18:57:16 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_repetition(char **arguments, int number, int position)
{
	while (arguments[position] != NULL)
	{
		if (ft_atoi(arguments[position]) == number)
			return (1);
		position++;
	}
	return (0);
}

void	check_args(int argc, char **argv)
{
	size_t	i;
	long	number;
	char	**temporal;

	if (argc == 2)
		temporal = ft_split(argv[1], ' ');
	else
		temporal = argv + 1;
	i = 0;
	while (temporal[i] != NULL)
	{
		if (ft_all_digits(temporal[i]) == 0)
			error_message("ERROR");
		number = ft_atoi(temporal[i]);
		if (check_repetition(temporal, number, i + 1) == 1)
			error_message("ERROR");
		if (number > INT_MAX || number < INT_MIN)
			error_message("ERROR");
		i++;
	}
	if (argc == 2)
		ft_free_all(temporal);
}
