#include<iostream>
#include<stdio.h>
using namespace std;
   
int main(){
    int n = 15;
    //for upper part
    int space  = 2*n-2;
    for(int i = 1; i<=n;i++){

        for(int j = 1;j<=i;j++){
            cout<<"*"<<" ";
        }
        for(int j = 1;j<=space*2;j++) {
        	cout << " ";

        }
        for(int j = 1;j<=i;j++){
            cout<<"*"<<" ";
        }
        space-=2;
        cout<<"\n";


    }
    //for lower part
    int spaces = 1;
    int i,j;
   for(i = 1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<"*"<<" ";
    }

   
        for(j = 1;j<=(spaces*2)+2;j++){
            cout<<" ";


    }
    for(j=1;j<=n-i;j++){
        cout<<"*"<<" ";
    }
    spaces+=2;
    cout<<"\n";
}
    return 0;
}