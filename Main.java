import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int num = scanner.nextInt();
        scanner.close();

        long startTime, endTime;
        double elapsedTime;

        System.out.println("JAVA BITWISE OPERATIONS");

        // Bitwise Multiplication
        startTime = System.nanoTime();
        int resultBitwise = BitOps.bitwiseMultiply(num, 2);
        endTime = System.nanoTime();
        elapsedTime = (endTime - startTime) / 1e6;
        System.out.printf("Bitwise multiplication result: %d, Time: %f milliseconds%n", resultBitwise, elapsedTime);

        // Traditional Multiplication
        startTime = System.nanoTime();
        int resultTraditional = BitOps.multiplyBy2Traditional(num);
        endTime = System.nanoTime();
        elapsedTime = (endTime - startTime) / 1e6;
        System.out.printf("Traditional multiplication result: %d, Time: %f milliseconds%n", resultTraditional, elapsedTime);

        // Bitwise Power of 2 Check
        startTime = System.nanoTime();
        boolean powerOf2Bitwise = BitOps.isPowerOf2Bitwise(num);
        endTime = System.nanoTime();
        elapsedTime = (endTime - startTime) / 1e6;
        System.out.printf("Bitwise power of 2 check: %b, Time: %f milliseconds%n", powerOf2Bitwise, elapsedTime);

        // Traditional Power of 2 Check
        startTime = System.nanoTime();
        boolean powerOf2Traditional = BitOps.isPowerOf2Traditional(num);
        endTime = System.nanoTime();
        elapsedTime = (endTime - startTime) / 1e6;
        System.out.printf("Traditional power of 2 check: %b, Time: %f milliseconds%n", powerOf2Traditional, elapsedTime);

        // Bitwise Count of 1s
        startTime = System.nanoTime();
        int countOnesBitwise = BitOps.countOnesBitwise(num);
        endTime = System.nanoTime();
        elapsedTime = (endTime - startTime) / 1e6;
        System.out.printf("Bitwise count of 1s: %d, Time: %f milliseconds%n", countOnesBitwise, elapsedTime);

        // Traditional Count of 1s
        startTime = System.nanoTime();
        int countOnesTraditional = BitOps.countOnesTraditional(num);
        endTime = System.nanoTime();
        elapsedTime = (endTime - startTime) / 1e6;
        System.out.printf("Traditional count of 1s: %d, Time: %f milliseconds%n", countOnesTraditional, elapsedTime);
    }
}