
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//custom comparator
//sorts it according to 2nd element - increasing order
//if 2nd element is same, then
//sort it according to 1st element but in decreasing order
//I think true - pair 1 always lie ahead of pair 2
// & false - pair 2 will lie ahead of pair 1

bool cmp(int a, int b)
{
	return a > b;
}



int main()
{

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt" , "r" , stdin);

	//for writing output to output.txt
	freopen("output.txt" , "w" , stdout);
#endif

//Main code here -

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n, cmp);

	for (int i = 0; i < n ; i++) {
		cout << a[i] << " , ";
	}


}
