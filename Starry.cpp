#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;


int read(){
    int ans=0;
    char ch=getchar();
    int f=1;
    while(ch<'0' || ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9'){
        ans=ans*10+ch-'0';
        ch=getchar();
    }
    return ans*f;
}



ll qpow(ll a,ll b,ll mod){
    int ans=1;
    for(;b;b>>=1,a=a*a%mod){
        if(b&1){
            ans=ans*a%mod;
        }
    }
    return ans;
}


void solve(){
    




}

signed main(){
    freopen("title.in","r",stdin);
    freopen("title.out","w",stdout); 
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int T=1;
    //cin>>T;
    while(T--){
        solve();
    }
    return 0;
}




