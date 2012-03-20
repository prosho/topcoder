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

class EvenRoute {
public:
string isItPossible(vector <int> x, vector <int> y, int wantedParity) {
	int N = x.size(), one = 0, zero = 0;
	rep(i, N){
		if((abs(x[i]) + abs(y[i]))%2) one++;
		else zero++;
	}
	if(one > 0 && zero > 0) return "CAN";
	if(one > 0) return (wantedParity == 1) ? "CAN" : "CANNOT";
	if(zero > 0) return (wantedParity == 0) ? "CAN" : "CANNOT";
}

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4();if ((Case == -1) || (Case == 5)) test_case_5(); 
	if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); if ((Case == -1) || (Case == 8)) test_case_8(); if ((Case == -1) || (Case == 9)) test_case_9(); if ((Case == -1) || (Case == 10)) test_case_10(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {-1,-1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-1,1,1,-1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; string Arg3 = "CAN"; verify_case(0, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arr0[] = {-5,-3,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2,0,3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; string Arg3 = "CAN"; verify_case(1, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arr0[] = {1001, -4000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0,0}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; string Arg3 = "CAN"; verify_case(2, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arr0[] = {11, 21, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-20, 42, 7}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; string Arg3 = "CANNOT"; verify_case(3, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arr0[] = {274986,700251,311466,-799091,-354812,-610646,594546,-599239,-709923,647537,-952365,44291,644490,323701,-20109,-226635,-193874,-474975,484753,998621,-999850,-295290,-549337,-352977,-999576,79730,-150573,69004,-492352,695956,860227,-823514,828775,809957,-416270,-915944,546845,-357858,-573927,-784971,151551,790820,93411,966856,176295,71448,-941217,112475,-967400,101813}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-897045,-641849,419782,-47417,144204,573466,144631,172440,-180147,608374,-816933,-73943,941434,263711,184456,-902355,774798,800402,989554,-77620,614504,940486,-931998,710327,-289275,383086,929332,438441,173801,-943356,521538,742150,950048,446212,-841227,401575,640759,214903,567557,-850991,-547637,40675,-401250,-965851,987728,-998813,-148281,139927,191164,56837}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; string Arg3 = "CAN"; verify_case(4, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_5() { int Arr0[] = {-95506,-987660,38122,-191538,-302010,821054,-312336,365830,-745736,273746,-420594,-370600,-145740,-259380,164004,19298,-500848,155956,-740192,-853144,897112,-914776,-651240,575254,-773296,-720462,976634,188446,-870790,818212,-402584,-35928,-191534,863270,308154,-70862,902248,-501698,-864982,-99150,-204366,681266,628002,-222686,-131744,-398766,100250,-321220,531068,877920}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {367237,-592407,62747,450369,913241,318017,695857,253397,697861,831017,799859,-205307,-638847,-1061,-722695,532563,-582085,943617,422093,50217,451065,-504249,89555,-340501,-459177,753357,-348715,-970473,608335,155469,690547,-961383,157959,159627,-666873,-222173,64381,878243,317753,-534681,-419919,134839,-155439,-478965,319169,258961,-814951,453131,-786655,-790615}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; string Arg3 = "CAN"; verify_case(5, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_6() { int Arr0[] = {-95506,-987660,38122,-191538,-302010,821054,-312336,365830,-745736,273746,-420594,-370600,-145740,-259380,164004,19298,-500848,155956,-740192,-853144,897112,-914776,-651240,575254,-773296,-720462,976634,188446,-870790,818212,-402584,-35928,-191534,863270,308154,-70862,902248,-501698,-864982,-99150,-204366,681266,628002,-222686,-131744,-398766,100250,-321220,531068,877920}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {367237,-592407,62747,450369,913241,318017,695857,253397,697861,831017,799859,-205307,-638847,-1061,-722695,532563,-582085,943617,422093,50217,451065,-504249,89555,-340501,-459177,753357,-348715,-970473,608335,155469,690547,-961383,157959,159627,-666873,-222173,64381,878243,317753,-534681,-419919,134839,-155439,-478965,319169,258961,-814951,453131,-786655,-790615}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; string Arg3 = "CANNOT"; verify_case(6, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_7() { int Arr0[] = {118416,-316548,916446,759544,-472840,-965326,352144,226540,-466088,675128,747828,-906426,413276,579664,-95324,756162,412600,967068,-140466,-341158,22212,110572,464750,174920,-353516,-521830,-469878,460112,548110,867270,-767926,-452304,972480,133960,25008,568080,378912,-7428,419276,-77182,-92092,533020,426176,-283128,-503622,-249804,915804,-706508,-578472,-909780}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {118416,-316548,916446,759544,-472840,-965326,352144,226540,-466088,675128,747828,-906426,413276,579664,-95324,756162,412600,967068,-140466,-341158,22212,110572,464750,174920,-353516,-521830,-469878,460112,548110,867270,-767926,-452304,972480,133960,25008,568080,378912,-7428,419276,-77182,-92092,533020,426176,-283128,-503622,-249804,915804,-706508,-578472,-909780}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; string Arg3 = "CANNOT"; verify_case(7, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_8() { int Arr0[] = {118416,-316548,916446,759544,-472840,-965326,352144,226540,-466088,675128,747828,-906426,413276,579664,-95324,756162,412600,967068,-140466,-341158,22212,110572,464750,174920,-353516,-521830,-469878,460112,548110,867270,-767926,-452304,972480,133960,25008,568080,378912,-7428,419276,-77182,-92092,533020,426176,-283128,-503622,-249804,915804,-706508,-578472,-909780}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {118416,-316548,916446,759544,-472840,-965326,352144,226540,-466088,675128,747828,-906426,413276,579664,-95324,756162,412600,967068,-140466,-341158,22212,110572,464750,174920,-353516,-521830,-469878,460112,548110,867270,-767926,-452304,972480,133960,25008,568080,378912,-7428,419276,-77182,-92092,533020,426176,-283128,-503622,-249804,915804,-706508,-578472,-909780}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; string Arg3 = "CAN"; verify_case(8, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_9() { int Arr0[] = {-974661,490837,-860645,298881,-578787,-51363,664207,-926289,819225,935925,738419,-178091,203727,28247,-573261,-744651,350249,-847313,-741755,782373,588563,552107,265055,77225,-939515,301589,-939089,689365,-688061,980173,351805,295965,-5103,-257303,567865,17761,-506529,70789,-264851,-767547,763087,-830365,144775,-43561,836697,349275,193615,-635321,-139169,-850555}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-974661,490837,-860645,298881,-578787,-51363,664207,-926289,819225,935925,738419,-178091,203727,28247,-573261,-744651,350249,-847313,-741755,782373,588563,552107,265055,77225,-939515,301589,-939089,689365,-688061,980173,351805,295965,-5103,-257303,567865,17761,-506529,70789,-264851,-767547,763087,-830365,144775,-43561,836697,349275,193615,-635321,-139169,-850555}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; string Arg3 = "CANNOT"; verify_case(9, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	void test_case_10() { int Arr0[] = {-974661,490837,-860645,298881,-578787,-51363,664207,-926289,819225,935925,738419,-178091,203727,28247,-573261,-744651,350249,-847313,-741755,782373,588563,552107,265055,77225,-939515,301589,-939089,689365,-688061,980173,351805,295965,-5103,-257303,567865,17761,-506529,70789,-264851,-767547,763087,-830365,144775,-43561,836697,349275,193615,-635321,-139169,-850555}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-974661,490837,-860645,298881,-578787,-51363,664207,-926289,819225,935925,738419,-178091,203727,28247,-573261,-744651,350249,-847313,-741755,782373,588563,552107,265055,77225,-939515,301589,-939089,689365,-688061,980173,351805,295965,-5103,-257303,567865,17761,-506529,70789,-264851,-767547,763087,-830365,144775,-43561,836697,349275,193615,-635321,-139169,-850555}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; string Arg3 = "CAN"; verify_case(10, Arg3, isItPossible(Arg0, Arg1, Arg2)); }
	


// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  EvenRoute ___test;
  ___test.run_test(-1);
}
// END CUT HERE
