#include<iostream>
using namespace std;
int main(){
   int amount;
   cout<<"enter amount :";
   cin>>amount;
   int rs1=0 ,rs2=0, rs5=0, rs10=0, rs20=0, rs50=0, rs100=0, rs200=0, rs500=0;

   if(amount >=500)
   {
    rs500=amount/500;
    amount=amount%500;
   }

   
   if(amount >=200)
   {
    rs200=amount/200;
    amount=amount%200;

   }



   
   if(amount >=100)
   {
    rs100=amount/100;
    amount=amount%100;

   }


   
   if(amount >=50)
   {
    rs50=amount/50;
    amount=amount%50;

   }


   if(amount >=20)
   {
    rs20=amount/20;
    amount=amount%20;

   }

   if(amount >=10)
   {
    rs10=amount/10;
    amount=amount%10;

   }
 

   if(amount >=5)
   {
    rs5=amount/5;
    amount=amount%5;

   }


   cout<<"no of 500notes ="<<rs500 <<"\n";
   cout<<"no of 200notes ="<<rs200 <<"\n";
   cout<<"no of 100notes ="<<rs100 <<"\n";
   cout<<"no of 50notes ="<<rs50 <<"\n";
   cout<<"no of 20notes ="<<rs20 <<"\n";
   cout<<"no of 10notes ="<<rs10 <<"\n";
   cout<<"no of 5notes ="<<rs5 <<"\n" ;
   cout<<"no of 1notes ="<<rs1 <<"\n" ;


}
