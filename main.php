<?php
function multiplyBy2Bitwise($x) {
    return $x << 1;
}

function multiplyBy2Traditional($x) {
    return $x * 2;
}

function isPowerOf2Bitwise($x) {
    return $x > 0 && ($x & ($x - 1)) == 0;
}

function isPowerOf2Traditional($x) {
    if ($x <= 0) return 0;
    while ($x % 2 == 0) $x /= 2;
    return $x == 1;
}

function countOnesBitwise($x) {
    $count = 0;
    while ($x) {
        $x = $x & ($x - 1);
        $count++;
    }
    return $count;
}

function countOnesTraditional($x) {
    $count = 0;
    while ($x) {
        $count += $x % 2;
        $x = intdiv($x, 2);
    }
    return $count;
}

// Prompt user for input
echo "Enter an integer: ";
$handle = fopen ("php://stdin","r");
$input = fgets($handle);
$num = (int) trim($input);

// Check if input is valid
if (!is_int($num)) {
    echo "Please provide a valid integer.\n";
    exit(1);
}

// Time calculations
$start = microtime(true);
$resultBitwise = multiplyBy2Bitwise($num);
$end = microtime(true);
$duration = ($end - $start) * 1000;
echo "Bitwise multiplication result: $resultBitwise, Time: {$duration} ms\n";

$start = microtime(true);
$resultTraditional = multiplyBy2Traditional($num);
$end = microtime(true);
$duration = ($end - $start) * 1000;
echo "Traditional multiplication result: $resultTraditional, Time: {$duration} ms\n";

$start = microtime(true);
$powerOf2Bitwise = isPowerOf2Bitwise($num);
$end = microtime(true);
$duration = ($end - $start) * 1000;
echo "Bitwise power of 2 check: $powerOf2Bitwise, Time: {$duration} ms\n";

$start = microtime(true);
$powerOf2Traditional = isPowerOf2Traditional($num);
$end = microtime(true);
$duration = ($end - $start) * 1000;
echo "Traditional power of 2 check: $powerOf2Traditional, Time: {$duration} ms\n";

$start = microtime(true);
$countOnesBitwiseResult = countOnesBitwise($num);
$end = microtime(true);
$duration = ($end - $start) * 1000;
echo "Bitwise count of 1s: $countOnesBitwiseResult, Time: {$duration} ms\n";

$start = microtime(true);
$countOnesTraditionalResult = countOnesTraditional($num);
$end = microtime(true);
$duration = ($end - $start) * 1000;
echo "Traditional count of 1s: $countOnesTraditionalResult, Time: {$duration} ms\n";
?>