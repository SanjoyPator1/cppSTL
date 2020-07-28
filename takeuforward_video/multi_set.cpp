
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
	// MULTIset contains unique items and sorts it
	//same as set - just stores dublicate elements also

	multiset<int> ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(1); // 1, 1, 1

	ms.erase(ms.find(1));	//erase only 1 as it is pointing to only 1
	ms.erase(1);	//erase all 1


}
