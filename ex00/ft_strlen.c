/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:46:03 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/24 11:46:07 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		n++;
	return (n);
}

/*int     main(void)
{
        char    a[] = "HELLO";

	int n =  ft_strlen(a);
	printf("%d",n);
} 
*/
