//PROJECT BY AAFTAB NOORANI, AKSHAT KUMAR, AKSHRA SINGH, ANIRUSH SINGH RAUTELA
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class doctors; 
class appointment;
class reg{
	protected:
		char name_arr[30];
		int age_arr;
		char gender_arr[5];
		long long int phone_arr;
		string password_arr;
		char blood_grp[10];
	public:
		void set_data();
		void display_data(int unique_id);
		void login();
		int x[40]={0};
		friend void final_app(reg,doctors,appointment,int n);
		friend void ap_rec(int n,reg,appointment);
		
};

class doctors{
	protected:
		string gen_name[40]={"Dr. Avinash Sharma","Dr. Bhaskar S","Dr. Chris Donalro"};
		string car_name[40]={"Dr. Aaftab Khan","Dr. Asha Sharma","Dr. K K Kapur"};
		string url_name[40]={"Dr. Oshin Sharma","Dr. Divyanshu M","Dr. Saumit Kunder"};
		string drm_name[40]={"Dr. Diya Rana","Dr. Koyna Singh","Dr. Sparsh Kumar"};
		string psy_name[40]={"Dr. Divya Jain","Dr. Thomas John","Dr. Rishika Mehra"};
		
	public:
		friend void final_app(reg,doctors,appointment,int n);
		void display_details(){
			cout.setf(ios::left, ios::adjustfield);
			cout<<"------------------------------------------------------------------------------------------------\n";
			cout.width(7);
			cout<<"S.no";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Doctor's Name";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Specialization";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"Time Slot";
			cout.width(4);
			cout<<"|";
			cout<<"Experience\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
		}
	
};

class appointment: public doctors{
	protected:
		int choice;
		
		char brief_con[200];
		string concerns[6]={"General physician","Cardiology","Urology","Dermetelogy","Psychiatrist"};
		string concern_rec[40];
		string doc_rec[40];
		
	public:
		string date[40];
		int time;
		int ch(){
			return choice;
		}
		string d;
		int optional;
		void health_concern(int n);
		void display();
		void set_date(int n);
		void brief_concern();
		void display_brief();
		friend void ap_rec(int n,reg,appointment);
		friend void final_app(reg,doctors,appointment,int n);
		friend compare_date(appointment,int n,string ad[],int m,int arr[]);
};

class general_phy: public doctors{
	protected:
		
	public:
		void display_details(){
			doctors::display_details();
			//1
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"1.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Avinash Sharma";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"General Physician";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS, DNB, FCPS, FCCM- 6 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//2
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"2.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Bhaskar S";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"General Physician";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"12:00 P.M - 5:30 P.M";
			cout.width(4);
			cout<<"|";
			cout<<"MD (Internal Medicine)- 4 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//3
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"3.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Chris Donalro";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"General Physician";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"6:00 P.M - 10:30 P.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS, MD(General Medicine)- 9 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
		}
};

class cardiology: public doctors{
	public:
		void display_details(){
			doctors::display_details();
			//1
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"1.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Aaftab Khan";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Cardiologist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS, MD , DNB(Card.), DM(Card.)- 5 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//2
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"2.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Asha Sharma";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Cardiologist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"12:00 P.M - 5:30 P.M";
			cout.width(4);
			cout<<"|";
			cout<<"MD; DNB; DM- 6 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//3
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"3.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. K K Kapur";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Cardiologist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"6:00 P.M - 10:30 P.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS, MD(MEDICINE), DM(CARDIOLOGY)- 3 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
		}
};

class urology: public doctors{
	public:
		void display_details(){
			doctors::display_details();
			//1
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"1.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Oshin Sharma";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Urologist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS, MRCP(LONDON)- 5 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//2
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"2.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Divyanshu M";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Urologist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"12:00 P.M - 5:30 P.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS,DNB (Urology)- 2 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//3
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"3.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Saumit Kunder";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Urologist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"6:00 P.M - 10:30 P.M";
			cout.width(4);
			cout<<"|";
			cout<<"DM(Urology)- 11 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
		}
};

class dermetelogy: public doctors{
	public:
		void display_details(){
			doctors::display_details();
			//1
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"1.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Diya Rana";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Dermetelogist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"MD - Dermatology, MBBS- 15 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//2
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"2.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Koyna Singh";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Dermetelogist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS, Diploma (Dermatology)- 19 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"3.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Sparsh Kumar";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Dermetelogist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS, MD(Dermatology, Venereology)- 7 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
}
};

