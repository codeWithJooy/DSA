#include<iostream>
using namespace std;

int countDigit(int n){
    int count=0;
    while(n){
      count++;
      n=n/10;
    }
    return count;
}
int main(){
    int num=12345;
    cout<<"Total Number of Digits in "<<num<<" is "<<countDigit(num);
    return 0;
}