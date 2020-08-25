#include <iostream>
#include <stdexcept>
#include "time.h"

using namespace std;

int main()
{
	
	Time t1;
	Time t2(2);
	Time t3(21, 34);
	Time t4(23, 58, 59);
  

	t4.printUniversal();
//	cout<<"\n";
//	t4.printStandard();
//	for(int i=0; i<10; i++)
//	{
		cout<<"\n";
		t4.addtime();
		cout<<"\n";
	//	t4.printUniversal();
	//	cout<<"\n";
//	}
	//t4.printUniversal();
}
