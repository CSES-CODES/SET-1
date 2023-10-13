#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    string str; 
    cin>>str;  
    vector<int>vt;
    unordered_map<int,int>mp; 
    for(int i=0;i<str.length();i++){ 
        mp[str[i]]++;
    } 
    for(auto ch:mp){  
        vt.push_back(ch.second);

    } 
    int maxi=INT_MIN; 
    for(int i=0;i<vt.size();i++){ 
        if(vt[i]>maxi) 
        maxi=vt[i];
    } 
    cout<<maxi<<" "; 
    
    return 0; 


}