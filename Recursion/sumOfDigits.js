const sumOfDigits=(num)=>{
    if(num<1){
        return 0;
    }
    let sum=num%10
    return sum+sumOfDigits(Math.floor(num/10))
}

let number=7225

let sum=sumOfDigits(number)
console.log(`Sum of digit of number ${number} is ${sum}`)