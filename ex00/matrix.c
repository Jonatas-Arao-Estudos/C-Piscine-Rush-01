/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:41:50 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/24 20:13:03 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**ft_square_matrix(int size)
{
	int	**matrix;
	int	index;
	int	jump;

	matrix = (int **) malloc (size * 8);
	index = 0;
	jump = 0;
	while (index < size)
	{
		matrix[index] = (int *) malloc (size * 4);
		while (jump < size)
		{
			matrix[index][jump] = jump;
			jump = jump + 1;
		}
		jump = 0;
		index = index + 1;
	}
	return (matrix);
}

void	ft_print_matrix(int **matrix, int row, int col)
{
	char	number;
	int		index;
	int		jump;

	index = 0;
	jump = 0;
	while (index < row)
	{
		while (jump < col)
		{
			number = '0' + matrix[index][jump];
			write(1, &number, 1);
			jump = jump + 1;
		}
		write(1, "\n", 1);
		free(matrix[index]);
		jump = 0;
		index = index + 1;
	}
	free(matrix);
}

int	main(void)
{
	int		**matrix;

	matrix = ft_square_matrix(4);
	ft_print_matrix(matrix, 4, 4);
}
