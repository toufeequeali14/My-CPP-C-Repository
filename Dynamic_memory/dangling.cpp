#include <iostream>
using namespace std;
int main(){
	
	int *p1,*p2;
	p1=new int;
	*p1=20;
	p2=p1;
	*p2=30;
	cout<<*p1<<"  "<<*p2;
	delete p1;
	p1=NULL;
	cout<<"  "<<*p2;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

