#include<iostream>
#include<stdio.h>
using namespace std;
   bool palindrome(int n)
{
    // Write your code here
    int a = n;
    int r = 0;
    while(n!=0){
        int x = n%10;
         n /= 10;
        int r = (r*10)+x;
       
    }
    if(a==r){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    palindrome(2334134);
    return 0;
}