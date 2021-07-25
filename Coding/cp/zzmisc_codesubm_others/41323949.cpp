#define y1 askjdkasldjlkasd
#include <bits/stdc++.h>
#undef y1

using namespace std;

#define pb push_back
#define mp make_pair
#define fi(a, b) for(int i=a; i<=b; i++)
#define fj(a, b) for(int j=a; j<=b; j++)
#define fo(a, b) for(int o=a; o<=b; o++)
#define fdi(a, b) for(int i=a; i>=b; i--)
#define fdj(a, b) for(int j=a; j>=b; j--)
#define fdo(a, b) for(int o=a; o>=b; o--)
#define sz(x) (int)x.size()

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<ll> vll;

#ifdef LOCAL
#define err(...) fprintf(stderr, __VA_ARGS__)
#else
#define err(...) while (0)
#endif

double START_TIME;

void exit() {
#ifdef LOCAL	
	cerr << "TIME: " << setprecision(5) << fixed << (clock() - START_TIME) / CLOCKS_PER_SEC << endl;
#endif	
	exit(0);
}

template<typename A, typename B>
ostream& operator<<(ostream& os, pair<A, B> p) {
	os << "(" << p.first << ", " << p.second << ")";
	return os;
}

template<typename T>
ostream& operator<<(ostream& os, vector<T> v) {
	fi(0, sz(v) - 1) {
		os << v[i] << " ";
	}
	return os;
}

template<typename T>
ostream& operator<<(ostream& os, set<T> t) {
	for (auto z : t) {
		os << z << " ";
	}
	return os;
}

template<typename T1, typename T2>
ostream& operator<<(ostream& os, map<T1, T2> t) {
	cerr << endl;
	for (auto z : t) {
		os << "\t" << z.first << " -> " << z.second << endl;
	}
	return os;
}

#ifdef LOCAL
#define dbg(x) {cerr << __LINE__ << "\t" << #x << ": " << x << endl;}
#define dbg0(x, n) {cerr << __LINE__ << "\t" << #x << ": "; for (int ABC = 0; ABC < n; ABC++) cerr << x[ABC] << ' '; cerr << endl;}
#else
#define dbg(x) while(0){}
#define dbg0(x, n) while(0){}
#endif

#ifdef LOCAL
#define ass(x) if (!(x)) { cerr << __LINE__ << "\tassertion failed: " << #x << endl, abort(); }
#else
#define ass(x) assert(x)
#endif

///////////////////////////////////////////////////

const int MAX = 1e3 + 41;
int n, m;
int a[MAX];
int b[MAX];

void solve () {
	//dbg0(a, n + 1);
	//dbg0(b, m + 1);
	ll d = 0;
	fi(1, n) d += a[i];
	fi(1, m) d -= b[i];
	int x = 1;
	while (true) {
		if (d > 0) break;			
		if (x > n) break;
		if (x > m) break;
		if (b[m - x + 1] <= a[x]) break;
		//err("x = %d d = %lld\n", x, d);
		d -= a[x];
		d -= a[x];
		d += b[m - x + 1];
		d += b[m - x + 1];
		x++;
	}
	if (d > 0) {
		printf("%d\n", x - 1);
	} else {
		printf("-1\n");
	}
}

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	START_TIME = (double)clock();
#endif
	
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n, &m);
		fi(1, n) scanf("%d", &a[i]);
		fi(1, m) scanf("%d", &b[i]);
		sort(a + 1, a + 1 + n);
		sort(b + 1, b + 1 + m);		
		solve();
	}

	exit();
	return 0;
}



