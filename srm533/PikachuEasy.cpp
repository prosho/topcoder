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

class PikachuEasy {
public:
string check(string word) {
	bool res = true;
	rep(i, word.size()){
		if(word[i] == 'p'){
			if(i + 1 >= word.size()) res = false;
			if(word[i + 1] != 'i') res = false;
			i++;
		}else if(word[i] == 'k'){
			if(i + 1 >= word.size()) res = false;
			if(word[i + 1] != 'a') res = false;
			i++;
		}else if(word[i] == 'c'){
			if(i + 1 >= word.size()) res = false;
			if(word[i + 1] != 'h') res = false;
			i++;
			if(i + 1 >= word.size()) res = false;
			if(word[i + 1] != 'u') res = false;
			i++;
		}else{
			res = false;
		}
	}
	string t = res ? "YES" : "NO";
	return t;
}

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "pikapi"; string Arg1 = "YES"; verify_case(0, Arg1, check(Arg0)); }
	void test_case_1() { string Arg0 = "pipikachu"; string Arg1 = "YES"; verify_case(1, Arg1, check(Arg0)); }
	void test_case_2() { string Arg0 = "pikaqiu"; string Arg1 = "NO"; verify_case(2, Arg1, check(Arg0)); }
	void test_case_3() { string Arg0 = "topcoder"; string Arg1 = "NO"; verify_case(3, Arg1, check(Arg0)); }
	void test_case_4() { string Arg0 = "piika"; string Arg1 = "NO"; verify_case(4, Arg1, check(Arg0)); }
	void test_case_5() { string Arg0 = "chupikachupipichu"; string Arg1 = "YES"; verify_case(5, Arg1, check(Arg0)); }
	void test_case_6() { string Arg0 = "pikapipachu"; string Arg1 = "NO"; verify_case(6, Arg1, check(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  PikachuEasy ___test;
  ___test.run_test(-1);
}
// END CUT HERE
