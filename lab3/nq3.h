//#include<bits/stdc++.h>
//using namespace std;
//
//class Salary{
//	public:
//	int salary;
//		Salary(int amount){
//			salary = amount;
//		}
//		friend void printSalary();
//	
//};
//
//class Details{
//	public:
//	string place,pincode,phonenum;
//	int noofyears;
//		Details(string place,string pincode,string phonenum){
//			this->phonenum = phonenum;
//			this->pincode = pincode;
//			this->place = place;
//		}
//		void setExperience(int years){
//			noofyears = years;
//		}
//		void address(string place,string pincode,string phonenum){
//			this->phonenum = phonenum;
//			this->pincode = pincode;
//			this->place = place;
//		}
//		friend void printAddress();
//		friend void printExperience();
//};
//
//class Employee{
//	    Details det;
//	    Salary s;
//	    string name;
//	    public:
//		Employee(string name,string place,string pincode,string num,int salary):det(place,pincode,num),s(salary){
//          this->name = name;			
//		}
//		void printName(){
//			cout<<"name of the employee is "<<name<<endl;
//		}
//		void printAddress(){
//			cout<<"Address is "<<det.place<<" , "<<det.pincode<<" , phone num: "<<det.phonenum<<endl;
//		}
//		void printExperience(){
//			cout<<"No. of years of experience is "<<det.noofyears<<endl;
//		}
//		void printSalary(){
//			cout<<"salary is: "<<s.salary<<endl;
//		}
//		void setExperience(int y){
//			det.setExperience(y);
//		}	
//};


































#include<bits/stdc++.h>
using namespace std;

class Salary{
	int salary;
	public:
		Salary(int amount){
			salary = amount;
		}
	    int getSalary(){
	    	return salary;
		}
	
};

class Details{
	
	string place,pincode,phonenum;
	int noofyears;
	public:
		Details(string place,string pincode,string phonenum){
			this->phonenum = phonenum;
			this->pincode = pincode;
			this->place = place;
		}
		void setExperience(int years){
			noofyears = years;
		}
		void address(string place,string pincode,string phonenum){
			this->phonenum = phonenum;
			this->pincode = pincode;
			this->place = place;
		}
//		friend void printAddress();
//		friend void printExperience();
		
		void printAddress(){
			cout<<"Address is "<<place<<" , "<<pincode<<" , phone num: "<<phonenum<<endl;
		}
		int getExperience(){
			return noofyears;
		}
};

class Employee{
	    Details det;
	    Salary s;
	    string name;
	    public:
		Employee(string name,string place,string pincode,string num,int salary):det(place,pincode,num),s(salary){
          this->name = name;			
		}
		void setExperience(int y){
			det.setExperience(y);
		}
		void printName(){
			cout<<"name of the employee is "<<name<<endl;
		}
		
		
		
		
		// there is some problem with this
		
		void printAddress(){
			det.printAddress();
		}
		void printExperience(){
			cout<<"No. of years of experience is "<<det.getExperience()<<endl;
		}
		void printSalary(){
			cout<<"salary is: "<<s.getSalary()<<endl;
		}
};
