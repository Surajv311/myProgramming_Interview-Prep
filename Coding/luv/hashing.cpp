//  to find count of x integer

// brute force
main() {
	int n ;
	cin >> n ;
	int a[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	int q;
	cin >> q ;
	while (q--) {
		int x ;
		cin >> x ;
		int ct = 0 ;
		for ( int i = 0 ; i < n ; i++) {
			if (a[i] == x) {
				ct++;
			}
		}
		cout << ct << endl;
	}
}

// Here complexity is : O(N) + O(Q*N) = O(N^2)


// we use hashing to reduce time limit
// global declaration of hash array
//  to reduce tl, we store count in a hash array declared globally
const int N = 1e7 + 10;
int hsh[N];
//  since declared globally, its already initialised to 0
main() {
	int n ;
	cin >> n ;
	int a[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
		hsh[a[i]]++;
	}
	int q;
	cin >> q ;
	while (q--) {
		int x ;
		cin >> x ;
		//int ct = 0 ;
		// for( int i = 0 ; i < n ; i++){

		// 	if(a[i]==x){
		// 		ct++;
		// 	}
		// }
		cout << hsh[x] << endl;
	}
}

// Here complexity is : O(N) + O(Q) = O(N)

//////////////////////////////////////////////
/*
Note:
size of int declared globally ~10^7
otherwise in main : 10^9
since of long long int : 10^18
............
So we can use hashing if constraints <=10^7
////////////////////////////////////////////