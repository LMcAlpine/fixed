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

    // convert int to fixed
    fixed_t f = 3 << 16;
    // convert fixed to int
    int g = f >> 16;

    // 9
    fixed_t prod = FixedMul(f, f);


    fixed_t num = ConvertToFixed(4.25);
    // multiply by two
    fixed_t numTwice = num << 1;

    // losing precision 
    int numDec = numTwice >> 16;
    float eight = 8.5;


}

fixed_t FixedMul(fixed_t a, fixed_t b)
{
    fixed_t product = ((long long)a * (long long)b) >> FRACBITS;
}

fixed_t ConvertToFixed(float num)
{
    return num * FRACUNIT;
}
