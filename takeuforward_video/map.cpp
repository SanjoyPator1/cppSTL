
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

	//{key, value}
	//I think it is just like dictionary in python

	map<int, int> mpp01;

	mpp01[1] = 2;	//here 1 is key and 2 is value
	mpp01.insert({3, 1});
	mpp01.emplace(2, 4);

	//the keys and vaue are stored as
	/*
	They are stored in increasing order of key
	{
		{1, 2}
		{2, 4}
		{3, 1}

	}
	*/

	for (auto it : mpp01) {
		cout << it.first << " " << it.second << endl;
	}

	cout << "printing the value of key 3 is :- " << mpp01[3] << endl;
	cout << "printing the value of key 4 is :- " << mpp01[4] << endl;
	//since key 4 is not present so it will print 0

	map<pair<string, string>, string> mpp02;		//e.g my_name, fathers_name are key and city is value
	mpp02[ {" son ", "father"}] = "city";
	
	// MULTI_MAP
		//everything same as map but it can store multiple key
		//only mpp[key] cannot be used
		
	//UNORDERD_MAP
		//same as set and unordered_set difference
		

}
