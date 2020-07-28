
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//custom comparator
//sorts it according to 2nd element - increasing order
//if 2nd element is same, then
//sort it according to 1st element but in decreasing order
//I think true - pair 1 always lie ahead of pair 2
// & false - pair 2 will lie ahead of pair 1


//TODO - not working - fix this
bool comp (pair<int, int>p1, pair<int, int>p2) {
	if (p1.second < p2.second) {
		return true;
	} else if (p1.second == p2.second) {
		if (p1.first > p2.first) return true;
	}
	return false;	//for all other cases it is false


}

bool compnum(int num1, int num2) {
	return num1 < num2;
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

	int arr[] = {5, 2, 7, 1, 3, 4};

	//before sorting

	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;
	cout << "After sorting from 1st pos to last" << endl;
	//[1st, last) not including last

	//after sorting


	sort(arr + 1, arr + 5);


	for (auto it : arr) {
		cout << it << " ";
	}

	cout << endl;


	//MAKING OWN CUSTOM COMPARATOR



	pair<int, int> a[] = {{1, 2}, {2, 1}};

	cout << "Before sorting" << endl;


	for (int i = 0; i <= 1 ; i++) {
		cout << " At Index " << i << "  first :- " << a[i].first << " second :-   " << a[i].second << endl;
	}

	/*
	{
		{1, 2}
		{2, 1}
		{4, 1}

	}


	*/

	sort(a, a + 1, comp);

	cout << "after sorting" << endl;

	//after sorting - it should be like this -
	// {  {4,1}, {2,1}, {1,2}  }

	for (int j = 0; j <= 1 ; j++) {
		cout << " At Index " << j << "  first :- " << a[j].first << " second :-   " << a[j].second << endl;
	}


	int arr01[] = {4, 2, 5};

	sort(arr01, arr01 + 2, compnum);


	for (int k = 0; k <= 2 ; k++) {
		cout << " At Index " << k << "  element :- " << arr01[k] << endl;
	}
}
