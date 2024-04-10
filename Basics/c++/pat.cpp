#include<iostream>
#include<stdio.h>
using namespace std;
   
int main(){
    int n ;
    cin>>n;
    int row = 1;
    while(row<=n){
        int space = row-1;
        while(space!=0){
            cout<<" ";
            space--;
            
        }
        int col = n-row+1;
        while(col!=0){
            cout<<row;
            col--;

        }
        cout<<endl;
        row++;
    }
    return 0;
}