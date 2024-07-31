#include <iostream>
#include <chrono>
#include "bit_ops.h"

using namespace std;
using namespace std::chrono;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    auto start = high_resolution_clock::now();
    int resultBitwise = multiplyBy2Bitwise(num);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start).count();
    cout << "Bitwise multiplication result: " << resultBitwise << ", Time: " << duration << " milliseconds" << endl;

    start = high_resolution_clock::now();
    int resultTraditional = multiplyBy2Traditional(num);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start).count();
    cout << "Traditional multiplication result: " << resultTraditional << ", Time: " << duration << " milliseconds" << endl;

    start = high_resolution_clock::now();
    bool powerOf2Bitwise = isPowerOf2Bitwise(num);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start).count();
    cout << "Bitwise power of 2 check: " << (powerOf2Bitwise ? "True" : "False") << ", Time: " << duration << " milliseconds" << endl;

    start = high_resolution_clock::now();
    bool powerOf2Traditional = isPowerOf2Traditional(num);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start).count();
    cout << "Traditional power of 2 check: " << (powerOf2Traditional ? "True" : "False") << ", Time: " << duration << " milliseconds" << endl;

    start = high_resolution_clock::now();
    int onesCountBitwise = countOnesBitwise(num);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start).count();
    cout << "Bitwise count of 1s: " << onesCountBitwise << ", Time: " << duration << " milliseconds" << endl;

    start = high_resolution_clock::now();
    int onesCountTraditional = countOnesTraditional(num);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start).count();
    cout << "Traditional count of 1s: " << onesCountTraditional << ", Time: " << duration << " milliseconds" << endl;

    return 0;
}