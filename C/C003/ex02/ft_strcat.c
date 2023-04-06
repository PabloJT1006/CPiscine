/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:15:53 by pjimenez          #+#    #+#             */
/*   Updated: 2023/03/26 21:45:50 by pjimenez         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = str_cont(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main (void)
//  {
//  	char str[4] = "";
//  	char dest[20] = "hola";
//  	char str1[4] = "";
//  	char  dest1[20] = "hola";

//  	printf("og %s",strcat(dest,str));
// 	printf("\n");
//  	printf("yours %s",ft_strcat(dest1,str1));
//  }
