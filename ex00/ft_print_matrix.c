/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 08:05:04 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/25 16:14:34 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
			if (jump < col)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		jump = 0;
		index = index + 1;
	}
}
