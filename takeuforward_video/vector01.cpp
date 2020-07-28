
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

	//dynamic array - VECTOR

	vector<int> v01; //{}

	v01.push_back(10);	//{10}
	v01.push_back(20);	//{10, 20}

	v01.emplace_back(30);	//{10, 20, 30}

	// we can put pair too
	vector<pair<int, int>> vp;
	vp.push_back({10, 20});
	vp.emplace_back(30, 40); //no need of curly braces for 1 pair

	//vector of size 5 with every element as 100
	vector<int> v02(5, 100);  //{100, 100, 100, 100, 100}

	//if not initialised it takes 0 or garbage value
	vector<int> v03(5);	//{0, 0, 0, 0, 0}


	//copy
	vector<int>v04(v02);

	//ITERATOR starts here
	vector<int> v05;

	for (int i = 1; i <= 4; i++)
		v05.push_back(i);

	//Take the vector to be {1,2,3,4}
	vector<int>::iterator it = v05.begin();  //it is pointing to 1
	it++;	//it is pointing to 2 now

	cout << *(it) << endl;	//prints 2
	it = it + 1;
	cout << *(it) << endl;

	//printing all
	it = v05.begin();
	cout << "-- .begin()  ----" << *(it) << endl;

	it = v05.end();	//it will not point to 40, it will point to a memory address after 40 i.e null memory address
	cout << "-- .end() --- " << *(it) << endl;

	//vector<int>::iterator it = v05.rend(); //it will point to a memory address before 1 i.e first item
	//cout << *(it) << endl;

	vector<int>::reverse_iterator it1 = v05.rbegin();	//it will point to 4 i.e last item
	cout << "---- rbegin() ---" << *(it) << endl;
	//TODO - why it is displaying 0?

	//indexing similar to array
	cout << " -- 1st element --" << v05[0] << endl;
	cout << " -- last element --" << v05.back() << endl;

	cout << " -- size of v05 --" << v05.size() << endl;

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = v05.rbegin(); ir != v05.rend(); ++ir)
		cout << *ir << endl;



	v05.erase(v05.begin());

	cout << "Displaying using enhanced for loop" << endl;

	cout << "After using erase" << endl;

	for (auto it : v05) {
		cout << it << endl;
	}

	v05.push_back(5);
	v05.push_back(6);


	//ERASE FUNCTION

	//now the items are - {2, 3, 4, 5, 6}
	//erase item from point 2nd point to 3rd point
	v05.erase(v05.begin() + 2, v05.begin() + 4); 	//not including the last point
	cout << "After split erasing - " << endl;	//now - {2,3, 6}
	for (auto it : v05) {
		cout << it << endl;
	}

	//INSERT FUNCTION -
	vector<int> v06(2, 100);		//{100, 100}
	v06.insert(v06.begin(), 300); 	//{300, 100, 100}
	v06.insert(v06.begin() + 1, 2, 10); 	//{300, 10, 10, 100, 100}


	cout << "Displaying v06 insert - " << endl;
	for (auto it : v06) {
		cout <<  it << "  " << endl ;
	}

	v06.pop_back();
	cout << "after popback - " << endl;

	for (auto it : v06) {
		cout <<  it << "  ";
	}


	//SWAP FUNCTION

	vector<int> v07(2, 17);		//{17,17}
	vector<int> v08(2, 100);	//{100,100}
	cout << endl;
	cout << "Before swaping - v07 - " << endl;

	for (auto it : v07) {
		cout <<  it << "  ";
	}


	cout << endl;
	cout << "Before swaping - v08 - " << endl;

	for (auto it : v08) {
		cout <<  it << "  ";
	}


	v07.swap(v08);
	cout << endl;
	cout << "after swaping - v07 - " << endl;

	for (auto it : v07) {
		cout <<  it << "  ";
	}


	cout << endl;
	cout << "after swaping - v08 - " << endl;

	for (auto it : v08) {
		cout <<  it << "  ";
	}

	v07.clear();  //erases everything
	cout << "empty check -" << endl;
	//empty() returns 0 or 1, boolean
	if (v07.empty()) {
		cout << "It is empty" << endl;

	}
	else
		cout << "It is not empty" << endl;

	return 0;
}
