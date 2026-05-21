#include<iostream> 				// Single Responsibility (SRP) 
#include<string>
using namespace std;

class student{
	public:
		
	string name;
	int roll;
	int marks;
	
	
		
		void stDetail(){
			cout<<"Student name is : "<<name<<" "<<endl;
			cout<<"Student roll  is : "<<roll<<" "<<endl;
			cout<<"Student marks  is : "<<marks<<" "<<endl;
		}
};

class StudentAddmission{
	
	public:
		
	bool ten_th_pass;
	
	void checkAddmission(){
	
		if(ten_th_pass){
		cout<<"Addmission successful "<<endl;
	}else{
		cout<<"Give 10th pass certificate"<<endl;
	}
	
	}
};

class subjectsDetail{
	
	string sub1="English";
	string sub2="Urdo";
	string sub3="Math";
	
	public:
		
		void ShowingSubjects(){
			
			cout<<"Total Subjects are ==> "<<sub1<<" "<<sub2<<" "<<sub3<<" "<<endl;
		}
};

int main(){
	cout<<"\n-----------------\n";
	
	student s1;
	s1.name="Alli";
	s1.roll=2003;
	s1.marks=430;
	
	// to call function 
	
	s1.stDetail();
	
	cout<<"\n-------------------\n";
	
	StudentAddmission addForS1;
	
	addForS1.ten_th_pass=true;
	
	// to call function
	
	addForS1.checkAddmission();
	
	cout<<"\n---------------------\n";
	
	// we will set the members so , now only call the method of this class
	
	subjectsDetail subdetailS1;
	
	// to call function 
	
	subdetailS1.ShowingSubjects();	
	
	cout<<"\n-----------------------\n";
	}