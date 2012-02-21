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

class CasketOfStarEasy { 
public: 
int N; 
int dp[1 << 11][10]; 
vector <int> weight; 
int rec(int used, int turn){ 
  if(dp[used][turn] >= 0) return dp[used][turn]; 
  int res = 0; 
  if(turn == N - 2){ res = 0; goto end;} 
  for(int i = 1; i < N - 1; i++){ 
    if(!(used >> i & 1)){ 
      int rn = N - 1, ln = 0; 
      for(int j = i + 1; j < N; j++){ 
        if(!(used >> j & 1)){rn = j; break;} 
      } 
      for(int j = i - 1; j >= 0; j--){ 
        if(!(used >> j & 1)){ln = j; break;} 
      } 
      res = max(res, rec(used | 1 << i, turn + 1) + weight[rn] * weight[ln]); 
     
    } 
  } 
  end: 
  return dp[used][turn] = res; 
} 

int maxEnergy(vector <int>  WEIGHT) { 
  weight = WEIGHT; 
  memset(dp, -1, sizeof(dp)); 
  N = weight.size(); 
  int res = rec(0, 0); 
  return res; 
} 

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,2,3,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 12; verify_case(0, Arg1, maxEnergy(Arg0)); }
	void test_case_1() { int Arr0[] = {100,2,1,3,100}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10400; verify_case(1, Arg1, maxEnergy(Arg0)); }
	void test_case_2() { int Arr0[] = {2,2,7,6,90,5,9}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1818; verify_case(2, Arg1, maxEnergy(Arg0)); }
	void test_case_3() { int Arr0[] = {477,744,474,777,447,747,777,474}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2937051; verify_case(3, Arg1, maxEnergy(Arg0)); }
	void test_case_4() { int Arr0[] = {1,1,1,1,1,1,1,1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 8; verify_case(4, Arg1, maxEnergy(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  CasketOfStarEasy ___test;
  ___test.run_test(-1);
}
// END CUT HERE
