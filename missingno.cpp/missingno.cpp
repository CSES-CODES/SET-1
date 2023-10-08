#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    long long n; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    } 
    long long total=(n*(n+1))/2; 
    long long sum=0; 
    for(int i=0;i<n-1;i++){ 
        sum+=arr[i]; 
    } 
    cout<<total-sum; 
    return 0; 

}