#include <iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter Your Number:";
        cin>>n;
        
       int arr[n];
       int len= sizeof(arr) /sizeof(int);
       for(int idx=0;idx <=len-1; idx++){
        cin>> arr[idx];
       }
       for(int idx=0;idx <=len-1; idx++){
        cout<<arr[idx]<<", ";
       }
    return 0;
}