#include "bit_ops.h"

int multiplyBy2Bitwise(int x)
{
    return x << 1;
}

int multiplyBy2Traditional(int x)
{
    return x * 2;
}

bool isPowerOf2Bitwise(int x)
{
    return x > 0 && (x & (x - 1)) == 0;
}

bool isPowerOf2Traditional(int x)
{
    if (x <= 0)
        return false;
    while (x % 2 == 0)
        x /= 2;
    return x == 1;
}

int countOnesBitwise(int x)
{
    int count = 0;
    while (x)
    {
        x = x & (x - 1);
        count++;
    }
    return count;
}

int countOnesTraditional(int x)
{
    int count = 0;
    while (x)
    {
        count += x % 2;
        x /= 2;
    }
    return count;
}