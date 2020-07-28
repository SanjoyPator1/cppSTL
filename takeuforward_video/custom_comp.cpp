
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//custom comparator
//sorts it according to 2nd element - increasing order
//if 2nd element is same, then
//sort it according to 1st element but in decreasing order
//I think true - pair 1 always lie ahead of pair 2
// & false - pair 2 will lie ahead of pair 1

bool comp (pair<int, int>p1, pair<int, int>p2) {
	cout << "comp here - " << p1.first << " , " << p1.second << " , " << p2.first << " , " << p2.second << endl;
	if (p1.second < p2.second) {
		return true;
	} else if (p1.second == p2.second) {
		if (p1.first > p2.first) return true;
	}
	return false;	//for all other cases it is false


}

bool cmpnum(int a, int b)
{
	cout << "compnum here -" << a << " , " << b << endl;
	return a < b;
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

	pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

	cout << "Before sorting" << endl;


	for (int i = 0; i <= 2 ; i++) {
		cout << " At Index " << i << "  first :- " << a[i].first << " second :-   " << a[i].second << endl;
	}

	/*
	{
		{1, 2}
		{2, 1}
		{4, 1}

	}


	*/

	sort(a, a + 2, comp);

	cout << "after sorting" << endl;

	//after sorting - it should be like this -
	// {  {4,1}, {2,1}, {1,2}  }

	for (int j = 0; j <= 2 ; j++) {
		cout << " At Index " << j << "  first :- " << a[j].first << " second :-   " << a[j].second << endl;
	}

	int n;
	cin >> n;

	int ar[n];

	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	sort(ar, ar + n, cmpnum);

	for (int i = 0; i < n ; i++) {
		cout << ar[i] << " , ";
	}


}
