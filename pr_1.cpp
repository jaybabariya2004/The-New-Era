#include<iostream>
#include<string.h>

using namespace std;

class Home{
	
	public:
		int Room_no;
		char Home[20];
};

int main(){
	
	Home obj1,obj2,obj3,obj4,obj5;
	
	obj1.Room_no = 10;
	strcpy(obj1.Home,"Gopinath soc. =");
	cout<<obj1.Home<<" ";
	cout<<obj1.Room_no<<"\n";
	
	obj2.Room_no = 20;
	strcpy(obj2.Home,"Dwarkesh soc. =");
	cout<<obj2.Home<<" ";
	cout<<obj2.Room_no<<"\n";
	
	obj3.Room_no = 30;
	strcpy(obj3.Home,"Hanumaji soc. =");
	cout<<obj3.Home<<" ";
	cout<<obj3.Room_no<<"\n";
	
	obj4.Room_no = 40;
	strcpy(obj4.Home,"Shreenathdwar soc. =");
	cout<<obj4.Home<<" ";
	cout<<obj4.Room_no<<"\n";
	
	
	obj5.Room_no = 50;
	strcpy(obj5.Home,"Suvidha soc. =");
	cout<<obj5.Home<<" ";
	cout<<obj5.Room_no<<"\n";
	
	return 0;
}
