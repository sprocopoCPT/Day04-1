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

int ft_iterative_power(int nb, int power)
{
  int temp = 1;

  if (power < 0)
  {
    return 0;
  }

  if (power == 0)
  {
    return 1;
  }
  
  while (power > 0)
  {
    temp = temp * nb;
    power--;
  }

  return temp;
}

int main(void)
{
int nb_factorial;

nb_factorial = ft_iterative_power(3, 3);
ft_putnbr(nb_factorial);

}