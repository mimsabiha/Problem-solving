#include <iostream>
#include <stdio.h>
#include <limits.h>
using namespace std;

int a[100005];
int tree[400005];

int init_segment(int lb, int rb, int node)
{

	int x;
	int y;

	if(lb == rb) {
		tree[node] = a[lb];
		return a[lb];
	}

	x = init_segment(lb, (lb + rb) / 2, node * 2);
	y = init_segment((lb + rb) / 2 + 1, rb, node * 2 + 1);

	tree[node] = min(x, y);

	return tree[node];
}

int query(int lb, int rb, int e, int f, int node)
{
	int x;
	int y;

	if(e <= lb and f >= rb) {
		return tree[node];
	}

	if(e > rb or f < lb) {
		return INT_MAX;
	}

	x = query(lb, (lb+rb)/2, e, f, node * 2);
	y = query((lb+rb)/ 2 + 1, rb, e, f, node * 2 + 1);

	return min(x, y);
}


int main()
{
	int t;
	int n;
	int qs;
	int x;
	int y;

	scanf("%d", &t);

	for (int j = 1; j <= t; j++) {

		scanf("%d", &n);
		scanf("%d", &qs);

		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}

		init_segment(1, n, 1);

		printf("Case %d:\n", j);

		for(int i = 0; i < qs; i++) {
			scanf("%d", &x);
			scanf("%d", &y);

			printf("%d\n", query(1, n, x, y, 1));
		}


	}


}
