#include<iostream>
using namespace std;
int main(){
    int n= 6;
    int count=1;
    
    for(int i=0;i<n;i++){
        int num = n-i;
        
        for(int k=0;k<=i;k++){
        cout<<" ";
        }
        
        for(int j=num;j>0;j--){
           
            if(count<=9){
                
            cout<<count<<" ";
                
                }
                else if (count%2==0&&count>9){
                    
            cout<<"0"<<" ";
                    
                    
                    }
                    else{
                        
                          cout<<"9"<<" ";
                        }
    
            
            count++;
            
            }
            
            
            cout<<endl;}
            
            
            count = 21;
            
            
       
        for(int i=n-1;i>0;i--){
        int num =n-i;
        for(int k=i;k>0;k--){
        cout<<" ";
        }
        // for(int j=num+1;j>0;j--){
             for(int j=0;j<=num;j++){
                if(count%2==0&&count>9){
                    cout<<"9"<<" ";
                }
                else if(count%2!=0&&count>9){
                    cout<<"0"<<" ";
                }
                else if(count<=9&&count!=0){
                    cout<<count-1<<" ";
                    

                }
                count--;
           
            }
            cout<<endl;}
    
    return 0;
    
    }