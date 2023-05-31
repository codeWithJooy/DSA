const And = (num1, num2) => {
  return num1 & num2;
};

const OR = (num1, num2) => {
  return num1 | num2;
};

const Xor = (num1, num2) => {
  return num1 ^ num2;
};

const Not = (num) => {
  return ~num;
};

const Left = (num1, num2) => {
  return num1 << num2;
};

let num1 = 12;
let num2 = 25;
let num = 2;
let leftNum = 8;
let leftBit = 2; //Number of Bits 1 for one bit and 2 for 2 bits.
console.log(`Bitwise And of ${num1} and ${num2} is ${And(num1, num2)}`);

console.log(`Bitwise OR of ${num1} and ${num2} is ${OR(num1, num2)}`);

console.log(`Bitwise Xor of ${num1} and ${num2} is ${Xor(num1, num2)}`);

console.log(`Bitwise Not of ${num} is ${Not(num)}`);

console.log(
  `Left shift of ${leftNum} by ${leftBit} bit(s) is ${Left(leftNum, leftBit)} `
);
