#import <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_ultimate_div(int *a, int *b)
{
  int x;
  int y;

  x = *a;
  y = *b;

  *a = x / y;
  *b = x % y;
}

int main()
{
  int a;
  int b;
  int *p_a;
  int *p_b;

  a = 101;
  b = 2;
  p_a = &a;
  p_b = &b;

  ft_ultimate_div(p_a, p_b);

  ft_putchar(a);
  ft_putchar(b + 48);

  return 0;
}
