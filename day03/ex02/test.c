#import <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x;
  int y;
  int *a;
  int *b;

  x = 49;
  y = 50;
  a = &x;
  b = &y;

  ft_swap(a, b);

  ft_putchar(x);
  ft_putchar(y);

  return 0;
}
