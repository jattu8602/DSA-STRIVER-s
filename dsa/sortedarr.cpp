#include<iostream>
#include<stdio.h>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            
                ans = mid;
                e = mid-1;

        }
        else if(arr[mid] > key){//left part
            e = mid-1;
        }
        else if(arr[mid]<key){//right part
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            
                ans = mid;
                s  = mid+1;

        }
        else if(arr[mid] > key){//left part
            e = mid-1;
        }
        else if(arr[mid]<key){//right part
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

   
int main(){
    int even[8] = {1,2,4,4,4,5,6,6};
    int odd[9] = {1,2,4,4,4,5,6,6,7};
    cout<<"First Occurence of 4 is at index "<<firstOcc(even,8,4)<<endl;
    cout<<"Last Occurence of 4 is at index "<<lastOcc(even,8,4)<<endl;
    cout<<"First Occurence of 7 is at index "<<firstOcc(odd,9,7)<<endl;
    cout<<"Last Occurence of 7 is at index "<<lastOcc(odd,9,7)<<endl;
    cout<<"First Occurence of 4 is at index "<<firstOcc(odd,9,4)<<endl;
    cout<<"Last Occurence of 4 is at index "<<lastOcc(odd,9,4)<<endl;
    cout<<"First Occurence of 1 is at index "<<firstOcc(odd,9,1)<<endl;
    cout<<"Last Occurence of 1 is at index "<<lastOcc(odd,9,1)<<endl;
    cout<<"First Occurence of 6 is at index "<<firstOcc(odd,9,6)<<endl;
    cout<<"Last Occurence of 6 is at index "<<lastOcc(odd,9,6)<<endl;
    cout<<"First Occurence of 5 is at index "<<firstOcc(odd,9,5)<<endl;
    cout<<"Last Occurence of 5 is at index "<<lastOcc(odd,9,5)<<endl;
    cout<<"First Occurence of 2 is at index "<<firstOcc(odd,9,2)<<endl;
    cout<<"Last Occurence of 2 is at index "<<lastOcc(odd,9,2)<<endl;
    cout<<"First Occurence of 3 is at index "<<firstOcc(odd,9,3)<<endl;
    cout<<"Last Occurence of 3 is at index "<<lastOcc(odd,9,3)<<endl;
    cout<<"First Occurence of 8 is at index "<<firstOcc(odd,9,8)<<endl;

    
    return 0;
}