#include <stdio.h>

int arr[10000001] = { 0 };

int main() {

	int n, m, k;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		arr[k] = 1;
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &k);
		printf("%d ", arr[k]);
	}

	
}
