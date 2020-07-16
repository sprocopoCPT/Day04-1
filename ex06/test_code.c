#include <unistd.h>

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

int ft_is_prime(int nb)
{
  int i = 1;
  int count = 0;

  if (nb < 2)
  {
    return 0;
  }

  while (i <= nb)
  {
    if (nb % i == 0)
    {
      count++;
    }
    i++;
  }

  if (count > 2)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

