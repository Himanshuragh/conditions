#include<iostream>
using namespace std;
int main(){
    int base, power,f=1,k=1;
    cout<<"enter base and power\n";
    cin>>base>>power;

    while(f<=power)        
    {
        k=k*base;      
        f++;          
    }
    cout<<k;
        

}