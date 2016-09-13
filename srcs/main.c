#include "do_op.h"

void    init_tpf(t_tpf *tpf)
{
    tpf[0].op = '+';
    tpf[0].f = &add;    
    tpf[1].op = '-';
    tpf[1].f = &sub;
    tpf[2].op = '*';
    tpf[2].f = &mlt;
    tpf[3].op = '/';
    tpf[3].f = &divi;
    tpf[4].op = '%';
    tpf[4].f = &mod;
}

int main(int ac, char **av)
{
    int i;
    int k;
    t_tpf   tpf[5];

    if (ac == 4)
    {
        i = 0;
        k = 0;
        init_tpf(tpf);
        while (i < 5)
        {
            if (av[2][0] == tpf[i].op)
            {
                k = 1;
                tpf[i].f(ft_atoi(av[1]), ft_atoi(av[3]));
            }
            i++;
        }
        if (k == 0)
            ft_putchar('0');
        ft_putchar('\n');
    }
    return (0);
}
