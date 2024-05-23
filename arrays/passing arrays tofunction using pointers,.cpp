#include <iostream>

using namespace std;
void test(int *ptr){
	*(ptr)= 20;
	*(ptr+1)= 30;
	*(ptr+2)= 40;
	//// another way of assigning values using pointer variable
	ptr[0] = 200;
	ptr[1] = 300;
	ptr[2] = 400;
}
void test_ref(int& ref)///reference variable
{
	ref = 300;
}
void test_ptr(int  *ptr)// pointer example
{
	*ptr = 1100;
}

int main(int argc, char** argv) {
	int a = 10;
	int *ptr;
	ptr = &a;
	std::cout<<" a = "<<a<<" &a "<<&a<<" ptr "<<ptr<<
	" *ptr "<<*ptr<<" &ptr "<<&ptr;
	test_ref(a);
	test_ptr(&a);
	std::cout<<" a = "<<a<<" &a "<<&a<<" ptr "<<ptr<<
	" *ptr "<<*ptr<<" &ptr "<<&ptr;
	
	int array[10] = {1,2,3,4};
	
	test(array);//passing arrays to function using pointer
	cout<<" A = "<<array[0]<<"  "<<
	array[1]<<" "<<array[2];

	return 0;
}
