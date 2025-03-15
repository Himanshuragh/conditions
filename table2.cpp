#include<iostream>
using namespace std;
int main(){
    int a,x=1; 
    cout<<"enter your number \n";
    cin>>a;
    cybrom :
    if(x<=10)
    { cout<<a<< "x"<< x<<"="<<a*x<< "\n";
     x++;
    goto cybrom;
    }
}