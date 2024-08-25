/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:41:50 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/25 08:05:34 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
