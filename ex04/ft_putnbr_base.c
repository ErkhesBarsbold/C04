/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:48:56 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/28 15:15:09 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_convert(long *nbrl)
{
	if (*nbrl < 0)
	{
		*nbrl = -*nbrl;
		write (1, "-", 1);
	}
	return (1);
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
	return (1);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		n++;
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	l;
	long	mod;
	long	div;
	long	i;
	long	nbrl;

	nbrl = nbr;
	l = ft_strlen(base);
	if (l > 1 && ft_check(base))
	{
		ft_convert(&nbrl);
		i = 0;
		div = nbrl / l;
		mod = nbrl % l;
		if (div > 0)
			ft_putnbr_base(div, base);
		while (i < l)
		{
			if (mod == i)
				write(1, &base[i], 1);
			i++;
		}
	}
}
/*
int	main(void)
{
	char	a[] = "0123456789ABCDEF";
	ft_putnbr_base(2147483646, a);
}
*/
