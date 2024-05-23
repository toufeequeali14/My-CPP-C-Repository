#include <iostream>
using namespace std;

int main(){
//	int *ptr=new int;
//	*ptr=2;
//	int a[2]={4,6};
//	int *ptr=a;
//	cout<<*ptr;
	int *ptr= new int[2];
	ptr[0]=4;
	ptr[1]=6;
	for(int i=0; i<2; i++){
		
		cout<<*(ptr+i)<<endl;
	}
	
	delete [] ptr;
	
	
	
	
	
	
	
	return 0;
}

