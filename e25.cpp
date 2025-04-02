#include <iostream>
using namespace std;
/*
void Swap(int * a ,int * b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "1" << endl;
}
*/
struct Pers{
	char name[20];
	int num_int;
	double num_double;
};
void Swap(int & a ,int & b){
	int tmp = a;
	a = b;
	b = tmp;
//	cout << "2" << endl;
}

template<typename T>
void Swap(T & a ,T & b){
	T tmp = a;
	a = b;
	b = tmp;
//	cout << "Type" << endl;
}

template<>
void Swap(Pers & a,Pers & b){
	int tmpi = a.num_int;
	double tmp = a.num_double;
	a.num_int = b.num_int;
	a.num_double = b.num_double;
	b.num_int = tmpi;
	b.num_double = tmp;
}

template<typename Type>
void Swap(Type* arr1 ,Type * arr2,int n){
	for(int i = 0;i<n;i++){
		Type tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
//	cout << "Type*" << endl;
}


template<typename T>
void Print(T *arr,int n){
	for(int i = 0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
