#include "../include/struct.h"

int calcul_sphere(struct interstruct interstruct, char **av)
{
    printf("Sphere of radius %.0f\n", interstruct.square_radius);
    printf("Line passing through the point (%.0f, %.0f, %.0f) and parallel to the vector (%.0f, %.0f, %.0f)\n", interstruct.a, interstruct.b, interstruct.c, interstruct.vector_a, interstruct.vector_b, interstruct.vector_c);

    interstruct.equation_a = pow(interstruct.vector_a, 2) + pow(interstruct.vector_b, 2) + pow(interstruct.vector_c, 2);
    interstruct.equation_b = ((interstruct.a * interstruct.vector_a) + (interstruct.b * interstruct.vector_b) + (interstruct.c * interstruct.vector_c)) * 2;
    interstruct.equation_c = (pow(interstruct.a, 2) + pow(interstruct.b, 2) + pow(interstruct.c, 2)) - pow(interstruct.square_radius, 2);
    interstruct.delta = pow(interstruct.equation_b, 2) - (4 * interstruct.equation_a * interstruct.equation_c);

    if (interstruct.delta < 0)
        is_negative(interstruct);
    else if (interstruct.delta > 0)
        is_positive(interstruct);
    else if (interstruct.delta == 0)
        delta_null(interstruct);
    
    return 0;
}

int calcul_cylinder(struct interstruct interstruct, char **av)
{
    printf("Cylinder of radius %.0f\n", interstruct.square_radius);
    printf("Line passing through the point (%.0f, %.0f, %.0f) and parallel to the vector (%.0f, %.0f, %.0f)\n", interstruct.a, interstruct.b, interstruct.c, interstruct.vector_a, interstruct.vector_b, interstruct.vector_c);
    
    interstruct.equation_a = pow(interstruct.vector_a, 2) + pow(interstruct.vector_b, 2) + pow(interstruct.vector_c, 2);
    interstruct.equation_b = ((interstruct.a * interstruct.vector_a) + (interstruct.b * interstruct.vector_b) + (interstruct.c * interstruct.vector_c)) * 2;
    interstruct.equation_c =  pow(interstruct.square_radius, 2) * (- 1);
    interstruct.delta = pow(interstruct.equation_b, 2) - (4 * interstruct.equation_a * interstruct.equation_c);

    if (interstruct.delta < 0)
        is_negative(interstruct);
    else if (interstruct.delta > 0)
        is_positive(interstruct);
    else if (interstruct.delta == 0)
        delta_null(interstruct);
    return (0);
}

int calcul_cone(struct interstruct interstruct , char **av)
{
    if (interstruct.square_radius >= 90)
        exit(84);
    
    printf("Cone with a %.0f degree angle\n", interstruct.square_radius);
    printf("Line passing through the point (%.0f, %.0f, %.0f) and parallel to the vector (%.0f, %.0f, %.0f)\n", interstruct.a, interstruct.b, interstruct.c, interstruct.vector_a, interstruct.vector_b, interstruct.vector_c);
    interstruct.equation_a = pow(interstruct.vector_a, 2) + pow(interstruct.vector_b, 2) + ((pow(interstruct.vector_c, 2)) * interstruct.tang_square * (-1));
    interstruct.equation_b = ((interstruct.a * interstruct.vector_a) + (interstruct.b * interstruct.vector_b) + ((interstruct.c * interstruct.vector_c) * interstruct.tang_square) * (-1)) * 2;
    interstruct.equation_c = pow(interstruct.a, 2) + pow(interstruct.b, 2) + ((pow(interstruct.c, 2)) * interstruct.tang_square * (-1));
    interstruct.delta = pow(interstruct.equation_b, 2) - (4 * interstruct.equation_a * interstruct.equation_c);
 
    if (interstruct.delta < 0)
        delta_null(interstruct);
    else if (interstruct.delta > 0)
        is_positive(interstruct);
    else if (interstruct.delta == 0)
        delta_null(interstruct);
    return 0;
}

int init_struct(struct interstruct interstruct, char **av)
{
    interstruct.a = atof(av[2]);
    interstruct.b = atof(av[3]);
    interstruct.c = atof(av[4]);
    interstruct.vector_a = atof(av[5]);
    interstruct.vector_b = atof(av[6]);
    interstruct.vector_c = atof(av[7]);
    interstruct.square_radius = atof(av[8]);
    if (interstruct.vector_a == 0 && interstruct.vector_b == 0 && interstruct.vector_c == 0)
        exit(84);
    if (interstruct.square_radius < 0)
        exit (84);

    interstruct.radiant = interstruct.square_radius * (M_PI / 180);
    interstruct.tang_square = tan(interstruct.radiant) * tan(interstruct.radiant);
    calc(interstruct, av);
    return (0);
}