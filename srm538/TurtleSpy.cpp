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
#define bit(n) (1ll<<(ll)(n))

const double PI  = acos(-1.0);
static const double EPS = 1e-5;
typedef long long ll;
typedef pair<int, int> P;

class TurtleSpy {
public:
vector<int> dists;
vector<int> angles;

int decode(string X){
	int res = 0;
	rep(i, X.size()){
		res *= 10;
		res += X[i] - '0';
	}
	return res;
}

double maxDistance(vector <string> commands) {
	dists.clear();
	angles.clear();
	int N = commands.size();
	rep(i, N){
		string st = commands[i];
		string command = st.substr(0, st.find(' '));
		string X = st.substr(st.find(' ')+1);
		//cout << command << "," << X << endl;
		if(command == "forward") dists.PB(decode(X));
		if(command == "backward") dists.PB(-decode(X));
		if(command == "left") angles.PB(360-decode(X));
		if(command == "right") angles.PB(decode(X));
	}
	sort(all(dists));
	sort(all(angles));
	//rep(i, dists.size()) cout << dists[i] << " "; cout << endl;
	int sakai = upper_bound(all(dists), 0) - dists.begin();
	double res = 0;
	rep(i, sakai) res += (double)abs(dists[i]);
	double tmp = 0;
	FOR(i, sakai, dists.size()) tmp += (double)abs(dists[i]);
	//cout << "sakai=" << sakai << "," << "res=" << res << "," << "tmp=" << tmp << endl;
	if(res < tmp) swap(res, tmp);
	bool memo[360];
	memset(memo, false, sizeof(memo));
	memo[0] = true;
	int M = angles.size();
	rep(i, M){
		vector<int> vs;
		rep(j, 360) if(memo[j]){
			vs.PB((j+angles[i]) % 360);
		}
		rep(j, vs.size()) memo[vs[j]] = true;
	}
	int d;
	for(d = 0; d < 180; d++){
		if(memo[180-d] || memo[180+d]) break;
	}
	double x = 0. + tmp*sin(PI*d/180);
	double y = res + tmp*cos(PI*d/180);
	//cout << "d=" << d << "," << x << "," << y << endl;
	return (double)sqrt(x*x+y*y);
}

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"forward 100", "backward 100", "left 90" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 141.4213562373095; verify_case(0, Arg1, maxDistance(Arg0)); }
	void test_case_1() { string Arr0[] = {"left 45", "forward 100", "right 45", "forward 100"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 200.0; verify_case(1, Arg1, maxDistance(Arg0)); }
	void test_case_2() { string Arr0[] = {"left 10", "forward 40",  "right 30", "left 10", "backward 4", "forward 4" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 40.58520737741619; verify_case(2, Arg1, maxDistance(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  TurtleSpy ___test;
  ___test.run_test(-1);
}
// END CUT HERE
