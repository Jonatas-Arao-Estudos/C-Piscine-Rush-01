/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_visible_towers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:26:08 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/25 18:25:26 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_visible_top(int **matrix, int item, int *input, int size)
{
	int	index;
	int	highest;
	int	visible;

	index = 0;
	highest = 0;
	visible = 0;
	if (item / size == size - 1)
	{
		while (index < size)
		{
			if (matrix[index][item % size] > highest)
			{
				highest = matrix[index][item % size];
				visible = visible + 1;
			}
			index = index + 1;
		}
		if (input[item % size] != visible)
			return (0);
	}
	return (1);
}

int	ft_is_visible_down(int **matrix, int item, int *input, int size)
{
	int	index;
	int	highest;
	int	visible;

	index = size - 1;
	highest = 0;
	visible = 0;
	if (item / size == size - 1)
	{
		while (index >= 0)
		{
			if (matrix[index][item % size] > highest)
			{
				highest = matrix[index][item % size];
				visible = visible + 1;
			}
			index = index - 1;
		}
		if (input[size + item % size] != visible)
			return (0);
	}
	return (1);
}

int	ft_is_visible_left(int **matrix, int item, int *input, int size)
{
	int	index;
	int	highest;
	int	visible;

	index = 0;
	highest = 0;
	visible = 0;
	if (item % size == size - 1)
	{
		while (index < size)
		{
			if (matrix[item / size][index] > highest)
			{
				highest = matrix[item / size][index];
				visible = visible + 1;
			}
			index = index + 1;
		}
		if (input[2 * size + item / size] != visible)
			return (0);
	}
	return (1);
}

int	ft_is_visible_right(int **matrix, int item, int *input, int size)
{
	int	index;
	int	highest;
	int	visible;

	index = size - 1;
	highest = 0;
	visible = 0;
	if (item % size == size - 1)
	{
		while (index >= 0)
		{
			if (matrix[item / size][index] > highest)
			{
				highest = matrix[item / size][index];
				visible = visible + 1;
			}
			index = index - 1;
		}
		if (input[3 * size + item / size] != visible)
			return (0);
	}
	return (1);
}

int	ft_is_visible_towers(int **matrix, int item, int *input, int size)
{
	int	visible_top;
	int	visible_down;
	int	visible_left;
	int	visible_right;

	visible_top = ft_is_visible_top(matrix, item, input, size);
	visible_down = ft_is_visible_down(matrix, item, input, size);
	visible_left = ft_is_visible_left(matrix, item, input, size);
	visible_right = ft_is_visible_right(matrix, item, input, size);
	if (visible_top == 0 || visible_down == 0
		|| visible_left == 0 || visible_right == 0)
	{
		return (0);
	}
	return (1);
}
