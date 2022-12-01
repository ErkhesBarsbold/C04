/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:18:39 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/28 15:20:25 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_find_pos(char ch, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_convert(int n, int x, int y)
{
	int	i;
	int	s;

	i = 0;
	s = 1;
	while (i < y)
	{
		s = s * x;
		i++;
	}
	s *= n;
	return (s);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	k;
	int	n;
	int	pos;

	if (ft_check(base) > 1)
	{
		s = 0;
		i = ft_whitespace(str, &n);
		k = i;
		while (ft_find_pos(str[i], base) != -1)
			i++;
		while (k < i)
		{
			pos = ft_find_pos(str[k], base);
			s += ft_convert(pos, ft_check(base), i - k - 1);
			k++;
		}
		s *= n;
		return (s);
	}
	return (0);
}
/*
int	main(void)
{
        char    base[] = "0123456789abcdef";
	char	str[] = "    	  ---+++-8000000";
	printf("%d",ft_atoi_base(str, base));
}
*/
