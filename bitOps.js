// bitOps.js

function multiplyBy2Bitwise(x) {
  return x << 1;
}

function multiplyBy2Traditional(x) {
  return x * 2;
}

function isPowerOf2Bitwise(x) {
  return x > 0 && (x & (x - 1)) === 0;
}

function isPowerOf2Traditional(x) {
  if (x <= 0) return false;
  while (x % 2 === 0) x /= 2;
  return x === 1;
}

function countOnesBitwise(x) {
  let count = 0;
  while (x) {
    x &= x - 1;
    count++;
  }
  return count;
}

function countOnesTraditional(x) {
  let count = 0;
  while (x) {
    count += x % 2;
    x = Math.floor(x / 2);
  }
  return count;
}

module.exports = {
  multiplyBy2Bitwise,
  multiplyBy2Traditional,
  isPowerOf2Bitwise,
  isPowerOf2Traditional,
  countOnesBitwise,
  countOnesTraditional,
};
