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

int ft_fibonacci(int index)
{
  if (index < 0)
  {
    return -1;
  }

  if (index == 0)
  {
    return 0;
  }

  if (index == 1)
  {
    return 1;
  }
else return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

int main(void)
{
int nb_factorial;

nb_factorial = ft_fibonacci(4);
ft_putnbr(nb_factorial);

}