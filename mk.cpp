#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;


mt19937_64 rg(random_device{}());    //     Mersenne Twister
int rd(int l,int r){return l+rg()%(r-l+1);}
int rdl(ll l,ll r){return l+rg()%(r-l+1);}

int main(){
    ios::sync_with_stdio(false);
    int n=2,m=rd(1,300);
    for(int i=1;i<=n;i++){
        printf("%d ",rd(1,m));
    }
    printf("\n");
    return 0;

}


