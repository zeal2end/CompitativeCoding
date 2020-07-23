
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
~debug() { cerr << endl; }
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
#define Test int T;cin>>T;while(T--)
#define REP(i,j,k) for(int i=(j);(i)<(k);(i)++)
#define Time()	cerr <<'\n' << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define SZ(x) (int)x.size();
#define all(x) x.begin(),x.end()
// no change 

#ifdef Ordered_set

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//  *Name.find_by_order(value);    --> it tells the element at the index value 0 based indexing  it returns an itreator
//  Name.order_of_key(value);      --> tells the no of elements strictly smaller than value
//  Insertion is same as the std::set
//  Name.find(value)  --> return itretor to ind or to the end()
//  Name.erase work same as std::erase


#endif


const ll MOD = 1e9+7;   // it is an prime...
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
template< typename T > 
T divide(T a,T b){
	return (a%MOD * power(b,MOD-2) % MOD);     // to use this function remember the mod should be a prime or a relative prime of the number B Acc to euler's
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
#ifdef LargeFact
//to computing large factorials to find large nCk
const int Large = 1e6;
vector<double> Lfact(Large);
void precomputeLargeFact(){ // use when the memory range is effecient not more than 1e6 as it cause MLE
	//vector<double> Lfact(Large);
	Lfact[0] = 0.0D;
	for(int i = 1;i<Large ; i++){
		Lfact[i] = Lfact[i-1] + log(i);   // basic log rules 
	}
}
ll Lcoeffient(int n, int k){   // to use this first precompute factorials
	if(k < 0 || k > n) return 0;
   return exp(Lfact[n] - Lfact[n-k] - Lfact[k]) ; // basic log rules for division 	
}
#endif

//#define LargeFact
//const int MxN = 1e9+5;
void solve(){


}
int main() {
	FASTER;
	Test solve();	
}
