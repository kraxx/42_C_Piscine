#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void	ft_print_arr(int *arr, int n) //prints all numbers in the array
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	ft_incrementer(int *arr, int n) //increments the number sequence
{
	int	i; //index selector 2
  int j; //index selector

  j = n - 1; //initialized at last index

	while (1)
	{
		while (arr[j] == (9 + j - (n - 1)) && j >= 0) //once last index == 9, index selector j is shifted left 1
			j--;
		if (j < 0)
			break;
		arr[j]++; //increment the selected index
		i = j + 1;
		while (i < n) //i > j
		{
			arr[i] = arr[j] + 1;
			i++;
		}
		j = n - 1; //reset j to last index
		ft_putchar(',');
		ft_putchar(' ');
		ft_print_arr(arr, n);
	}
}

void	ft_print_combn(int n)
{
	int	arr[n];
	int	i;

  i = 0;
	if (n > 9) //stops function and returns nothing if n > 9
		return;
	while (i < n) //assigns array indices with numbers
	{
		arr[i] = i;
		i++;
	}
	ft_print_arr(arr, n); //print the smallest number
	ft_incrementer(arr, n); //start incrementing
}

int	main()
{
	ft_print_combn(4);

	return 0;
}
