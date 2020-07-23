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

//const int MxN = 1e9+5;
#ifdef seive
	const int Inf = 1e9+10;
	vector<ll> primes;   // define Inf before as limits are not set
	bitset<Inf> bs;
	bs.set();
	for(int i=2;i<Inf;i++){
		if(bs[i]){
			for(int j = i*i;j <Inf;j+=i)bs[j]=false;

			primes.push_back(i);
		}
	} 		//basic seive();
#endif

	 //modified seive() linear time complexity additional feature give smallest prime factor of each no. but can only be used in less range cause you get by reading code...
#ifdef Mseive
	const int RANGE = 10000000; //decrease the range as per use as it consume more memory
	array<int,RANGE+1> lp; //contain min prime factors
	vector<int> pr;				//contains primes;

	for(int i=2 ; i<=RANGE; ++i){
		if(!lp[i]){
			lp[i] = i;
			pr.push_back(i);
		}
		for(int j=0; j<(int)pr.size() && pr[j] <=lp[i] && i*pr[j] <=RANGE; j++)	lp[i* pr[j]] = pr[j];
	}

#endif

int main() {
	
	
	
}
