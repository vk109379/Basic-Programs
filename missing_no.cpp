// checks missing number from array
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i , temp;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i= 1 ; i <=n ; i++){
        temp = arr[i-1];
        if(i != temp){
            cout<< "Missing no. is"<<"  "<<i<<endl;
            break;
        }
        else if(i == n){
            cout<< "No Missing no. "<<endl;
        }        
    }
    return 0;
}