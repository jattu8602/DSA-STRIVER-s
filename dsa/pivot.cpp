#include<iostream>
#include<stdio.h>
using namespace std;
int getPivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid= s+(e-s)/2;
    }
    return e;//you can return both e and s;


}
   
int main(){
    int arr[5] = {2,3,45,56,3};
    cout<<"pivot is:"<<getPivot(arr,5);
    
    
    return 0;
}