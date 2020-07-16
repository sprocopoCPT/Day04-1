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