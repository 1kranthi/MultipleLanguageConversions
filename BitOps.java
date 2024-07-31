public class BitOps {

    // Bitwise Operations
    public static int bitwiseMultiply(int x, int y) {
        int result = 0;
        while (y > 0) {
            if ((y & 1) != 0) {
                result += x;
            }
            x <<= 1;
            y >>= 1;
        }
        return result;
    }

    public static int bitwiseSubtract(int x, int y) {
        while (y != 0) {
            int borrow = (~x) & y;
            x ^= y;
            y = borrow << 1;
        }
        return x;
    }

    public static boolean isPowerOf2Bitwise(int x) {
        return (x > 0) && ((x & (x - 1)) == 0);
    }

    public static int countOnesBitwise(int x) {
        int count = 0;
        while (x != 0) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    }

    // Traditional Operations
    public static int multiplyBy2Traditional(int x) {
        return x * 2;
    }

    public static boolean isPowerOf2Traditional(int x) {
        if (x <= 0) return false;
        while (x % 2 == 0) {
            x /= 2;
        }
        return x == 1;
    }

    public static int countOnesTraditional(int x) {
        int count = 0;
        while (x != 0) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    }
}