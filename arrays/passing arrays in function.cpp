#include <iostream>
#include <string>
using namespace std;
struct pen{
	string color;
	int price;
	string name;
	
};
void display(pen p[],int 2){
	for(int i=0; i<size; i++){
		getline(cin,p[i].color);
		cin>>p[i].price;
		cin.ignore();
		getline(cin,p[i].name);
	}
	for(int i=0; i<size; i++){
		cout<<p[i].color;
		cout<<p[i].price;
	//	cin.ignore();
		cout<<p[i].name;
	}
}
int main(){
	
	
	pen penDetails[2];
	
	display(penDetails,2);
//	for(int i=0; i<2; i++){
//		getline(cin,penDetails[i].color);
//		getline(cin,penDetails[i].name);
//		cin>>penDetails[i].price;
//		cin.ignore();
//	}
//	
//	for(int i=0; i<2; i++){
//		cout<<penDetails[i].color;
//		cout<<penDetails[i].name;
//		cout<<penDetails[i].price;
//		
//	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

