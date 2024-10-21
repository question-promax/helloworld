#include <iostream>

using namespace std;

int main() 
{   int a =100;
    while (a<1000)
    {
        if ((a/100) *(a/100)*(a/100)+(a%10)*(a%10)*(a%10)+(a/10-a/100*10)*(a/10-a/100*10)*(a/10-a/100*10)==a)
        {
            cout << a << endl;
        }
        a++;    
    }
    

    return 0;
}