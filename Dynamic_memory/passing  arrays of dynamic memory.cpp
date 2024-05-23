#include <iostream>
using namespace std;
void display(int *p){
	for(int i = 0; i<4; i++){
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>p[i];
		
	}
	for(int i =3,j=0;j<4 && i>=0;j++, i--){
		cout<<"Value number "<<j+1<<" : ";
		cout<<p[i]<<endl;
		
	}
}
int main(){
	int size;
	cin>>size;
	int *p= new int[size];
	
	
	display(p);
	return 0;
}

