//pointer array
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rollno;
	char name[30];
	public:
	void getdata(int x, char y[])    //x=5, y= "ram"
{
	rollno=x;
	strcpy(name,y);
}
void putdata()
{
	cout<<"rollno is= "<<rollno<<endl;
	cout<<"name is="<<name<<endl;
}
};
main()
{
	class student obj[5];
	class student *p[5];
	int i;
	for(i=1;i<=5;i++)
	{
		p[i]=&obj[i];
	}
	int rn;  //rn= rollno
	char n[30];  //n=name
	for(i=1;i<=5;i++)
	{
	cout<<"enter rollno and name= ";
	cin>>rn>>n;   //10   gg
	obj[i].getdata(rn,n);  //  getdata(10,gg)
}
	cout<<"\n \n";
	for(i=1;i<=5;i++)
	{
		obj[i].putdata();
	}
}