class psychiatrist: public doctors{
	public:
		void display_details(){
			doctors::display_details();
			//1
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"1.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Divya Jain";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Psychiatrist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"MBBS, DPM, DNB (PSYCHIATRY)- 24 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//2
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"2.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Thomas John";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Psychiatrist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"PhD-Psychology - 8 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			//3
			cout.setf(ios::left, ios::adjustfield);
			cout.width(7);
			cout<<"3.";
			cout.width(4);
			cout<<"|";
			cout.width(25);
			cout<<"Dr. Rishika Mehra";
			cout.width(4);
			cout<<"|";
			cout.width(15);
			cout<<"Psychiatrist";
			cout.width(4);
			cout<<"|";
			cout.width(23);
			cout<<"8:30 A.M - 11:00 A.M";
			cout.width(4);
			cout<<"|";
			cout<<"PhD,MD-Psychology- 5 Years Experience.\n";
			cout<<"------------------------------------------------------------------------------------------------\n";
			
		}
};

class bill{
	protected:
		int amount,gen_cost,car_cost,url_cost,der_cost,psy_cost,reg_cost;
		int doc_visited[40];
	public:
		void set_doc_visited(int a,int i){
			doc_visited[i]=a;
		}
		void total(int n,int m);
		//constructor
		bill(){
			reg_cost=150;
			gen_cost=300;
			car_cost=450;
			url_cost=370;
			der_cost=350;
			psy_cost=320;
		}
		
};

void bill::total(int n,int m){
	amount=0;
	cout<<"---------------------------\n";
	if(m==1){
		cout<<"REGISTRATION :- "<<reg_cost<<"\n";
		amount+=reg_cost;
	}
	for(int i=0;i<n;i++){
		if(doc_visited[i]==1){
			cout<<i+1<<". CONSULTANCY (GENERAL PHYSICIAN) :- "<<gen_cost<<"\n";
			amount+=gen_cost;
		}
		else if(doc_visited[i]==2){
			cout<<i+1<<". CONSULTANCY (CARDIOLOGIST) :- "<<car_cost<<"\n";
			amount+=car_cost;
		}
		else if(doc_visited[i]==3){
			cout<<i+1<<". CONSULTANCY (UROLOGIST) :- "<<url_cost<<"\n";
			amount+=url_cost;
		}
		else if(doc_visited[i]==4){
			cout<<i+1<<". CONSULTANCY (DERMETELOGIST) :- "<<der_cost<<"\n";
			amount+=der_cost;
		}
		else if(doc_visited[i]==5){
			cout<<i+1<<". CONSULTANCY (PSYCHIATRIST) :- "<<psy_cost<<"\n";
			amount+=psy_cost;
		}
		
	}
	cout<<"---------------------------\n";
	cout<<"\n******\n";
	cout<<"Total bill:- RS."<<amount;
	cout<<"\n******\n";
}

void ap_rec(int n, reg r,appointment a){
		for(int i=0;i<n;i++){
		
		cout.setf(ios::left, ios::adjustfield);
		cout.width(20);
		cout<<r.name_arr;
		cout.width(4);
		cout<<"|";
		cout.width(6);
		cout<<r.age_arr;
		cout.width(4);
		cout<<"|";
		cout.width(16);
		cout<<a.concern_rec[i];
		cout.width(4);
		cout<<"|";
		cout.width(19);
		cout<<a.date[i];
		cout.width(4);
		cout<<"|";
		cout<<a.doc_rec[i];
		cout<<"\n";
	}
	
}

