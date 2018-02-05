/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <array[5]arvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 11:58:25 by jchow             #+#    #+#             */
/*   Updated: 2017/04/09 11:58:26 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void write_door(int blanks, int stars, int door, int knob)
{
    int sd[2];

    sd[1] = 0;
    if (knob)
    {
        while (sd[1] < door - 2)
        {
            ft_putchar('|');
            sd[1]++;
        }
        ft_putchar('$');
        ft_putchar('|');
    }
    else
        while (sd[1] < door)
        {
            ft_putchar('|');
            sd[1]++;
        }
    sd[0] = 0;
    while (sd[0] < stars)
    {
        ft_putchar('*');
        sd[0]++;
    }
}

void write_line(int blanks, int stars, int door, int knob)
{
    int b;
    int s;

    b = 0;
    s = 0;
    while (b < blanks)
    {
        ft_putchar(' ');
        b++;
    }
    ft_putchar('/');
    while (s < stars)
    {
        ft_putchar('*');
        s++;
    }
    if (door)
        write_door(blanks, stars, door, knob);
    ft_putchar('\\');
    ft_putchar('\n');
}

void array_function(int *array, int size)
{
    while (array[4] <= size)
    {
        array[7] = array[4] + 2;
        array[8] = 0;
        while (array[8] < array[7])
        {
            array[9] = (array[0] / 2) - array[5];
            array[10] = (2 * ((array[0] / 2) - array[9])) - 1;
            if (array[4] == size && !(array[8] < array[7] - array[6]))
            {
                array[10] = ((array[0] / 2) - array[9]) - (array[6] / 2) - 1;
                if (size > 4 && array[8] == array[7] - array[6] + (array[6] / 2))
                    write_line(array[9], array[10], array[6], 1);
                else
                    write_line(array[9], array[10], array[6], 0);
            }
            else
                write_line(array[9], array[10], 0, 0);
            array[8]++;
            array[5]++;
        }
        array[6] += (array[4] % 2) ? 1 : 0;
        array[5] +=  array[6];
        array[4]++;
    }
}

void sastantua(int size)
{
    int array[11];

    if (size <= 0)
        return ;
    array[0] = 7;
    array[1] = 12;
    array[3] = 2;
    while (array[3] <= size)
    {
        if (array[3] > 2)
            array[1] += (array[3] % 2) ? 2 : 4;
        array[0] += array[1];
        array[3]++;
    }

    array[6] = 1;
    if (size > 1)
        array[6] = (size % 2) ? size : size - 1;

    array[4] = 1;
    array[5] = 1;
    array[6] = 1;

    array_function(array, size);
}
