/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:11:54 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/25 16:18:27 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_matrix(int **matrix, int row)
{
	int		index;

	index = 0;
	while (index < row)
	{
		free(matrix[index]);
		index = index + 1;
	}
	free(matrix);
}
