#import <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_ultimate_ft(int *********nbr)
{
  *********nbr = 42;
}

int main()
{
  int nbr;
  int *p1;
  int **p2;
  int ***p3;
  int ****p4;
  int *****p5;
  int ******p6;
  int *******p7;
  int ********p8;
  int *********p9;

  p9 = &p8;
  p8 = &p7;
  p7 = &p6;
  p6 = &p5;
  p5 = &p4;
  p4 = &p3;
  p3 = &p2;
  p2 = &p1;
  p1 = &nbr;

  ft_ultimate_ft(p9);

  ft_putchar(nbr);

  return 0;
}
