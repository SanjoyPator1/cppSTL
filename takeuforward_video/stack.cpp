
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
	// STACK - LIFO -Last In First Out

	stack<int> st;
	st.push(2);		//{2}
	st.push(4); 	//{4, 2}
	st.push(5);		//{5, 4, 2}
	st.emplace(3);	//{3, 5. 4, 2}

	cout << "element at top is - " << st.top() << endl; //prints  - 3
	// st[2] will not work here
	//can go serially - cant go in random indexes


	cout << "The size of st is : - " << st.size() << endl;

	stack<int> cp_st;
	cp_st.swap(st);

	cout << "The size of cp_st is : - " << cp_st.size() << endl;



}
