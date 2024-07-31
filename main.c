#include <stdio.h>
#include <time.h>
#include "bit_ops.h"

int multiply_by_2_bitwise(int x)
{
    return x << 1;
}

int multiply_by_2_traditional(int x)
{
    return x * 2;
}

int is_power_of_2_bitwise(int x)
{
    return x > 0 && (x & (x - 1)) == 0;
}

int is_power_of_2_traditional(int x)
{
    if (x <= 0)
        return 0;
    while (x % 2 == 0)
        x /= 2;
    return x == 1;
}

int count_ones_bitwise(int x)
{
    int count = 0;
    while (x)
    {
        x = x & (x - 1);
        count++;
    }
    return count;
}

int count_ones_traditional(int x)
{
    int count = 0;
    while (x)
    {
        count += x % 2;
        x /= 2;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int result_bitwise = multiply_by_2_bitwise(num);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bitwise multiplication result: %d, Time: %f seconds\n", result_bitwise, cpu_time_used);

    start = clock();
    int result_traditional = multiply_by_2_traditional(num);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Traditional multiplication result: %d, Time: %f seconds\n", result_traditional, cpu_time_used);

    start = clock();
    int power_of_2_bitwise = is_power_of_2_bitwise(num);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bitwise power of 2 check: %d, Time: %f seconds\n", power_of_2_bitwise, cpu_time_used);

    start = clock();
    int power_of_2_traditional = is_power_of_2_traditional(num);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Traditional power of 2 check: %d, Time: %f seconds\n", power_of_2_traditional, cpu_time_used);

    start = clock();
    int count_ones_bitwise_result = count_ones_bitwise(num);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bitwise count of 1s: %d, Time: %f seconds\n", count_ones_bitwise_result, cpu_time_used);

    start = clock();
    int count_ones_traditional_result = count_ones_traditional(num);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Traditional count of 1s: %d, Time: %f seconds\n", count_ones_traditional_result, cpu_time_used);

    return 0;
}