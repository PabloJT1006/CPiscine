/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:14:33 by pjimenez          #+#    #+#             */
/*   Updated: 2023/03/26 21:44:08 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
//  int main (void)
//  {
// 	char str1[] = "testestestest";
// 	char str2[] = "testesteste8st";
//  	int x;
//  	int ret;

//  	x = ft_strncmp(str1 ,str2 ,25);

//  	printf("og %d",strncmp(str1 ,str2 ,25));
//  	printf("\n");
//  	printf("yours %d",x);
//  	return (0);
//  }
