/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:44:10 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/15 19:43:23 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	verify(char str, int *last_is_number, int *last_is_space)
{
	if (str != ' ' && !char_is_numeric(str))
		return (0);
	if (str == ' ' && *last_is_space)
		return (0);
	if (char_is_numeric(str) && *last_is_number)
		return (0);
	if (str == ' ')
	{
		*last_is_space = 1;
		*last_is_number = 0;
	}
	if (char_is_numeric(str))
	{
		*last_is_space = 0;
		*last_is_number = 1;
	}
	return (1);
}

int	str_to_int(char *str, int *array)
{
	int	i;
	int	nb;
	int	last_is_space;
	int	last_is_number;

	i = 0;
	nb = 0;
	last_is_number = 0;
	last_is_space = 1;
	while (str[i])
	{
		if (!verify(str[i], &last_is_number, &last_is_space))
			return (0);
		if (char_is_numeric(str[i]))
		{
			array[nb] = str[i] -48;
			nb++;
		}
		i++;
	}
	if (nb != 16 || ft_str_len(str) != 31)
		return (0);
	return (1);
}
