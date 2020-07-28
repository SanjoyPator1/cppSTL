
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
	// PRIORITY QUEUE - FIFO -First In First Out
	//but since pq so sorted in decreasing order

	priority_queue<int> pq;
	pq.push(5);		//{5}
	pq.push(2); 		//{5, 2}
	pq.push(8);		//{8, 5, 2}
	pq.emplace(10);	//{10, 8, 5, 2}

	cout << "element at the top is - " << pq.top() << endl; //prints  - 10

	pq.pop();	//{8, 5, 2}

	cout << "After pop() - element at the top is - " << pq.top() << endl; //prints  - 8

	//MINIMUM HEAP - increasing order
	cout << "MINIMUM HEAP - increasing order starts here - " << endl;
	priority_queue<int, vector<int>, greater<int>> pqm;		//syntax
	//here - greater is a comparator - we will learn to make our own in last

	pqm.push(5);		//{5}
	pqm.push(2); 		//{2, 5}
	pqm.push(8);		//{2, 5, 8}
	pqm.emplace(10);	//{2, 5, 8, 10}

	cout << "element at the top is - " << pqm.top() << endl; //prints  - 2




}
