#include <iostream>
#include "DisjointSet.h"

using namespace std;

void printElementSets(DisjointSet & s)
{
	for (int i = 0; i < s.NumElements(); ++i)
		cout << s.Find(i) << "  ";
	cout << endl;
}

int main()
{
	DisjointSet s(10);
	printElementSets(s);
	//	s.Union(s.Find(5),s.Find(3));
	s.Union(5,3);
	printElementSets(s);
	s.Union(s.Find(1),s.Find(3));
	printElementSets(s);
	s.Union(s.Find(6),s.Find(7));
	printElementSets(s);
	s.Union(s.Find(8),s.Find(9));
	printElementSets(s);
	s.Union(s.Find(6),s.Find(9));
	printElementSets(s);
	s.AddElements(3);
	printElementSets(s);
	s.Union(s.Find(11),s.Find(12));
	printElementSets(s);
	s.Union(s.Find(9),s.Find(10));
	printElementSets(s);
	s.Union(s.Find(7),s.Find(11));
	printElementSets(s);

	system("pause");
	return 0;
}
