#include<iostream>
#include<stdio.h>
using namespace std;
   
int main(){
    int n = 5;
    
    for(int i = 1;i<=n;i++){
        char ch = 64;
        //for first half
        for(int j = 1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
             ch++;
            cout<<ch<<" ";
           

        }
        
    //for second half
        char ch1 = 64;
        for(ch1= i+ch1;ch1>='A';ch1--){
           
           
               cout<<ch1<<" ";
        
                 
        }

        





        cout<<"\n";
    }

    return 0;
}