#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b==0)
        return a;
    else
        return gcd (b,a%b);
}
int main(){
    int n;
	cin >> n;
    vector<int>arr(n+1,0);
    vector<int> prefGcd(n+1,0);
    vector<int> suffGcd(n+2,0);
	for (int i=1;i<=n;i++) cin>>arr[i];
    for (int i = 1;i<=n;i++){
         prefGcd[i] = gcd(prefGcd[i - 1], arr[i]); 
    }
    for (int i=n;i>=1;i--){ 
        suffGcd[i] = gcd(suffGcd[i + 1], arr[i]); 
    }
    int res = 0;
	for (int i = 1;i<= n;i++) {
		res =max(res,gcd(prefGcd[i - 1], suffGcd[i + 1]));
	}
	cout<<res<<'\n';
}