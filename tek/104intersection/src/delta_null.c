#include "../include/struct.h"

void delta_null(struct interstruct interstruct)
{
    interstruct.x0 = (interstruct.equation_b * (-1)) / (2 * interstruct.equation_a);
    interstruct.xt = interstruct.a + interstruct.vector_a * interstruct.x0;
    interstruct.yt = interstruct.b + interstruct.vector_b * interstruct.x0;
    interstruct.zt = interstruct.c + interstruct.vector_c * interstruct.x0;

    printf("1 intersection point:\n");
    printf("(%.3f, %.3f, %.3f)\n", interstruct.xt, interstruct.yt, interstruct.zt);
}
