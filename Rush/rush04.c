/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:55:00 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/09 19:19:59 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Este projeto foi construido em conjunto com outros 2 campers das quais não posso divulgar informações
por serem te cunho pessoal */

void    ft_putchar(char c);

void    print_line(int x, char begin, char middle, char end)
{
    int col_count;

    col_count = 0;
    if (x > 0)
    {
        ft_putchar (begin);
        if(x > 2)
        {
            while(col_count < x - 2)
            {
                ft_putchar(middle);
                col_count++;
            }
        }
        if (x > 1)
            ft_putchar (end);
        ft_putchar ('\n');
    }
}

void    rush(int x, int y)
{
    char first_char;
    char second_char;
    char third_char;
    int midcount;

    first_char = 'A';
    second_char = 'B';
    third_char = 'C';
    midcount = 0;
    if (y > 0)
        print_line (x, 'A', 'B', 'C');
    while (midcount < y - 2)
    {
        print_line (x, 'B', ' ', 'B');
        midcount++;
    }
    if (y >= 2)
        print_line(x, 'A', 'B', 'C');

}