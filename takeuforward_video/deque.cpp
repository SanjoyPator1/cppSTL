
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

	//deque are same as vector
	//but here you can pop in front - lol
	//same function works here as vector

	deque<int> dq;
	dq.push_back(2);		//{2}
	dq.emplace_back(4); 	//{2, 4}
	dq.push_front(5);		//{5, 2, 4}
	dq.emplace_front(3);	//{3, 5, 2, 4}

	dq.pop_back();	//{3, 5, 2}
	dq.pop_front();	//{5, 2}



	cout << "The items in deque are: - " << endl;
	for (auto it : dq) {

		cout << it << "  ";
	}



}
