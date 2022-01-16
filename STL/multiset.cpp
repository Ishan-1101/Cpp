#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
	// empty multiset container
	multiset <int> mset;	

	// insert elements in random order
	mset.insert(40);
	mset.insert(30);
	mset.insert(60);
	mset.insert(20);
	mset.insert(50);
	
	// 50 will be added again to
	// the multiset unlike set
	mset.insert(50);
	mset.insert(10);

	// printing multiset gquiz1
	multiset <int, greater <int> > :: iterator itr;
	cout << "\nThe multiset mset is : \n";
	for (itr = mset.begin(); itr
		!= mset.end(); ++itr)
	{
		cout << *itr << " ";
	}
	cout << endl;
		return 0;

}
