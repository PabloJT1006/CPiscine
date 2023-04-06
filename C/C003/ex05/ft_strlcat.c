/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:18:10 by pjimenez          #+#    #+#             */
/*   Updated: 2023/03/25 22:21:53 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

unsigned int	str_cont(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = str_cont(src);
	j = 0;
	if (size <= str_cont(dest))
	{
		return (size + str_cont(src));
	}
	while (dest[j] != '\0' && i <= size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (str_cont(dest));
}

// int main()
// {
//     // int r;
// 	int x;

//     // r = strlcat("hola","adios",16);
//     x = ft_strlcat("hola","adios",2);

//     // printf("Value de verdad: %d\n",r);
//     printf("Value de Noklk: %d\n",x);

//     return(0);
// }
