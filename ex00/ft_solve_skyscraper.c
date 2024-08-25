/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_skyscraper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:58:45 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/25 18:54:36 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is_visible_towers.h"

int	ft_double_items(int **matrix, int item, int size, int number)
{
	int	index;

	index = 0;
	while (index < item / size)
	{
		if (matrix[index][item % size] == number)
			return (1);
		index = index + 1;
	}
	index = 0;
	while (index < item % size)
	{
		if (matrix[item / size][index] == number)
			return (1);
		index = index + 1;
	}
	return (0);
}

int	ft_solve_skyscraper(int **matrix, int *input, int size, int item)
{
	int	number;

	if (item == size * size)
		return (1);
	number = 1;
	while (number <= size)
	{
		if (ft_double_items(matrix, item, size, number) == 0)
		{
			matrix[item / size][item % size] = number;
			if (ft_is_visible_towers(matrix, item, input, size) == 1)
			{
				if (ft_solve_skyscraper(matrix, input, size, item + 1) == 1)
					return (1);
			}
		}
		number = number + 1;
	}
	return (0);
}
