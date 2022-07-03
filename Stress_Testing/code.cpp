#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vpii vector<pii>
#define vpll vector<pll>
#define mod 1000000007
#define EPS (long double)(1e-10)

#define pdot cerr << '\n' << __LINE__ << ".....\n"
#define pnl cerr << '\n'
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << __LINE__ << " ==>  " << #x << " = ";_print(x);cerr << '\n';
#else
#define dbg(x)
#endif
void _print(long long t) {cerr << t;}
void _print(int t) { cerr << t; }
void _print(unsigned int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }
void _print(bool t) { cerr << t; }

template <class T, class V>void _print(pair<T, V> p);
template <class T>void _print(vector<T> v);
template <class T>void _print(set<T> v);
template <class T, class V>void _print(map<T, V> v);
template <class T>void _print(multiset<T> v);
template <class T, class V>void _print(pair<T, V> p) {cerr << "{";  _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T>void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>void _print(set<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>void _print(multiset<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V>void _print(map<T, V> v) {cerr << "[ ";  for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void Cases() {
	int n;
	cin>>n;
	vi in(n);
	for(auto &x: in)cin>>x;
	int ans = 0;
	int cnt = max(n,max(in.back(), in[0]+n-1));
	reverse(all(in));
	for(auto x:in){
		ans = max(ans, abs(cnt-x));
		cnt--;
	}
	cout<<ans<<'\n';
}


int main() {
//    clock_t start, end; start = clock();
   // freopen("E:\\Adon\\Proggraming\\Problems\\input.txt", "r", stdin);
   // freopen("E:\\Adon\\Proggraming\\Problems\\output.txt", "w", stdout);
    // freopen("E:\\Adon\\Proggraming\\Problems\\error.txt", "w", stderr);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1, cse = 0;
    // cin >> t;
    while (t--) {
//        cout << "Case #" << ++cse << ": ";
        Cases();
    }
//    end = clock(); cerr << "\n" << "Time : " << (double)2 * (end - start) / (double)CLOCKS_PER_SEC << '\n';
    return 0;
}
