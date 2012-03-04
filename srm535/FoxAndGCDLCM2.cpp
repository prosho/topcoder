#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <cstring>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;

#define FOR(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define SORT(__a) sort(__a.begin(), __a.end())
#define RSORT(__a) sort(__a.rbegin(), __a.rend())
#define INF INT_MAX
#define VS vector<string>
#define VI vector<int>
#define PB push_back
#define clr(__v,__x) memset(__v, __x, sizeof __v);
#define rep(i, n) FOR(i,0,n)
#define all(a) a.begin(), a.end()

const double PI  = acos(-1.0);
static const double EPS = 1e-5;
typedef long long ll;
typedef pair<int, int> P;

class FoxAndGCDLCM {
public:

ll gcd(ll x, ll y){
	if(y == 0) return x;
	return gcd(y, x % y);
}

ll lcm(ll a, ll b){
	ll _gcd = gcd(a, b);
	return a / _gcd * b;
}

long long get(long long G, long long L) {
	//ll ret = 12321232123212LL;
	ll ret = 12321232123212LL;
	vector <ll> v;
	for(ll i = 1; i*i <= L; i++){
		if(L % i == 0){
			v.PB(i);
			v.PB(L/i);
			cout << i << "," << L/i << "," << gcd(i, L/i) << endl;
		}
	}
	sort(all(v));
	FOR(i,0,v.size()) FOR(j,0,v.size()) if(i != j){
		if(gcd(v[i], v[j]) == G && lcm(v[i], v[j]) == L){
			ret = min(ret, v[i]+v[j]);
		}
	}
	if(ret == 12321232123212LL) return -1;
	return ret;
}

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4();if ((Case == -1) || (Case == 5)) test_case_5();if ((Case == -1) || (Case == 6)) test_case_6();if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { long long Arg0 = 2LL; long long Arg1 = 20LL; long long Arg2 = 14LL; verify_case(0, Arg2, get(Arg0, Arg1)); }
	void test_case_1() { long long Arg0 = 5LL; long long Arg1 = 8LL; long long Arg2 = -1LL; verify_case(1, Arg2, get(Arg0, Arg1)); }
	void test_case_2() { long long Arg0 = 1000LL; long long Arg1 = 100LL; long long Arg2 = -1LL; verify_case(2, Arg2, get(Arg0, Arg1)); }
	void test_case_3() { long long Arg0 = 100LL; long long Arg1 = 1000LL; long long Arg2 = 700LL; verify_case(3, Arg2, get(Arg0, Arg1)); }
	void test_case_4() { long long Arg0 = 10LL; long long Arg1 = 950863963000LL; long long Arg2 = 6298430LL; verify_case(4, Arg2, get(Arg0, Arg1)); }
	void test_case_5() { long long Arg0 = 1000000000000LL; long long Arg1 = 1000000000000LL; long long Arg2 = 2000000000000LL; verify_case(5, Arg2, get(Arg0, Arg1)); }
	void test_case_6() { long long Arg0 = 1LL; long long Arg1 = 1LL; long long Arg2 = 2LL; verify_case(6, Arg2, get(Arg0, Arg1)); }
	void test_case_7() { long long Arg0 = 5000000000LL; long long Arg1 = 1000000000000LL; long long Arg2 = 165000000000LL; verify_case(7, Arg2, get(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  FoxAndGCDLCM ___test;
  ___test.run_test(5);
}
// END CUT HERE
