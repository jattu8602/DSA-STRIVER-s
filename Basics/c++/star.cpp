#include<iostream>
#include<stdio.h>
using namespace std;
   void nStarTriangle(int n) {
    // Write your code here.
    int row2 = 1;
    while(row2<=((n/2)+2)){
       if(n==1){
            int col2 = 1;
            while (col2 <= row2 - 1) {
              cout << "*";
              col2++;
            }
                 cout<<"\n";
        row2++;

       } 
            int col2 = 1;
            while (col2 <= row2) {
              cout << "*";
              col2++;
            
       }

        cout<<"\n";
        row2++;

    }
    int row1 = (n/2);
    while(row1){
        int col1 = row1;
        while(col1){
            cout<<"*";
            col1--;
        }
        cout<<"\n";
        row1--;

    }
}
int main(){
    int n;
    cin>>n;
    printf("Entered number is %d\n", n);
    nStarTriangle(n);
    
}