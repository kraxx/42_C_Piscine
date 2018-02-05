#import <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_ft(int *nbr)
{
  *nbr = 42;
}

int main()
{
  int nbr;
  int *p;

  p = &nbr;

  ft_ft(p);

  return 0;
}
