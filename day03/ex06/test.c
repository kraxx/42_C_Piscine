#import <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
		ft_putchar(48 + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
  ft_putnbr(i);
}

int main()
{
  char *str;

  str = "flashes";

  ft_strlen(str);

  return 0;
}
