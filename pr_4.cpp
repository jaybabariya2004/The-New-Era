#include<iostream>
#include<string.h>

using namespace std;

class car{
	
	public:
		int car_id,car_model,car_release_year;
		char car_company_name[20],car_color[20];
};
int main(){
	
	car obj1,obj2,obj3,obj4;
	
	obj1.car_id = 01;
	obj1.car_model = 2015;
	obj1.car_release_year = 2009;
	strcpy(obj1.car_company_name,"Volksh vegan");
	strcpy(obj1.car_color,"Nevy Blue");
	cout<<" "<<obj1.car_id<<"\n";
	cout<<" "<<obj1.car_company_name<<"\n";
	cout<<" "<<obj1.car_color<<"\n";
	cout<<" "<<obj1.car_model<<"\n";
	cout<<" "<<obj1.car_release_year<<"\n";
	cout<<"--------------------------------"<<"\n";
	
	obj2.car_id = 02;
	obj2.car_model = 2012;
	obj2.car_release_year = 2000;
	strcpy(obj2.car_company_name,"Suzuki");
	strcpy(obj2.car_color,"Silver");
	cout<<" "<<obj2.car_id<<"\n";
	cout<<" "<<obj2.car_company_name<<"\n";
	cout<<" "<<obj2.car_color<<"\n";
	cout<<" "<<obj2.car_model<<"\n";
	cout<<" "<<obj2.car_release_year<<"\n";
	cout<<"--------------------------------"<<"\n";
	
	obj3.car_id = 03;
	obj3.car_model = 2019;
	obj3.car_release_year = 2011;
	strcpy(obj3.car_company_name,"Toyota");
	strcpy(obj3.car_color,"Black");
	cout<<" "<<obj3.car_id<<"\n";
	cout<<" "<<obj3.car_company_name<<"\n";
	cout<<" "<<obj3.car_color<<"\n";
	cout<<" "<<obj3.car_model<<"\n";
	cout<<" "<<obj3.car_release_year<<"\n";
	cout<<"--------------------------------"<<"\n";
	
	obj4.car_id = 04;
	obj4.car_model = 2016;
	obj4.car_release_year = 2012;
	strcpy(obj4.car_company_name,"BMW");
	strcpy(obj4.car_color,"Red");
	cout<<" "<<obj4.car_id<<"\n";
	cout<<" "<<obj4.car_company_name<<"\n";
	cout<<" "<<obj4.car_color<<"\n";
	cout<<" "<<obj4.car_model<<"\n";
	cout<<" "<<obj4.car_release_year<<"\n";
	
	
	return 0;
}
