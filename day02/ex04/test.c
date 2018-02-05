#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_print_three(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

int	main()
{
	char arr[3];

	arr[0] = '0';
	while (arr[0] <= '7')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '8')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				ft_print_three(arr[0], arr[1], arr[2]);
				if (arr[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
