#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const int N=3e5+5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
        int t;
        cin>>t;
        for(int o=1;o<=t;o++){
            int n;
            cin>>n;
            int ans=0;
            if(n<=5) ans=1;
            else if (n==6) ans=2;
            else {
                for(int i=1;i<n;i++){
                    if((5*i)+1<=n) ans=max(ans, i+1);
                }
            }
            
            
            cout<<"Case "<<"#"<<o<<": "<<ans<<"\n";
        }

}
