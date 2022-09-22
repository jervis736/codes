#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <complex.h>

typedef struct interstruct
{
    float a;
    float b;
    float c;
    float x0;
    float x1;
    float x2;
    float xt;
    float yt;
    float zt;
    float xt1;
    float yt1;
    float zt1;
    float vector_a;
    float vector_b;
    float vector_c;
    float delta;
    float solution_a;
    float solution_b;
    float equation_a;
    float equation_b;
    float equation_c;
    float square_radius;
    float radiant;
    float tang_square;
} interstruct;

void usage(void);
int init_struct(struct interstruct interstruct, char **av);
int calcul_sphere(struct interstruct interstruct, char **av);
int calcul_cylinder(struct interstruct interstruct, char **av);
int calcul_cone(struct interstruct interstruct, char **av);
void calc(struct interstruct interstruct, char **av);
void is_positive(struct interstruct interstruct);
void delta_null(struct interstruct interstruct);
void is_negative(struct interstruct interstruct);


