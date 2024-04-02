#include<iostream>
using namespace std;
int Maximum(int a, int b){
    if(a>b){
       return a;
    }
    
        return b;
}
void swap(int &a,int &b){
    int x = a;
    a = b;
    b = x;

}
int main(){
    int test , a ,b,r;
    cin>>test;
    cin>>a>>b;

    switch(test){
        case 1:
       { r =Maximum(a,b);
        cout<<r;
        break;}
        case 2:{
         swap(a,b);
       cout<<a<<" "<<b;
        break;}
       default:{
   cout<<"invalid";}
}
return 0;
}