#include <iostream> 
using namespace std; 


int sum(int n) 

{ 

    if (n > 0) 

    { 

        return n + sum(n-1); 

    } 

    else 

    { 

        return 0; 

    } 

} 


int main() 

{ 

    int stop; 

    cout << "Enter a number: "; 

    cin >> stop; 

  

    int result = sum(stop); 

  

    cout << "Sum = " << result << endl; 

  

    return 0; 

  

} 

 