const palindrome = (num) => {
  let numStr = num.toString().split("");
  return numStr.join("") === numStr.reverse().join("");
};

let num = 121;
console.log(`The Number is palindrome ${palindrome(num)}`);
