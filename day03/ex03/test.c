#import <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}

int main()
{
  int a;
  int b;
  int div_a;
  int mod_a;
  int *div_p;
  int *mod_p;

  a = 101;
  b = 2;
  div_p = &div_a;
  mod_p = &mod_a;

  ft_div_mod(a, b, div_p, mod_p);

  ft_putchar(div_a);
  ft_putchar(mod_a + 48);

  return 0;
}
