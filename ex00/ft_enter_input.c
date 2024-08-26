/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enter_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:45:46 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/26 10:27:15 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
		if (input[index] >= '0' && input[index] <= '9'
			&& (input[index + 1] == ' ' || input[index + 1] == '\0'))
		{
			num_input[jump] = input[index] - '0';
			jump = jump + 1;
		}
		index = index + 1;
	}
	return (num_input);
}
