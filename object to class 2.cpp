//object to class
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
	cout<<"name is="<<name;
}
};
main()
{
	class student obj;
	int rn;  //rn= rollno
	char n[30];  //n=name
	cout<<"enter rollno and name= ";
	cin>>rn>>n;   //10   gg
	obj.getdata(rn,n);  //  getdata(10,gg)
	obj.putdata();
}

