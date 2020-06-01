
using namespace std;
#include "plusAll.h"
#include <iostream>

template<class A, class B>
A add(A a, B b) {
	return a + b;
}
int main()
{
	plusAll<int> *p = new plusAll<int>();
	cout<<p->add(1, 2)<<"\n";
	cout << (*(new plusAll<float>())).add(0.1f, 0.2f)<<"\n";
	printf ("%s\n",(*(new plusAll<string>())).add("11", "22"));

	cout<<add<int, double>(1, 0.5);
}




