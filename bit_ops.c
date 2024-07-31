#include "bit_ops.h"

int bitwise_multiply(int x, int y)
{
    int result = 0;
    while (y != 0)
    {
        if (y & 1)
        {
            result = result + x;
        }
        x <<= 1;
        y >>= 1;
    }
    return result;
}

int bitwise_subtract(int x, int y)
{
    while (y != 0)
    {
        int borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}