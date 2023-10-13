/*#include<bits/stdc++.h> 
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


}*/
//Ignore Above Code.. 
//try This 
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    string s; 
    cin>>s; 
    long long count=1; 
    long long maxcount=0; 
    for(int i=0;i<s.size()-1;i++){ 
        if(s[i]==s[i+1]) 
        count++; 
        else 
        count=1; 
        if(count>maxcount)  
        maxcount=count;

    } 
    //Edge Case 
    if(s.size()==1) 
    cout<<1; 
    else 
    cout<<maxcount; 
    return 0; 
    
}