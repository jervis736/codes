#include "../include/struct.h"

void calc(struct interstruct interstruct, char **av)
{
    if (atof(av[1]) == 1)
        calcul_sphere(interstruct, av);
    else if (atof(av[1]) == 2)
        calcul_cylinder(interstruct, av);
    else if (atof(av[1]) == 3)
        calcul_cone(interstruct, av);
    else
        exit(84);
}

int main(int ac, char **av)
{
    struct interstruct interstruct;

    if (ac != 9)
        exit(84);
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h')
            usage();
    }
    int i = 1;
    int j = 0;
    while (i != ac - 1) {
        if (av[i][j] == '\0') {
            i++;
            j = 0;
        }
        if (av[i][j] < '0' || av[i][j] > '9')
            if (av[i][j] != '-')
                return (84);
        j++;
    }
    init_struct(interstruct, av);
    return (0);
}
