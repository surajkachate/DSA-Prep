#include<iostream>
using namespace std;

void print1_N(int n){
    if(n==0) return;
    print1_N(n-1);
    cout<<n<<" ";
}

void printN_1(int n){
    if(n==0) return;
    cout<<n<<" ";
    printN_1(n-1);
}

int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}

int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

int power(int x, int n){
    if(n==0) return 1;
    return x*power(x,n-1);
}

int fib(int n){
    if(n==0 || n==1) return n;
    return fib(n-1)+fib(n-2);
}

void reverse(string &str, int s, int e){
    if(s>=e) return;
    swap(str[s], str[e]);
    reverse(str,++s,--e);
}

int sumOfDigits(int n){
    if(n==0) return 0;
    return (n%10)+sumOfDigits(n/10);
}

int main(){
    print1_N(5);
    cout<<endl;
    printN_1(5);
    cout<<endl;
    cout<<sum(5);
    cout<<endl;
    cout<<factorial(5);
    cout<<endl;
    cout<<power(2,5);
    cout<<endl;
    cout<<fib(10);
    cout<<endl;
    string str="Hello";
    reverse(str,0,str.size()-1);
    cout<<str;
    cout<<endl;
    cout<<sumOfDigits(12345);
    return 0;
}