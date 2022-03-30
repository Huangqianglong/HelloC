//============================================================================
// Name        : Helloword2.cpp
// Author      : huangql
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <unistd.h>
#include "head/swap.h"
#include "head/point.h"
#include "head/structDemo.h"
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//pause();
	system("pause");
	cout << "pause"<< endl;
	int temp = 10;
	cout <<"一种算法值"<<temp<<"块钱"<<endl;
   cout << "Int :"<<sizeof(int)<<"float:"<<sizeof(float)<<endl;
   int a = 10;
   int b =20;
   cout << "a :"<<a<<"b:"<<b<<endl;
   swap(a,b);
   cout << "after a :"<<a<<"b:"<<b<<endl;

   pointProduct();

   productStudent();


	return 0;
}
