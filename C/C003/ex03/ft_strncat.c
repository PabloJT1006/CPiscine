/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:17:08 by pjimenez          #+#    #+#             */
/*   Updated: 2023/03/26 21:48:03 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	str_cont(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = str_cont(dest);
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//  int main (void)
//  {
//  	char str[4] = "klk";
//  	char dest[20] = "Hola";
// 	char str1[4] = "klk";
//  	char dest1[20] = "Hola";

//  	ft_strncat(dest,str,2);
// 	printf("%s",dest);
// 	printf("\n");
// 	printf("%s",strncat(dest1,str1,2));
//  }
