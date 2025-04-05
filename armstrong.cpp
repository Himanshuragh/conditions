#include<iostream>
using namespace std;
int main(){
    int num,sum=0,remainder=0,k;
    cout<<"Enter your number";  //124
    cin>>num;
    num=k;

    while(num>0)
    {
        remainder=num%10;       //4      //2         //1
        sum=sum + (remainder*remainder*remainder); // 4*4*4     // 4*4*4+ 2*2*2
        num = num/10;      //12            //1
    }
    

        if(sum==k)
        {
            cout<<"yes it is" <<sum;
        }
        else{
            cout<<"no" <<sum;
        }
}