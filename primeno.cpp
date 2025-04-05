#include<iostream>
using namespace std;
int main(){
    int num=2;
    while(num<20)
       {      
        int i=2, f=0;

          while(i<num)
            {
                  if(num%i==0)
                 {
                    f++;
                     break;
                   }
                     i++;
           } 
            
            if(f==0){
            cout<<num<<"\t";
             }
            
         num++;
      }

}