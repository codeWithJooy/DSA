#include<iostream>
using namespace std;

int sumOfNaturalNumber(int num){
    if(num < 1)
       return 0;
    return num+sumOfNaturalNumber(num-1);
}

int main(){
    int num=5;
    int sum=sumOfNaturalNumber(num);

    cout<<"Sum of First "<<num<<" natural numer is "<<sum;
}