void appointment::set_date(int n){
	time=0;
	cout<<"\nEnter the DATE for appointment to be booked(DD/MM/YY): ";
	cin>>date[n];
	d=date[n];
	do{
	cout<<"\n1. 8:30 A.M - 11:00 A.M\n";
	cout<<"2. 12:00 P.M - 5:30 P.M\n";
	cout<<"3. 6:00 P.M - 10:30 P.M\n";
	cout<<"----------------------------\n";
	cout<<"Select time slot (Index):- ";
	cin>>time;
	cout<<"----------------------------\n\n";
	}while(time>3);
	if(choice==1){
		if(time==1){
			doc_rec[n]="Dr. Avinash Sharma";
		}
		else if(time==2){
			doc_rec[n]="Dr. Bhaskar S";
		}
		else if(time==3){
			doc_rec[n]="Dr. Chris Donalro";
		}
	}
	else if(choice==2){
		if(time==1){
			doc_rec[n]="Dr. Aaftab Khan";
		}
		else if(time==2){
			doc_rec[n]="Dr. Asha Sharma";
		}
		else if(time==3){
			doc_rec[n]="Dr. K K Kapur";
		}
	}
	else if(choice==3){
		if(time==1){
			doc_rec[n]="Dr. Oshin Sharma";
		}
		else if(time==2){
			doc_rec[n]="Dr. Divyanshu M";
		}
		else if(time==3){
			doc_rec[n]="Dr. Saumit Kunder";
		}
	}
	else if(choice==4){
		if(time==1){
			doc_rec[n]="Dr. Diya Rana";
		}
		else if(time==2){
			doc_rec[n]="Dr. Koyna Singh";
		}
		else if(time==3){
			doc_rec[n]="Dr. Sparsh Kumar";
		}
	}
	else{
		if(time==1){
			doc_rec[n]="Dr. Divya Jain";
		}
		else if(time==2){
			doc_rec[n]="Dr. Thomas John";
		}
		else if(time==3){
			doc_rec[n]="Dr. Rishika Mehra";
		}
	}
}

void compare_dates(appointment a,int n,string ad[],int m,int arr[]){
		
		int count=0;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				if(ad[i]==ad[j]){
					count++;
				}
			}
		}
		if(count<=1){
			ad[n]=a.d;
		}
		for(int i=0;i<=n;i++){
			if(a.date[m]==ad[i]){
				
				if(a.time==1){
					
					arr[0]++;
					if(arr[0]>5){
						cout<<"\n!!! Sorry for the inconvenience this time slot is full for the respective date.\nPlease book for another slot/date.\n";
						arr[0]=0;
						a.set_date(m);
					}
					else{
					
					cout<<"\n************\n";
					cout<<"Your Appointment Number is A"<<arr[0];
					cout<<"\n************\n";
				}
				}
				else if(a.time==2){
					arr[1]++;
					if(arr[1]>5){
						cout<<"\n!!! Sorry for the inconvenience this time slot is full for the respective date.\nPlease book for another slot/date.\n";
						arr[1]=0;
						a.set_date( m);
					}
					else{
					
					cout<<"\n************\n";
					cout<<"Your Appointment Number is: B"<<arr[1];
					cout<<"\n************\n";
				}
				}
				else if(a.time==3){
					
					arr[2]++;
					if(arr[2]>5){
						cout<<"\n!!! Sorry for the inconvenience this time slot is full for the respective date.\nPlease book for another slot/date.\n";
						arr[2]=0;
						a.set_date( m);
					}
					else{
					
					cout<<"\n************\n";
					cout<<"Your Appointment Number is: C"<<arr[2];
					cout<<"\n************\n";
				}
				}
				
			}
		}
		
		
}

