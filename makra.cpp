#include "bits/stdc++.h"
using namespace std;


//wierd debugging stuff
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << "\n" ; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
//end of weird debugging stuff
using ll = long long;
using vi = vector<int>;
using ii = pair<int,int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define invec(v) for(auto& x : v)cin>>x;
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
 
#define F_OR(i, a, b, s) for (int i = (a); ((s) > 0 ? i < (b) : i > (b)); i += (s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define ar array
// no change 

const ll MOD = 1e9+7;   // it is an prime...

template<typename T,typename L>
T power(T a, L b);				// to find reverse modulo its power(a,MOD-2);
template < typename T ,typename L> 
L coefficient(T n, T k);  // computing nCk

//const int MxN = 1e9+5;

int main() {
	FASTER;
	int T = 1;
	cin >> T;		//cmt if one test case
	FOR(T){



	}
}


template<typename T,typename L>
T power(T a, L b){
	
	T result = 1;
	while(b){
		if(b&1) result = (result% MOD * a%MOD) % MOD;
	   	a = (a%MOD * a%MOD) % MOD;
   		b/=2;	   
	}
	return result;
}

template < typename T ,typename L> 
L coefficient(T n, T k){  // computing nCk
	k = min(k,(n-k));
	L res = 1;
	for(T i = 0; i< k;i++){
		res *= (n-i);
		res /= (i+1);

	}
	return res;
}
