#import <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_reverser(char *str, int i)
{
  char *rev;
  int j;

  j = 0;
  while (i >= 0)
  {
    rev[j] = str[i];
    i--;
    // ft_putchar(rev[j]);
    j++;
  }
  *str = *rev;
}

void	ft_strrev(char *str)
{
	int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  i--;
  ft_reverser(str, i);

  i = 0;
  while (i != '\0')
  {
    ft_putchar(str[i]);
  }
}

int main()
{
  char *str;

  str = "apples";

  ft_strrev(str);

  return 0;
}
