#include <iostream>
using namespace std;

int main(){
	int array[]={5,1,7,3,2,10};
	for(int i=0;i<6;i++)
	{
		for(int j=i;j<6;j++)
		{
			if(array[i]>array[j])
			{
				cout<<"Array value1   "<<array[i]<<"  Replace With   "<<array[j]<<endl;
				int temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
			else
			{
				cout<<"Array value1   "<<array[i]<<"  Value2   "<<array[j]<<endl;
			}
		}
	}
    for(int i=0;i<6;i++){
    	cout<<array[i]<<endl;
	}
	return 0;
}

