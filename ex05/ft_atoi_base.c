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

int     ft_check(char *str)
{
        int     i;
        int     j;

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

int     ft_strlen(char *str)
{
        int     n;

        n = 0;
        while (str[n] != 0)
                n++;
        return (n);
}

void    ft_putnbr_base(int nbr, char *base)
{
        int     l;
        int     mod;
        int     div;
        int     i;

        l = ft_strlen(base);
        if (l > 1 && ft_check(base) && ft_check_pos(&nbr))
        {
                i = 0;
                div = nbr / l;
                mod = nbr % l;
                if (div > 0)
                        ft_putnbr_base(div, base);
                while (i < l)
                {
                        if (mod == i)
                                printf("%c", base[i]);
                        i++;
                }
        }
}
/*
int     main(void)
{
        char    a[] = "0123456789abcdef";
        ft_putnbr_base(-2147483647, a);
}
*/

