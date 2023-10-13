//you are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
 
 
#include <iostream>
using namespace std ;
int main(){
	string s;
	cin>>s;
	long long count =1 , maxcount =0;
 
	for(int i =0;i< s.size()-1;i++)
	{
		if(s[i]==s[i+1])
		count++;
		else
		count=1;
		if(maxcount<count)
		maxcount=count ;
	}
		if (s.size()==1)cout<<1;
	else
	cout <<maxcount ;
	return 0;
}