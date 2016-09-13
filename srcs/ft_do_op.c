#include "do_op.h"

void    add(int a, int b)
{
    ft_putnbr(a + b);
}

void    sub(int a, int b)
{
    ft_putnbr(a - b);
}

void    mlt(int a, int b)
{
    ft_putnbr(a * b);
}

void    divi(int a, int b)
{
    if (b == 0)
        ft_putstr("Stop : divis ion by zero");
    else
        ft_putnbr(a / b);
}

void    mod(int a, int b)
{
    if (b == 0)
        ft_putstr("Stop : modulo by zero");
    else
        ft_putnbr(a % b);
}
