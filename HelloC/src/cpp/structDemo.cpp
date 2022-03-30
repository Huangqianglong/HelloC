#include "../head/structDemo.h"
#include <string>
void productStudent(){
	struct Student s1;
	s1.name  = "hql";
	s1.age =1;
	s1.score = 10;


	struct Student s2 {"hql2",2,20};

	Student s3 ={"hql3",3,30};

	//结构体指针
	Student *p = &s1;

	cout <<"p name ："<< p->name<<endl;
	cout << "s2 name ："<< s2.name<<endl;
	address();
}

//结构体中const的使用
// 1  函数传参中使用，不会复制副本，且只读不能修改
void structPrint1(const Student *s1){
	//s1->age =150; //运行报错
	cout<<"const 修改"<<s1->age;
}
void address(){

	int a =10 ;
	int &b =a;//引用，  a和b共同操作一个内存块
	cout<< a<<"<<"<<b<<endl;
	b = 100;
	cout<< a<<"<<"<<b<<endl;
}





