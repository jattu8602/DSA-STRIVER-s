#include<iostream>
#include<stdio.h>
using namespace std;
   bool armstrong (int n){
    int original = n;
    int id;
    int sum = 0;
    int count = 0;
    while (n!=0) {
       
        count ++;
        n = n/10;

    }
    n = original;
    while(n!=0){
        id = n%10;
        sum += pow(id,count);
        n = n/10;


    }
    if(original == sum){
        cout<<"given number is armstrong";
        return true;
    }else{
        cout<<"Given number is not an Armstrong number.";
        return false;
    }
   }
int main(){
    cout<<"Enter a number: ";
    int num;    
    cin>>num;
    cout<<armstrong(num);
    
    return 0;
}