#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Name;
	int s , c;
	float a;
	cout<<"Enter Name :";
	cin>>Name;
	cout<<"Enter Salary";
	cin>>s;
	cout<<"Enter Sale";
	cin>>c;
	cout<<"Emter Commisstion Percent";
	cin>>a;
	cout<<"******Output********\n";
	cout<<"Your name = "<<Name<<endl;
	cout<<"Total Revenue = "<<s + (c*(a/100))<<endl;
	system("pause");
	return (0);
}