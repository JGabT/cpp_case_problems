//A program that will ask the user to input 5 numbers and determine the sum
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaration
	const int size=5;
	int num[size];
	int index;
	int sum;
	//execution
	
	//input
	cout<<"Enter "<<size<<" numbers"<<endl;
	for(index=0;index<size;index++)
	{
		cout<<"index["<<index<<"]:";
		cin>>num[index];
	}
	//process
	sum=0; //initialize value of sum
	for(index=0;index<size;index++)
	{
		sum=sum+num[index];
	}
	//output
	cout<<"array elements are: ";
	for(index=0;index<size;index++)
	{
		cout<<setw(5)<<num[index];
		
	}
	
	cout<<endl<<"Sum = "<<sum<<endl;
	
  //	system("pause");
	return 0;
}
