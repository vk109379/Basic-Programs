// print Nth term in fibonacci series
#include <bits/stdc++.h>
using namespace std;


  int fibonacci(int n)
    {
        if (n == 0)
        return 0;
        
        if(n ==1 || n == 2)
        return 1;
        
        if (n > 2){
           return fibonacci(n-1) + fibonacci(n-2);
        }
    };
int main() {
    cout << fibonacci(7);

    return 0;
}