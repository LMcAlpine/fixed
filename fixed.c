#include "fixed.h"
#include <stdio.h>

int main()
{

    // multiply by FRACUNIT to convert to fixed point
    // int a = 0.5*FRACUNIT;
    // int b = 3.75*FRACUNIT;
    fixed_t a = ConvertToFixed(0.5);
    fixed_t b = ConvertToFixed(3.75);
    fixed_t sum = a + b;

    fixed_t c = ConvertToFixed(2.5);
    fixed_t d = c + ConvertToFixed(2);

    // 0.25
    fixed_t e = c / 10;
}

fixed_t ConvertToFixed(float num)
{
    return num * FRACUNIT;
}