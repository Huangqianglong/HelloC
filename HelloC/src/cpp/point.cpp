#include "../head/point.h";
#include "../head/swap.h"

void pointProduct(){
	int *p;
	int a = 10;
	p = &a; //取地址
	cout << "p取地址 :" << p <<  endl;
	cout << "*p取值 :" << *p <<  endl;

//	int b = 20;
//	int *p2 = b;//指针不可以这么负值  必须&
//	p2 =20; *p2 =20;//指针也不能直接这么赋值，指针是志向地址，只能指向地址
//	cout << "p2取地址 :" << p2 <<  endl;
//	cout << "p2取值 :" << *p2 <<  endl;

	int b = 20;
	int *p2 = &b;
	cout << "p2取值 :" << *p2 <<  endl;
	*p2 =30;
	cout << "p2修改后赋值 :" << *p2 << "  修改后 b:"<<b << endl;

	cout <<" 空指针 p3 "<<endl;
	int *p3= NULL;
	cout <<" 空指针 p3 地址:"<< p3<<endl;
	//cout <<" 空指针 p3 值:"<< *p3<<endl; 空指针不可以输出值

	//const 修饰指针  const *p4 = &a  --常量指针，指针指向可以修改，指向的值不可改  即可以指向不同变量，但变量值必须相等
	//const 修饰变量 int *const p4 = &a --指针常量	，指向不可以改，值可以改
	// const 紧跟哪个，哪个就不能修改 const * 即值不能改 ，const p 即指向变量不能改

	//传值和传址
	int *p4,*p5;
	p4=&a;
	p5=&b;
	swap(p4,p5);






}
