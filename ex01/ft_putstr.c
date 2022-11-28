/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:44:48 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/24 11:45:21 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
	{
		write (1, &str[n], 1);
		n++;
	}
}

/*int     main(void)
{
	char	a[] = "HELLO";

	ft_putstr(a);
}
*/
