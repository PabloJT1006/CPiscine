/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:05:46 by pjimenez          #+#    #+#             */
/*   Updated: 2023/03/29 15:53:10 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	until_number_counter(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			break ;
		}
		i++;
	}
	return (i);
}

int	is_negative(char *str)
{
	int	i;
	int	j;

	i = until_number_counter(str);
	j = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			j++;
		}
		i--;
	}
	if (j % 2 == 0)
	{
		return (0);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	negative;

	result = 0;
	i = until_number_counter(str);
	negative = is_negative(str);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (negative == 1)
	{
		result = result * -1;
	}
	return (result);
}

// int main(void)
// {
// 	char *number = "   ggg  fsadfasdfn9hhhhhh9F99";

// 	printf("%d",ft_atoi(number));

// }
