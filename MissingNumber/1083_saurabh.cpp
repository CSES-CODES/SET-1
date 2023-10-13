/*#include <iostream>
#include <algorithm> 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    t--;
    int arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + t); 
    
    for (int i = 0; i < t; i++) {
        if ((1+arr[i]) != arr[i + 1]) { 
            cout << (arr[i] +1) << endl;
            break;
        }
    }
 
    return 0;
}
*/
 
 
#include <iostream>
#include <algorithm> 
using namespace std;
 
int main() {
    long t;
    cin >> t;
    long long arr[t-1];
    for (int i = 0; i < t-1; i++) {
        cin >> arr[i];
    }
    //total sum 
     long long total = (t*(t+1))/2;
    
    for (int i = 0; i < t-1; i++) {
       total-=arr[i];
    }
 cout <<total;
    return 0;
}
