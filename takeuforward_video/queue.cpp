
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
	// QUEUE - FIFO -First In First Out

	queue<int> q;
	q.push(2);		//{2}
	q.push(4); 		//{2, 4}
	q.push(5);		//{2, 4, 5}
	q.emplace(3);	//{2, 4, 5, 3}

	cout << "element at the end is - " << q.back() << endl; //prints  - 3
	cout << "element at the front is - " << q.front() << endl; //prints  - 2




	q.pop();		//pop out - 2 - from front

	cout << "element at the front is - " << q.front() << endl; //prints  - 4





}
