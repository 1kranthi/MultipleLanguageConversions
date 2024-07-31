import time

# Bitwise Operations
def bitwise_multiply(x, y):
    result = 0
    while y > 0:
        if y & 1:
            result += x
        x <<= 1
        y >>= 1
    return result

def bitwise_subtract(x, y):
    while y != 0:
        borrow = (~x) & y
        x ^= y
        y = borrow << 1
    return x

def is_power_of_2_bitwise(x):
    return x > 0 and (x & (x - 1)) == 0

def count_ones_bitwise(x):
    count = 0
    while x:
        x = x & (x - 1)
        count += 1
    return count

# Traditional Operations
def multiply_by_2_traditional(x):
    return x * 2

def is_power_of_2_traditional(x):
    if x <= 0:
        return False
    while x % 2 == 0:
        x //= 2
    return x == 1

def count_ones_traditional(x):
    count = 0
    while x:
        count += x % 2
        x //= 2
    return count

def main():
    num = int(input("Enter an integer: "))

    # Timing Bitwise Multiplication
    start_time = time.time()
    result_bitwise = bitwise_multiply(num, 2)
    end_time = time.time()
    print(f"Bitwise multiplication result: {result_bitwise}, Time: {end_time - start_time} seconds")

    # Timing Traditional Multiplication
    start_time = time.time()
    result_traditional = multiply_by_2_traditional(num)
    end_time = time.time()
    print(f"Traditional multiplication result: {result_traditional}, Time: {end_time - start_time} seconds")

    # Timing Bitwise Power of 2 Check
    start_time = time.time()
    power_of_2_bitwise = is_power_of_2_bitwise(num)
    end_time = time.time()
    print(f"Bitwise power of 2 check: {power_of_2_bitwise}, Time: {end_time - start_time} seconds")

    # Timing Traditional Power of 2 Check
    start_time = time.time()
    power_of_2_traditional = is_power_of_2_traditional(num)
    end_time = time.time()
    print(f"Traditional power of 2 check: {power_of_2_traditional}, Time: {end_time - start_time} seconds")

    # Timing Bitwise Count of 1s
    start_time = time.time()
    count_ones_bitwise_result = count_ones_bitwise(num)
    end_time = time.time()
    print(f"Bitwise count of 1s: {count_ones_bitwise_result}, Time: {end_time - start_time} seconds")

    # Timing Traditional Count of 1s
    start_time = time.time()
    count_ones_traditional_result = count_ones_traditional(num)
    end_time = time.time()
    print(f"Traditional count of 1s: {count_ones_traditional_result}, Time: {end_time - start_time} seconds")

if __name__ == "__main__":
    main()