#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;


int sum(int ge[], int m) {
    int sum = 0;
    for (int i = 0; i < m; i++)
    sum += ge[i]*pow(10,m-1) ;
    return sum;
    }


int main() {

    int n = 0;
    int m = 0;
    int p = 0;
    int ge[100];
    int nums[20];
    do
    {
        if(getchar()>='48'&&getchar()<='57')
        {
            ge[p++]=getchar()-'0';
            m++;


        }
        else if(!(getchar()>='48'&&getchar()<='57'))
        {
            break;
        }

    } while  (getchar() != '32');
    
    

   

  
    

        cout << "There are "<<n<<" integers:";
        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }
    
    cout << endl;
    
    return 0;
}