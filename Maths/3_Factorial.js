const factorial = (num) => {
  if (num == 1 || num == 0) {
    return 1;
  }
  return num * factorial(num - 1);
};

const num = 5;
console.log(`Factorial of Number ${num} is ${factorial(num)}`);
