#include<iostream>
using namespace std;

int checkPalindrome(int num){
    int duplicate=0;
    int copy=num;
    while(num){
        duplicate=duplicate*10+num%10;
        num=num/10;
    }
    if(copy==duplicate)
       return 1;
    return 0;
}

int main(){
    int num=121;
    cout<<"The Number "<< num <<" is palindrome ? "<<checkPalindrome(num);
    return 0;
}