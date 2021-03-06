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

void write_line(int blanks, int stars)
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
    ft_putchar('\\');
    ft_putchar('\n');
}

void write_door(int blanks, int stars, int door, int knob)
{
    int b;
    int s;
    int d;

    b = 0;
    s = 0;
    d = 0;
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
    {
        while (d < door)
        {
            ft_putchar('|');
            d++;
        }
    }
    s = 0;
    while (s < stars)
    {
        ft_putchar('*');
        s++;
    }
    ft_putchar('\\');
    ft_putchar('\n');
}

void sastantua(int size)
{
    int width;
    int width_inc;
    int w;
    int segment;
    int mid;
    int m;
    int m_inc;
    int door;

    if (size <= 0)
        return ;
    width = 7;
    width_inc = 10;
    w = 2;
    while (w <= size)
    {
        if (w == 2)
            width_inc += 2;
        else
            width_inc += (w % 2) ? 2 : 4;
        width += width_inc;
        w++;
    }
    mid = width / 2;
    if (size > 1)
        door = (size % 2) ? size : size - 1;
    else
        door = 1;
    segment = 1;
    m = 1;
    m_inc = 1;
    while (segment < size)
    {
        int height;
        int h;

        height = segment + 2;
        h = 0;
        while (h < height)
        {
            int blanks;
            int stars;

            blanks = mid - m;
            stars = (2 * (mid - blanks)) - 1;
            write_line(blanks, stars);
            h++;
            m++;
        }
        m_inc += (segment % 2) ? 1 : 0;
        m +=  m_inc;
        segment++;
    }
    while (segment == size)
    {
        int height;
        int h;

        height = segment + 2;
        h = 0;
        while (h < height)
        {
            int blanks;
            int stars;

            blanks = mid - m;
            stars = (mid - blanks) - door;
            if (h < height - door)
            {
                stars = (2 * (mid - blanks)) - 1;
                write_line(blanks, stars);
            }
            else if (size > 4 && h == height - door + (door / 2))
            {
                stars = (mid - blanks) - (door / 2) - 1;
                write_door(blanks, stars, door, 1);
            }
            else
            {
                stars = (mid - blanks) - (door / 2) - 1;
                if (size > 4 && h == height - door + (door / 2))
                    write_door(blanks, stars, door, 1);
                else
                    write_door(blanks, stars, door, 0);
            }
            h++;
            m++;
        }
        segment++;
    }
}
