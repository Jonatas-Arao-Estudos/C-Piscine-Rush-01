/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:02:43 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/25 10:22:05 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_strlen.h"

int	*ft_enter_input(char *input, int size)
{
	int	index;
	int	jump;
	int	*num_input;

	num_input = (int *) malloc(size * 4);
	index = 0;
	jump = 0;
	while (input[index] != '\0')
	{
		if (input[index] >= '0' && input[index] <= '9')
		{
			num_input[jump] = input[index] - '0';
			jump = jump + 1;
		}
		index = index + 1;
	}
	return (num_input);
}

int	main(int argc, char **argv)
{
	int	*input;
	int	size;

	if (argc > 1)
	{
		size = ft_strlen(argv[1]);
		if (size % 2 == 1)
			size = (size + 1) / 2;
		if (size % 4 == 0 && size >= 16 && size <= 36)
		{
			input = ft_enter_input(argv[1], size);
		}
	}
}
