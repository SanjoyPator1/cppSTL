
#include<bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt" , "r" , stdin);

	//for writing output to output.txt
	freopen("output.txt" , "w" , stdout);
#endif

//Main code here -


	//same function works here as vector
	// set contains unique items and sorts it

	set<int> st;
	st.insert(1);	//1
	st.insert(2);	// 1, 2
	st.insert(2);	// 1, 2
	st.insert(3);	// 1, 2, 3
	st.insert(4);	// 1, 2, 3, 4

	auto it = st.find(3);
	cout << *(it) << endl;

	auto it1 = st.find(5);
	cout << *(it1) << endl; //since 5 doesnot exist it will point to st.end()

	st.erase(4);	//this takes logarithmic time
	//it will erase 4

	auto it2 = st.end();
	cout << *(it2) << endl;

	st.insert(4);
	st.insert(5);
	// now - 1 2 3 4 5

	auto it3 = st.find(2);
	auto it4 = st.find(4);

	st.erase(it3, it4); 	//[2, 4) i.e deletes 2,3
	//now - 1, 4, 5

	//watch the upper & lower bound video of takuforward
	auto it5 = st.lower_bound(2);
	auto it6 = st.upper_bound(5);

	cout << "lower_bound() " << *(it5) << endl;
	cout << "upper_bound()  "  << *(it6) << endl;

}
