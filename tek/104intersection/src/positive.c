#include "../include/struct.h"

void is_positive(struct interstruct interstruct)
{
    interstruct.x1 = (interstruct.equation_b * (- 1) + sqrt(interstruct.delta)) / (2 * interstruct.equation_a);
    interstruct.x2 = (interstruct.equation_b * (- 1) - sqrt(interstruct.delta)) / (2 * interstruct.equation_a);
    interstruct.xt = interstruct.a + interstruct.vector_a * interstruct.x1;
    interstruct.yt = interstruct.b + interstruct.vector_b * interstruct.x1;
    interstruct.zt = interstruct.c + interstruct.vector_c * interstruct.x1;
    interstruct.xt1 = interstruct.a + interstruct.vector_a * interstruct.x2;
    interstruct.yt1 = interstruct.b + interstruct.vector_b * interstruct.x2;
    interstruct.zt1 = interstruct.c + interstruct.vector_c * interstruct.x2;

    printf("2 intersection points:\n");
    printf("(%.3f, %.3f, %.3f)\n", interstruct.xt, interstruct.yt, interstruct.zt);
    printf("(%.3f, %.3f, %.3f)\n", interstruct.xt1, interstruct.yt1, interstruct.zt1);
}
