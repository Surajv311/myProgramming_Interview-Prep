vector<int> v(N, 1);
for (int i = 2; i <= sqrt(N); ++i) {
	if (v[i]) {
		for (int j = i * i; j <= N; j += i) {
			v[j] = 0;
		}
	}
}
v[0] = v[1] = 0;