void final_app(reg r,doctors d,appointment a,int n){
	switch(a.choice){
		case 1:{
			if(a.time==1){
				
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.gen_name[0]<<"\n";
				cout<<"Concern       :- General Checkup\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 8:30 A.M - 11:00 A.M\n";
				cout<<"________________\n";
			}
			else if(a.time==2){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.gen_name[1]<<"\n";
				cout<<"Concern       :- General Checkup\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 12:00 P.M - 5:30 P.M\n";
				cout<<"________________\n";
			}
			else if(a.time==3){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.gen_name[2]<<"\n";
				cout<<"Concern       :- General Checkup\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 6:00 P.M - 10:30 P.M\n";
				cout<<"________________\n";
			}
			break;
		}
		case 2:{
			if(a.time==1){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.car_name[0]<<"\n";
				cout<<"Concern       :- Cardiology\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 8:30 A.M - 11:00 A.M\n";
				cout<<"________________\n";
			}
			else if(a.time==2){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.car_name[1]<<"\n";
				cout<<"Concern       :- Cardiology\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 12:00 P.M - 5:30 P.M\n";
				cout<<"________________\n";
			}
			else if(a.time==3){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.car_name[2]<<"\n";
				cout<<"Concern       :- Cardiology\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 6:00 P.M - 10:30 P.M\n";
				cout<<"________________\n";
			}
			break;
		}
		case 3:{
			if(a.time==1){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.url_name[0]<<"\n"; 
				cout<<"Concern       :- Urology\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 8:30 A.M - 11:00 A.M\n";
				cout<<"________________\n";
			}
			else if(a.time==2){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.url_name[1]<<"\n"; 
				cout<<"Concern       :- Urology\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 12:00 P.M - 5:30 P.M\n";
				cout<<"________________\n";
			}
			else if(a.time==3){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.url_name[2]<<"\n"; 
				cout<<"Concern       :- Urology\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 6:00 P.M - 10:30 P.M\n";
				cout<<"________________\n";
			}
			break;
		}
		case 4:{
			if(a.time==1){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.drm_name[0]<<"\n"; 
				cout<<"Concern       :- Dermetelogy\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 8:30 A.M - 11:00 A.M\n";
				cout<<"________________\n";
			}
			else if(a.time==2){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.drm_name[1]<<"\n"; 
				cout<<"Concern       :- Dermetelogy\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 12:00 P.M - 5:30 P.M\n";
				cout<<"________________\n";
			}
			else if(a.time==3){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.drm_name[2]<<"\n"; 
				cout<<"Concern       :- Dermetelogy\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 6:00 P.M - 10:30 P.M\n";
				cout<<"________________\n";
			}
			break;
		}
		case 5:{
			if(a.time==1){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.psy_name[0]<<"\n"; 
				cout<<"Concern       :- Psychiatry\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 8:30 A.M - 11:00 A.M\n";
				cout<<"________________\n";
			}
			else if(a.time==2){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.psy_name[1]<<"\n"; 
				cout<<"Concern       :- Psychiatry\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 12:00 P.M - 5:30 P.M\n";
				cout<<"________________\n";
			}
			else if(a.time==3){
				cout<<r.name_arr<<", your apoointment has been successfully booked!!!\n";
				cout<<"________________\n";
				cout<<"Doctor's Name :- "<<d.psy_name[2]<<"\n"; 
				cout<<"Concern       :- Psychiatry\n";
				cout<<"Date          :- "<<a.date[n]<<"\n";
				cout<<"Timing        :- 6:00 P.M - 10:30 P.M\n";
				cout<<"________________\n";
			}
			break;
		}
		default:cout<<"PLEASE VISIT AGAIN!!";
		
	}
}
void appointment::display(){
	cout<<"List of Doctors available with their time slot:-\n";
	cout<<"...................................................\n\n";
	if(choice==1){
		general_phy g;
		g.display_details();
	}
	else if(choice==2){
		cardiology c;
		c.display_details();
	}
	else if(choice==3){
		urology u;
		u.display_details();
	}else if(choice==4){
		dermetelogy d;
		d.display_details();
	}
	else if(choice==5){
		psychiatrist p;
		p.display_details();
	}
}
void appointment::health_concern(int n){
	cout<<"Please specify your health concern:\n";
	cout<<"\n---------------------------------------------------------------------------\n";
	cout<<"---------------------------------------------------------------------------\n";
	cout<<"1. General physician.\n";
	cout<<"(Diagnosing and treating diseases or illnesses that are non-surgical.)\n\n";
	cout<<"2. Cardiology.\n";
	cout<<"(Treatment of disorders of the heart and the blood vessels.)\n\n";
	cout<<"3. Urology.\n";
	cout<<"(Medical conditions of the male and female urinary tract systems.)\n\n";
	cout<<"4. Dermetelogy.\n";
	cout<<"(Manages diseases related to skin, hair, nails, and some cosmetic problems.)\n\n";
	cout<<"5. Psychiatrist.\n";
	cout<<"(Regarding mental health, including substance use disorders.)\n";
	cout<<"---------------------------------------------------------------------------\n";
	cout<<"---------------------------------------------------------------------------\n\n\n";
	cout<<"Please specify your health concern(Enter index no.):- ";
	cin>>choice;
	cout<<"\n";
	concern_rec[n]=concerns[choice-1];
}

void appointment::brief_concern(){
	cout<<"\nPlease brief us about your issue:-\n";
	cout<<"________________xxx________________\n";
	cout<<"Write here:-  ";
	fflush(stdin);
	gets(brief_con);
	cout<<"________________xxx________________\n\n";
	
}
void appointment::display_brief(){
	cout<<"\nA brief about your health issue:-\n";
	cout<<"________________xxx________________\n";
	cout<<brief_con;
	cout<<"\n________________xxx________________\n\n";
}

