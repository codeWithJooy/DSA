const count_digits = (num) => {
  let count = 0;
  while (num) {
    count++;
    num = Math.floor(num / 10);
  }
  return count;
};

let num = 12345;
console.log(`Total Digits is number is ${count_digits(num)}`);
