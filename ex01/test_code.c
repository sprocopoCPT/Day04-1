#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	else if (nb > 12)
		return 0;
	else if (nb == 0)
		return 1;
	else
		return nb * ft_recursive_factorial(nb -1);
}

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_putnbr(int nb)
{
  long i;
  i = nb;

  if (i < 0)
  {
    ft_putchar('-');
    i = i * (-1);
  }
  if (i > 9)
  {
    ft_putnbr(i / 10);
    ft_putnbr(i % 10);
  }
  else if (i < 10)
  {
    ft_putchar(i + '0');
  }
}

int main(void)
{
int nb_factorial;

nb_factorial = ft_recursive_factorial(4);
ft_putnbr(nb_factorial);

}