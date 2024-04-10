#include<iostream>
#include<stdio.h>
using namespace std;
   
int main(){
    int n = 3;
     for(int i = 1;i<=n;i++){
        ///upper first half
        for(int j = 1;j<=n-i+1;j++){
            cout<<"*"<<" ";
        }
        //upper second half
        for(int j = 1;j <=(i-1)*4;j++){
            cout<<" ";
        }
         for(int j = 1;j<=n-i+1;j++){
            cout<<"*"<<" ";
        }
       
        cout<<"\n";
}
int space=2*n-2;
 for(int i = 1;i<=n;i++){
    
        ///lower first half
        for(int j = 1;j<=i;j++){
            cout<<"*"<<" ";
        }
        //lower second half
        for(int j= 1;j<=space*2;j++) {
            cout<<" ";
           
        }
         for(int j = 1;j<=i;j++){
            cout<<"*"<<" ";
        }
         space-=2;
       
        cout<<"\n";
}

    return 0;
}