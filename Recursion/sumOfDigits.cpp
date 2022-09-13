#include<iostream>
using namespace std;

int sumOfDigits(int num){
    if(num < 1){
        return 0;
    }
    return (num%10)+sumOfDigits(num/10);
}

int main(){
    int number=7225;

    cout<<"Sum of digits of number "<<number<<" is "<<sumOfDigits(number);
}
