// if n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one.
 
#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main()
{
	 long long  x ;
	cin>>x;	
while(x!=1)
{
 cout<<x<<" ";
if ((x & 1) == 0) {
	x=x/2;
}
else {
	x=(x*3)+1;
	}
}
cout << 1;
return 0;
}