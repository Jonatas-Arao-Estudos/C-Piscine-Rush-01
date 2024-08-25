/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:02:43 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/25 19:13:46 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_strlen.h"
#include "ft_enter_input.h"
#include "ft_square_matrix.h"
#include "ft_print_matrix.h"
#include "ft_free_matrix.h"
#include "ft_solve_skyscraper.h"

int	main(int argc, char **argv)
{
	int	*input;
	int	**matrix;
	int	size;

	if (argc > 1)
	{
		size = ft_strlen(argv[1]);
		if (size % 2 == 1)
			size = (size + 1) / 2;
		if (size % 4 == 0 && size >= 16 && size <= 36)
		{
			input = ft_enter_input(argv[1], size);
			matrix = ft_square_matrix(size / 4);
			if (ft_solve_skyscraper(matrix, input, size / 4, 0) == 1)
				ft_print_matrix(matrix, size / 4, size / 4);
			else
				write(1, "Error\n", 6);
			ft_free_matrix(matrix, size / 4);
			free(input);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
