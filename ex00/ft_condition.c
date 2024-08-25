/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 08:43:43 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/25 10:22:50 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	**ft_condition(int **matrix, int *num_input)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	// string de inteiros com inputs
	//"4 3 2 1 | 1 2 2 2 | 4 3 2 1 | 1 2 2 2"
	//"0 1 2 3 | 4 5 6 7 | 8 9 10 11 | 12 13 14 15"
	// 0 <= x <= 3 |4 <= x <= 7 |8 <= x <= 11 |12 <= x <= 15|
	// 16 numeros
	//	- 4	= col1up
	//	- 8 	= col1down
	//	- 12	= col1right
	//	- 16	= col1left

	ft_enter_input(num_input);

	// matriz com a memória alocada

	**ft_square_matrix(matrix);
	//preenche 4 em 1
	while (j != 4)
	{
		while (i != 4)
		{
			if(num_input[j] == 1)
				matrix[0][j] = 4;
			else if(num_input[j + 4] == 1)
				matrix[3][j] == 4;
			else if(num_input[j + 8] == 1)
				matrix[i][3] == 4;
			else if(num_input[j + 12] == 1)
				matrix[i][0] = 4;
			i++;
		}
		i = 0;
		j++;
	}
}
