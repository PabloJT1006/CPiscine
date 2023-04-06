/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:20:21 by pjimenez          #+#    #+#             */
/*   Updated: 2023/03/25 22:22:21 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
			if (to_find[++j] == '\0')
				return (&str[i]);
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char hola[] = "Hola q ue dice usted";
// 	char que[] = "que";

// 	printf("%u", &hola[5]);
// 	printf("%u", strstr(hola, que));
// 	printf("%u",ft_strstr(hola, que));
// }
