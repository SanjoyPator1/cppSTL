
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

	//list are same as vector
	//but here you can input in front
	//same function works here as vector
	list<int> ls;

	ls.push_back(2);		//{2}
	ls.emplace_back(4); 	//{2, 4}

	ls.push_front(5);		//{5, 2, 4}

	cout << "The items in list are: - " << endl;
	for (auto it : ls) {

		cout << it << "  ";
	}



}
