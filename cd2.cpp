#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter your amount: ";
    cin >> a;

    if (a % 5!= 0) 
    {
        cout << "Invalid amount! Must be divisible by 5";
    } 
    
    
      else 
      {
        
        int remaining = a;

        // 500 notes
        int n500 = remaining / 500;
        remaining %= 500;
        if (n500 > 0) 
        {
            cout << "500 notes: " << n500 << "\n";
        }
        
        // 100 notes
        int n100 = remaining / 100;
        remaining %= 100;
        if (n100 > 0) 
        {
            cout << "100 notes: " << n100 << "\n";
        }
        
        // 50 notes
        int n50 = remaining / 50;
        remaining %= 50;
        if (n50 > 0) 
        {
            cout << "50 notes: " << n50 << "\n";
        }
        
        // 20 notes
        int n20 = remaining / 20;
        remaining %= 20;
        if (n20 > 0) 
        {
            cout << "20 notes: " << n20 << "\n";
        }

        // 10 notes
        int n10 = remaining / 10;
        remaining %= 10;
        if (n10 > 0) 
        {
            cout << "10 notes: " << n10 << "\n";
        }
        
        // 5 notes
        int n5 = remaining / 5;
        if (n5 > 0) 
        {
            cout << "5 notes: " << n5 << "\n";
        }
    }
    return 0;
}