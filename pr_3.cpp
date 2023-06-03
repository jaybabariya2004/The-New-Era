#include<iostream>
#include<string.h>

using namespace std;

class employee{
    
    public:
    int emp_id,emp_age,emp_salary,emp_experience;
    char emp_name[20],emp_role[20],emp_city[20],emp_company_name[20];
};
int main(){
	    
	employee obj1,obj2,obj3,obj4,obj5;
	
	obj1.emp_id = 1;
	obj1.emp_age = 19;
	obj1.emp_salary = 15000; 
	obj1.emp_experience = 3;
	strcpy(obj1.emp_name,"Shivam");
	strcpy(obj1.emp_role,"Worker");
	strcpy(obj1.emp_city,"Mumbai");
	strcpy(obj1.emp_company_name,"Shunyavkash");
	cout<<" "<<obj1.emp_id<<"\n";
	cout<<" "<<obj1.emp_name<<"\n";
	cout<<" "<<obj1.emp_role<<"\n";
	cout<<" "<<obj1.emp_age<<"\n";
	cout<<" "<<obj1.emp_salary<<"\n";
	cout<<" "<<obj1.emp_experience<<"\n";
	cout<<" "<<obj1.emp_city<<"\n";
	cout<<" "<<obj1.emp_company_name<<"\n";
	cout<<"--------------------------------"<<"\n";
	
	
	obj2.emp_id = 2;
	obj2.emp_age = 29;
	obj2.emp_salary = 25000; 
	obj2.emp_experience = 5;
	strcpy(obj2.emp_name,"Nayan");
	strcpy(obj2.emp_role,"Worker");
	strcpy(obj2.emp_city,"Vadodra");
	strcpy(obj2.emp_company_name,"Joly");
	cout<<" "<<obj2.emp_id<<"\n";
	cout<<" "<<obj2.emp_name<<"\n";
	cout<<" "<<obj2.emp_role<<"\n";
	cout<<" "<<obj2.emp_age<<"\n";
	cout<<" "<<obj2.emp_salary<<"\n";
	cout<<" "<<obj2.emp_experience<<"\n";
	cout<<" "<<obj2.emp_city<<"\n";
	cout<<" "<<obj2.emp_company_name<<"\n";
	cout<<"--------------------------------"<<"\n";
	
	obj3.emp_id = 3;
	obj3.emp_age = 22;
	obj3.emp_salary = 35000; 
	obj3.emp_experience = 7;
	strcpy(obj3.emp_name,"Kohli");
	strcpy(obj3.emp_role,"Maneger");
	strcpy(obj3.emp_city,"Bangluru");
	strcpy(obj3.emp_company_name,"Devotee");
	cout<<" "<<obj3.emp_id<<"\n";
	cout<<" "<<obj3.emp_name<<"\n";
	cout<<" "<<obj3.emp_role<<"\n";
	cout<<" "<<obj3.emp_age<<"\n";
	cout<<" "<<obj3.emp_salary<<"\n";
	cout<<" "<<obj3.emp_experience<<"\n";
	cout<<" "<<obj3.emp_city<<"\n";
	cout<<" "<<obj3.emp_company_name<<"\n";
	cout<<"--------------------------------"<<"\n";
	
	obj4.emp_id = 4;
	obj4.emp_age = 49;
	obj4.emp_salary = 105000; 
	obj4.emp_experience = 15;
	strcpy(obj4.emp_name,"Manojlal");
	strcpy(obj4.emp_role,"Project Maneger");
	strcpy(obj4.emp_city,"Ahmdabad");
	strcpy(obj4.emp_company_name,"Ajuba");
	cout<<" "<<obj4.emp_id<<"\n";
	cout<<" "<<obj4.emp_name<<"\n";
	cout<<" "<<obj4.emp_role<<"\n";
	cout<<" "<<obj4.emp_age<<"\n";
	cout<<" "<<obj4.emp_salary<<"\n";
	cout<<" "<<obj4.emp_experience<<"\n";
	cout<<" "<<obj4.emp_city<<"\n";
	cout<<" "<<obj4.emp_company_name<<"\n";
	cout<<"--------------------------------"<<"\n";
	
	obj5.emp_id = 5;
	obj5.emp_age = 50;
	obj5.emp_salary = 160000; 
	obj5.emp_experience = 22;
	strcpy(obj5.emp_name,"Janti lal");
	strcpy(obj5.emp_role,"Project Maneger");
	strcpy(obj5.emp_city,"Vapi");
	strcpy(obj5.emp_company_name,"Nasa");
	cout<<" "<<obj5.emp_id<<"\n";
	cout<<" "<<obj5.emp_name<<"\n";
	cout<<" "<<obj5.emp_role<<"\n";
	cout<<" "<<obj5.emp_age<<"\n";
	cout<<" "<<obj5.emp_salary<<"\n";
	cout<<" "<<obj5.emp_experience<<"\n";
	cout<<" "<<obj5.emp_city<<"\n";
	cout<<" "<<obj5.emp_company_name<<"\n";

	
	return 0;
}
