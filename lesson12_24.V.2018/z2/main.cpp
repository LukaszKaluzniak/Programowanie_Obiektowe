#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	List<int> l;
	l.push_back(4);
	l.push_back(3);
	l.push_front(25);
	l.push_back(343);
	l.push_back(72);
	l.push_back(1987);

	l.printList();
  
	return 0;
}
