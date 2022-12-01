/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atio.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 22:44:02 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/28 12:46:35 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_whitespace(char *str, int *n)
{
	int	i;

	*n = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*n *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	k;
	int	n;

	k = 0;
	i = ft_whitespace(str, &n);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 - 48 + str[i];
		i++;
	}
	k *= n;
	return (k);
}
/*
int	main(void)
{
	char	a[] = "  	 --+++--++----2147483647fes123";
	ft_atoi(a);
	printf("%d",ft_atoi(a));	
}
*/
