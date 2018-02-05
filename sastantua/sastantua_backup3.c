/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 11:58:25 by jchow             #+#    #+#             */
/*   Updated: 2017/04/09 11:58:26 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void write_door(int blanks, int stars, int door, int knob)
{
    int s;
    int d;

    d = 0;
    if (knob)
    {
        while (d < door - 2)
        {
            ft_putchar('|');
            d++;
        }
        ft_putchar('$');
        ft_putchar('|');
    }
    else
        while (d < door)
        {
            ft_putchar('|');
            d++;
        }
    s = 0;
    while (s < stars)
    {
        ft_putchar('*');
        s++;
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

void sastantua(int size)
{
    int width;
    int width_inc;
    int w;
    int segment;
    int m;
    int m_inc;
    int door;

    if (size <= 0)
        return ;
    width = 7;
    width_inc = 12;
    w = 2;
    while (w <= size)
    {
        if (w > 2)
            width_inc += (w % 2) ? 2 : 4;
        width += width_inc;
        w++;
    }

    door = 1;
    if (size > 1)
        door = (size % 2) ? size : size - 1;

    segment = 1;
    m = 1;
    m_inc = 1;
    while (segment <= size)
    {
        int height;
        int h;

        height = segment + 2;
        h = 0;
        while (h < height)
        {
            int blanks;
            int stars;

            blanks = (width / 2) - m;
            stars = (2 * ((width / 2) - blanks)) - 1;
            if (segment == size && !(h < height - door))
            {
                stars = ((width / 2) - blanks) - (door / 2) - 1;
                if (size > 4 && h == height - door + (door / 2))
                    write_line(blanks, stars, door, 1);
                else
                    write_line(blanks, stars, door, 0);
            }
            else
                write_line(blanks, stars, 0, 0);
            h++;
            m++;
        }
        m_inc += (segment % 2) ? 1 : 0;
        m +=  m_inc;
        segment++;
    }
}
