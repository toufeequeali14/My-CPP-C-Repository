#include <iostream>
using namespace std;

int main(){
     int array[]={2,1,5,2,3,4};
     int size=sizeof(array)/sizeof(int);
     for(int i=0;i<size;i++)
	 {
	 	for(int j=0;j<(size-i-1);j++)
	 	{
	 		if(array[j]>array[j+1])
	 		{
	 			cout<<array[j]<<" Replace with "<<array[j+1]<<endl;
	 			int tmp=array[j];
	 			array[j]=array[j+1];
	 			array[j+1]=tmp;
			 }
			 else
			 {
			 	cout<<array[j]<<" Not Replaced "<<array[j+1]<<endl;
			 }
		 }
	 }
	 for(int i=0;i<size;i++)
	 {
	 	cout<<array[i]<<" , ";
	 }
	return 0;
}

