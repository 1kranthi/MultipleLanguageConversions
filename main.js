// main.js

const { performance } = require("perf_hooks");
const readline = require("readline");
const {
  multiplyBy2Bitwise,
  multiplyBy2Traditional,
  isPowerOf2Bitwise,
  isPowerOf2Traditional,
  countOnesBitwise: bitwiseCountOnes,
  countOnesTraditional: traditionalCountOnes,
} = require("./bitOps");

// Create an interface to read user input from the command line
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

// Prompt the user to enter an integer
rl.question("Enter an integer: ", (input) => {
  const num = parseInt(input, 10);

  if (isNaN(num)) {
    console.error("Please provide a valid integer.");
    rl.close();
    process.exit(1);
  }

  let start, end, duration;

  // Multiply by 2
  start = performance.now();
  let resultBitwise = multiplyBy2Bitwise(num);
  end = performance.now();
  duration = end - start;
  console.log(
    `Bitwise multiplication result: ${resultBitwise}, Time: ${duration} ms`
  );

  start = performance.now();
  let resultTraditional = multiplyBy2Traditional(num);
  end = performance.now();
  duration = end - start;
  console.log(
    `Traditional multiplication result: ${resultTraditional}, Time: ${duration} ms`
  );

  // Power of 2 check
  start = performance.now();
  let powerOf2Bitwise = isPowerOf2Bitwise(num);
  end = performance.now();
  duration = end - start;
  console.log(
    `Bitwise power of 2 check: ${powerOf2Bitwise}, Time: ${duration} ms`
  );

  start = performance.now();
  let powerOf2Traditional = isPowerOf2Traditional(num);
  end = performance.now();
  duration = end - start;
  console.log(
    `Traditional power of 2 check: ${powerOf2Traditional}, Time: ${duration} ms`
  );

  // Count ones
  start = performance.now();
  let countOnesBitwiseResult = bitwiseCountOnes(num);
  end = performance.now();
  duration = end - start;
  console.log(
    `Bitwise count of 1s: ${countOnesBitwiseResult}, Time: ${duration} ms`
  );

  start = performance.now();
  let countOnesTraditionalResult = traditionalCountOnes(num);
  end = performance.now();
  duration = end - start;
  console.log(
    `Traditional count of 1s: ${countOnesTraditionalResult}, Time: ${duration} ms`
  );

  // Close the readline interface
  rl.close();
});