void reg::set_data(){
	cout<<"Enter your name: ";
	fflush(stdin);
	gets(name_arr);
	cout<<"Enter your age (in numbers): ";
	cin>>age_arr;
	cout<<"Enter your gender(M/F): ";
	cin>>gender_arr;
	cout<<"Specify your blood group: ";
	cin>>blood_grp;
	int no_digitso;
	long long int tempo;
	do{
		no_digitso=0;
		cout<<"Enter your phone number: ";
		cin>>phone_arr;
		tempo=phone_arr;
		while(tempo!=0){
			tempo=tempo/10;
			no_digitso++;
		}
		if(no_digitso!=10){
			cout<<"INVALID PHONE NUMBER!!!\nEnter a valid phone number.\n";
		}
	}while(no_digitso!=10);
	int len;
	cout<<"Set your 6 digit PASSWORD: ";
	int ch;
	ch=getch();
	while(ch!=13){
		password_arr="";
		password_arr.push_back(ch);
		cout<<'*';
		ch=getch();
	}
	cout<<"\nYou have successfully registered!!!\n";
	}

void reg::display_data(int unique_id){
	cout.setf(ios::left, ios::adjustfield);
		cout.width(20);
		cout<<name_arr;
		cout.width(4);
		cout<<"|";
		cout.width(6);
		cout<<age_arr;
		cout.width(4);
		cout<<"|";
		cout.width(9);
		cout<<gender_arr;
		cout.width(4);
		cout<<"|";
		cout.width(14);
		cout<<blood_grp;
		cout.width(4);
		cout<<"|";
		cout.width(17);
		cout<<phone_arr<<"\n";
		cout<<"\n\n********";
		cout<<"\nYour unique ID is "<<unique_id<<".\n";
		cout<<"********\n\n";
}
// extra
void reg::login(){
	string password;
	do{
	cout<<"Enter your Password:- ";
	int ch;
	ch=getch();
	while(ch!=13){
		password.push_back(ch);
		cout<<'*';
		ch=getch();
	}
	if(password==password_arr){
		cout<<"\nWelcome "<<name_arr<<", you have successfully logged in!!!\n";
	}
	else{
		cout<<"Invalid credentials!!!\n";
		cout<<"Enter correct password.\n";
	}
	}while(password!=password_arr);
}
//binary search 
 int login_idx(int arr[],int beg,int end){
 	int id;
 	cout<<"\nEnter your Registration ID:- ";
 	cin>>id;
 	while(beg<=end){
 		int mid=beg+end/2;
 		if(arr[mid]==id){
 			return mid;
		 }
		 else if(arr[mid]>id){
		 	end=mid-1;
		}
		else if(arr[mid]<id){
			beg=mid+1;
		}
	}
	return -1;
 }
 
void final_form(){
	cout.setf(ios::left, ios::adjustfield);
		cout.width(20);
		cout<<"Name";
		cout.width(4);
		cout<<"|";
		cout.width(6);
		cout<<"Age";
		cout.width(4);
		cout<<"|";
		cout.width(9);
		cout<<"Gender";
		cout.width(4);
		cout<<"|";
		cout.width(14);
		cout<<"Blood Group";
		cout.width(4);
		cout<<"|";
		cout.width(14);
		cout<<"Contact Number\n";
		cout<<"-------------------------------------------------------------------------------\n";
}
void menu(){
	cout<<"\n============================##============================\n";
	cout<<"Press 1 to book an appointment.\n";
	cout<<"Press 2 to view you checkup history.\n";
	cout<<"Press 3 to view your bill.\n";
	cout<<"============================##============================\n\n";
	cout<<"Enter your choice:- ";
}
void appointment_record(){
	cout.setf(ios::left, ios::adjustfield);
	cout<<"\n\n_________________________________\n";
	cout.width(20);
	cout<<"Patient's Name";
	cout.width(4);
	cout<<"|";
	cout.width(6);
	cout<<"Age";
	cout.width(4);
	cout<<"|";
	cout.width(16);
	cout<<"Concern";
	cout.width(4);
	cout<<"|";
	cout.width(19);
	cout<<"Appointment Date";
	cout.width(4);
	cout<<"|";
	cout<<"Doctor's Name\n";
	cout<<"_______________________________\n";
}
//bubble sort
void sort_id(int arr[],int n){
	for (int i=0;i<n-1;i++) {
    	for (int j = 0; j < n - i - 1;j++) {
   			if (arr[j] > arr[j + 1]) {
       			int temp = arr[j];
       			arr[j] = arr[j + 1];
       			arr[j + 1] = temp;
     		}	
    	}
	}
}

