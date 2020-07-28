
#include<bits/stdc++.h>

using namespace std;


int main()
{

//try
/*#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt" , "r" , stdin);

	//for writing output to output.txt
	freopen("output.txt" , "w" , stdout);
#endif*/

//Main code here -

	//pair (data_type1, data_type2) Pair_name;

	cout << "1st e.g" << endl;
	pair<int, int> p1 = {1, 3};
	cout << p1.first << endl;
	cout << p1.second << endl;


	// another way to initialize pair - make_pair
	//Syntax -
	//Pair_name = make_pair (value1,value2);

	cout << "2nd example" << endl;
	pair<int, int> p2;
	p2 = make_pair(10, 20);
	cout << p2.first << endl;
	cout << p2.second << endl;

	//takeuforward now
	cout << "3rd example" << endl;
	cout << "takeuforward now" << endl;
	pair < int, pair<int, int>> p3 = {1, {3, 4}};
	cout << p3.first << endl;
	cout << p3.second.first << endl;
	cout << p3.second.second << endl;

	cout << "4th example" << endl;
	pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};


	//this will print 3 i.e 1st array 2nd item
	cout << arr[1].second << endl;

	return 0;
}
