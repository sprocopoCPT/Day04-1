int ft_sqrt(int nb)
{
  int sqrt = 1;
  while (sqrt*sqrt < nb)
  {
    sqrt++;
  }

  if (sqrt*sqrt == nb)
  {
    return sqrt;
  }
  else
    return 0;
}