int main(){
	reg r[40];
	doctors d[40];
	appointment a[40];
	bill b[40];
	string all_dates[40];
	int date_arr[3]={0};
	int no_appointments=0,no_dates=0;
	int choice_1,choice_2,choice_3,n=0,e=0,idx,unique_id=1001,id[40],cont=0,num[40]={0},doc_vis;
	cout<<"					****************\n";
	cout<<"						WELCOME TO HEAL AND HEALTH HOSPITAL\n";
	cout<<"					****************\n";
	do{
	
	do{
	menu_page:
	cout<<"--------------------------\n";
	cout<<"Press 1 to Register.     |\n";
	cout<<"--------------------------\n";
	cout<<"Press 2 to Login.        |\n";
	cout<<"--------------------------\n";
	cout<<"Press 3 to Exit.         |\n";
	cout<<"--------------------------\n\n";
	cout<<"Enter your choice: ";
	cin>>choice_1;
	switch(choice_1){
		case 1:{
			cout<<"\n";
			r[n].set_data();
			cout<<"\nFinal form:-\n";
			final_form();
			id[0]=1001;
			r[n].display_data(id[n]);
			unique_id++;
			n++;
			id[n]=unique_id;
			sort_id(id,n);
			break;
		}
		case 2:{
			int log;
			log=1;
			int beg=0,end=n,fail_case;
			idx=login_idx(id,beg,end);
			if(idx==-1){
				cout<<"\nxxx-Invalid ID-xxx\n";
				cout<<"\nPress [1] to go back to REGISTRATION/LOGIN page: ";
				cin>>fail_case;
				if(fail_case==1){
					goto menu_page;	
				}
			}
		
			else{
				r[idx].login();
				e=1;
				int no_visit;
				r[idx].x[idx]++;
				no_visit=r[idx].x[idx];
				do{
				
				menu();
				cin>>choice_2;
				switch(choice_2){
					case 1:{
						int c;
						a[idx].health_concern(num[idx]);
						doc_vis=a[idx].ch();
						b[idx].set_doc_visited(doc_vis,num[idx]);
						a[idx].display();
						a[idx].set_date(num[idx]);
						cout<<"\n*OPTIONAL\n\nWould you like to BRIEF US ABOUT YOUR CONCERN.\n";
						cout<<"If yes press[1] else press[0]:- ";
						cin>>c;
						if(c==1){
							a[idx].brief_concern();
							a[idx].optional=1;
						}
						final_app(r[idx],d[idx],a[idx],num[idx]);
						compare_dates(a[idx],no_dates,all_dates,num[idx],date_arr);
						no_dates++;
						num[idx]++;
						no_appointments++;
						cout<<"\nPress [0] to go to menu page (else press 1): ";
						cin>>choice_3;
						break;
				
					}
					case 2:{
						appointment_record();
						ap_rec(num[idx],r[idx],a[idx]);
						if(a[idx].optional==1){
							a[idx].display_brief();
						}
						cout<<"\nPress [0] to go to menu page (else press 1): ";
						cin>>choice_3;
						break;
					}
					case 3:{
						b[idx].total(no_appointments,no_visit);
						cout<<"\nPress [0] to go to menu page (else press 1): ";
						cin>>choice_3;
						break;
					}
				}
			}while(choice_3==0);
			no_appointments=0;
			}
			break;
		}
		case 3:{
			cout<<"\n						THANK  YOU !!!!\n";
			cout<<"						STAY HEALTHY!!!!";
			cont=1;
			e=1;
			break;
		}
		default:cout<<"Invalid Input!!!\n";
	}
	}while(e==0);
	if(e!=1){
		cout<<"\nPress [0] to go to Registration/Login page: ";
		cin>>cont;
		cout<<"\n";
	}
}while(cont==0);	
}
