#include<iostream>
#include<stdio.h>
using namespace std;
   
int main(){
    int n;
    cin>>n;
    int row = 1;
    char ch = 'A';
   
    while(row<=n){
        int col = 1;
        while(col<=row){
           
            cout<<ch<<" ";
            ch++;
            
           
            col++;
        }
       cout<< endl;
       row++;

    }
    return 0;
}