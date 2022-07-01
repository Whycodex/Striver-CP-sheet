#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define mp make_pair
#define fl(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define in1(a) int a; cin>>a;
#define in2(a,b) int a,b; cin>>a>>b;
#define in3(a,b,c) int a,b,c; cin>>a>>b>>c;
#define inv(arr,n) vector<int> arr(n); fl(i,0,n) cin>>arr[i];
#define ina(arr,n) int arr[n]; fl(i,0,n) cin>>arr[i];
#define ins(s) string(s); cin >> (s);
#define vvi vector<vector<int>>
#define mod 1000000007
#define ff first
#define ss second
#define inf 10e15
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int,int>
#define rmin(a,b) (a=min((a),(b)))
#define rmax(a,b) (a=max((a),(b)))
#define UB upper_bound
#define LB lower_bound
#define dsc greater<int>()
#define R return
#define B break
#define C continue
#define lcm(a,b) (a/gcd(a,b))*b
#define pe(a) for(auto e:a)cout<<e
void solve()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(i==0&&str[0]=='9')
        continue;
        if(str[i]>='5')
        str[i]='9'-(str[i]-'0');
    }
    cout<<str<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}