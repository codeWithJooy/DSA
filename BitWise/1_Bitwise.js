const And = (num1, num2) => {
  return num1 & num2;
};

const OR = (num1, num2) => {
  return num1 | num2;
};

const Xor = (num1, num2) => {
  return num1 ^ num2;
};

num1 = 12;
num2 = 25;
console.log(`Bitwise And of ${num1} and ${num2} is ${And(num1, num2)}`);

console.log(`Bitwise OR of ${num1} and ${num2} is ${OR(num1, num2)}`);

console.log(`Bitwise Xor of ${num1} and ${num2} is ${Xor(num1, num2)}`);
