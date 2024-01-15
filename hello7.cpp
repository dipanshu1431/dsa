#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>

#define B_MAG   "\x1B[45m"
#define MAG   "\x1B[35m"
#define BLU   "\x1B[34m"
#define B_BLU   "\x1B[44m"
#define B_RED   "\x1B[41;1m"
#define RED   "\x1B[31;1m"
#define RE   "\x1B[31m"
#define B_CYAN   "\x1B[46m"
#define CYAN   "\x1B[36m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"

using namespace std;
float trent=0;
int tcar=0;
char first_name[20]; 
char last_name[20];
long int contact;
int days;

class car
{
	public:
		
		
		int n;
		char ch;
	
		static int cfigo,critz,cbrio,cfortuner,cscorpio,cinnova,cindigo,cethios,cverna;
		
		void cust_details()
		{
			if(trent==0)
			{	 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
				 cout<<"\tPlease provide cumstomer details\n\n";
				 cout<<"\tEnter first name : ";
				 cin>>first_name;
				 cout<<"\n";
				 cout<<"\tEnter last name : ";
				 cin>>last_name;
				 cout<<"\n";
				 cout<<"\tEnter contact no. : ";
				 cin>>contact;
				 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
				 cout<<"\n";
			}
		}
				
};
int car::cfigo=1;
int car::critz=2;
int car::cbrio=3;
int car::cfortuner=3;
int car::cscorpio=2;
int car::cinnova=4;
int car::cindigo=2;
int car::cethios=1;
int car::cverna=3;

class hatchback:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(60)<<"\t"YEL BOLD"------------------------------------------------------------------------------------"RESET<<"\n";
			
			std::cout<<left<<std::setw(16)<<"";
			std::cout<<left<<std::setw(15)<<"";
			std::cout<<left<<std::setw(31)<<RED"FORD FIGO"RESET;
			std::cout<<left<<std::setw(33)<<BLU BOLD"RITZ"RESET;
			std::cout<<left<<std::setw(23)<<MAG BOLD"BRIO"RESET;
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MODEL NO"RESET;
			std::cout<<left<<std::setw(20)<<"5687";
			std::cout<<left<<std::setw(20)<<"7980";
			std::cout<<left<<std::setw(20)<<"3434";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MILEAGE"RESET;
			std::cout<<left<<std::setw(20)<<"12";
			std::cout<<left<<std::setw(20)<<"11";
			std::cout<<left<<std::setw(20)<<"14";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"COLOR"RESET;
			std::cout<<left<<std::setw(20)<<"Red";
			std::cout<<left<<std::setw(20)<<"Blue";
			std::cout<<left<<std::setw(20)<<"Violet";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"COST"RESET;
			std::cout<<left<<std::setw(20)<<"1000/day";
			std::cout<<left<<std::setw(20)<<"1500/day";
			std::cout<<left<<std::setw(20)<<"1800/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t"YEL BOLD"-------------------------------------------------------------------------------------"RESET"\n";
			
		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t"GRN"--------------------------DETAILS OF HATCHBACK CARS--------------------------"RESET"\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n\n\n";
			
			for(int i=1;i<=cfigo;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_RED"FORD FIGO"RESET"\n\n";
			}
			for(int i=1;i<=critz;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_BLU BOLD"RITZ"RESET"\n\n";
			}
			for(int i=1;i<=cbrio;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_MAG BOLD"BRIO"RESET"\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			
			cout<<"\n";
		}		
		void buy_car()
		{
			
			cout<<"\tDo you want to rent a "CYAN BOLD"Hatchback"RESET" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				cout<<"\tEnter \n\t1.To rent Ford Figo\n\t2.To rent Ritz \n\t3.To rent Brio \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cfigo==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=1;
							cout<<"\t"CYAN BOLD "Total amount = "RESET<<1000*days<<endl<<endl;
							trent+=1000*days;
							cfigo--;
						}	
						break;
					case 2: if(critz==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=2;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<1500*days<<endl<<endl;
							trent+=1500*days;
							critz--;
						}	
						break;	
					case 3: if(cbrio==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=3;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<1800*days<<endl<<endl;
							trent+=1800*days;
							cbrio--;
						}	
						break;	
					default: cout<<"\t"RED"Enter a valid input "RESET"\n";
						 break;
				}
			}
		}
		
};
				
class SUV:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(20)<<"\t"YEL BOLD"-------------------------------------------------------------------------------------"RESET;
			cout<<"\n";
			std::cout<<left<<std::setw(16)<<"";
			std::cout<<left<<std::setw(15)<<"";
			std::cout<<left<<std::setw(31)<<RED"FORTUNER"RESET;
			std::cout<<left<<std::setw(33)<<BLU BOLD"INNOVA"RESET;
			std::cout<<left<<std::setw(23)<<MAG BOLD"SCORPIO"RESET;
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MODEL NO"RESET;
			std::cout<<left<<std::setw(20)<<"5687";
			std::cout<<left<<std::setw(20)<<"7980";
			std::cout<<left<<std::setw(20)<<"3434";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MILEAGE"RESET;
			std::cout<<left<<std::setw(20)<<"17";
			std::cout<<left<<std::setw(20)<<"15";
			std::cout<<left<<std::setw(20)<<"13";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"COLOR"RESET;
			std::cout<<left<<std::setw(20)<<"Red";
			std::cout<<left<<std::setw(20)<<"Blue";
			std::cout<<left<<std::setw(20)<<"Violet";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"COST"RESET;
			std::cout<<left<<std::setw(20)<<"4800/day";
			std::cout<<left<<std::setw(20)<<"4500/day";
			std::cout<<left<<std::setw(20)<<"4000/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t"YEL BOLD"-------------------------------------------------------------------------------------"RESET"\n";
		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t"GRN"--------------------------------DETAILS OF SUV CARS--------------------------"RESET"\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n\n\n";
			
			for(int i=1;i<=cfortuner;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_RED"FORTUNER"RESET"\n\n";
			}
			for(int i=1;i<=cinnova;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_BLU BOLD"INNOVA"RESET"\n\n";
			}
			for(int i=1;i<=cscorpio;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_MAG BOLD"SCORPIO"RESET"\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			
			cout<<"\n";
		}		
		void buy_car()
		{
			cout<<"\tDo you want to rent a "CYAN BOLD"SUV"RESET" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
				cout<<"\tEnter \n\t1.To rent Fortuner\n\t2.To rent Innova \n\t3.To rent Scorpio \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cfortuner==0)
						{
							cout<<"\t"RED "Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=7;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<4800*days<<endl<<endl;;
							trent+=4800*days;
							cfortuner--;
							 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
						}	
						break;
					case 2: if(cinnova==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=8;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<4500*days<<endl<<endl;
							trent+=4500*days;
							cinnova--;
							 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
						}	
						break;	
					case 3: if(cscorpio==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=9;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<4000*days<<endl<<endl;
							trent+=4000*days;
							cscorpio--;
							 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
						}	
						break;	
					default: cout<<"\t"RED"Enter a valid input "RESET"\n";
						 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
						break;
				}
			}
		}
};
class Sedan:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(20)<<"\t"YEL BOLD"-------------------------------------------------------------------------------------"RESET;
			cout<<"\n";
			
			std::cout<<left<<std::setw(16)<<"";
			std::cout<<left<<std::setw(15)<<"";
			std::cout<<left<<std::setw(31)<<RED"INDIGO"RESET;
			std::cout<<left<<std::setw(33)<<BLU BOLD"ETHIOS"RESET;
			std::cout<<left<<std::setw(23)<<MAG BOLD"VERNA"RESET;
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MODEL NO"RESET;
			std::cout<<left<<std::setw(20)<<"5687";
			std::cout<<left<<std::setw(20)<<"7980";
			std::cout<<left<<std::setw(20)<<"3434";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MILEAGE"RESET;
			std::cout<<left<<std::setw(20)<<"15";
			std::cout<<left<<std::setw(20)<<"12";
			std::cout<<left<<std::setw(20)<<"11";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"COLOR"RESET;
			std::cout<<left<<std::setw(20)<<"White";
			std::cout<<left<<std::setw(20)<<"Silver";
			std::cout<<left<<std::setw(20)<<"Black";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"COST"RESET;
			std::cout<<left<<std::setw(20)<<"3000/day";
			std::cout<<left<<std::setw(20)<<"3500/day";
			std::cout<<left<<std::setw(20)<<"3800/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t"YEL BOLD"-------------------------------------------------------------------------------------"RESET"\n";
		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t"GRN"--------------------------------DETAILS OF SEDAN CARS------------------------------"RESET"\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n\n\n";
			
			for(int i=1;i<=cindigo;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_RED"INDIGO"RESET"\n\n";
			}
			for(int i=1;i<=cethios;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_BLU BOLD"ETHIOS"RESET"\n\n";
			}
			for(int i=1;i<=cverna;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|"B_MAG BOLD"VERNA"RESET"\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"_________\n";
			
			cout<<"\n";
		}
		void buy_car()
		{
			
			cout<<"\tDo you wanna rent a "CYAN BOLD"Sedan"RESET" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
				cout<<"\tEnter \n\t1.To rent Indigo\n\t2.To rent Ethios \n\t3.To rent Verna \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cindigo==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=4;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<3000*days<<endl<<endl;
							trent+=3000*days;
							cindigo--;
							 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
						}	
						break;
					case 2: if(cethios==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=5;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<3500*days<<endl<<endl;
							trent+=3500*days;
							cethios--;
							 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
						}	
						break;	
					case 3: if(cverna==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=6;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<3800*days<<endl<<endl;
							trent+=3800*days;
							cverna--;
							 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
						}	
						break;	
					default: cout<<"\t"RED"Enter a valid input "RESET"\n";
					 	cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
						break;
				}
			}
		}
};

class rent:virtual public hatchback,virtual public Sedan,virtual public SUV
{
	public:
		int m;
		void display()
		{
			 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
			cout<<"\t"CYAN BOLD"Please enter the kind of car u wamt "RESET"\n";
			cout<<"\t1.Hatchback \n\t2.Sedan \n\t3.SUV\n\t";
			cin>>m;
			 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
			switch(m)
			{
				case 1: hatchback::display();
					hatchback::get_data();
					hatchback::buy_car();
					break;
				case 2: Sedan::display();
					Sedan::get_data();
					Sedan::buy_car();
					break;
				case 3: SUV::display();
					SUV::get_data();
					SUV::buy_car();
					break;
			}
		}
		
};		
int main()
{
	char ch;
	rent r;
	
	cout<<"\t"B_RED BOLD"-------------------------------WELCOME TO DriveOut RENTALS-----------------------------"RESET"\n";
	r.display();
	
	
	ofstream file;
	file.open("Customer_details.txt");
	file<<"\n\n\t*********** DriveOut Rentals ***********\n";
	file<<"\t                                  RECEIPT                                    \n\n";   
	file<<"\t CUSTOMER DETAILS: \n\n";
	file<<"\t CUSTOMER NAME : "<<first_name<<"  "<<last_name<<endl<<endl;
	file<<"\t CONTACT : "<<contact<<endl<<endl;
	file<<"\t____________________________\n\n";
	file<<left<<setw(20)<<"\t TYPE OF CAR ";
	file<<left<<setw(20)<<" DAYS ";
	file<<left<<setw(20)<<" COST ";
	file<<left<<setw(17)<<" TOTAL  \n";
	file<<"____________________________\n\n\t";

	for(;;)
	{
	
		do
		{
			cout<<"\n";
	
			if(tcar==1)
			{
				file<<left<<setw(20)<<" FORD FIGO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1000";
				file<<left<<setw(20)<<1000*days<<"\n\t";
			}
			
			if(tcar==2)
			{
				file<<left<<setw(20)<<" RITZ :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1500";
				file<<left<<setw(20)<<1500*days<<"\n\t";
			}
			
			if(tcar==3)
			{
				file<<left<<setw(20)<<" BRIO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1800";
				file<<left<<setw(20)<<1800*days<<"\n\t";
			}
			if(tcar==4)
			{
				file<<left<<setw(20)<<" INDIGO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3000";
				file<<left<<setw(20)<<3000*days<<"\n\t";
			}	
			if(tcar==5)
			{
				file<<left<<setw(20)<<" ETHIOS :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3500";
				file<<left<<setw(20)<<3500*days<<"\n\t";
			}
			if(tcar==6)
			{
				file<<left<<setw(20)<<" VERNA :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3800";
				file<<left<<setw(20)<<3800*days<<"\n\t";
			}
			if(tcar==7)
			{
				file<<left<<setw(20)<<" FORTUNER :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4800";
				file<<left<<setw(20)<<4800*days<<"\n\t";
			}
			if(tcar==8)
			{
				file<<left<<setw(20)<<" INNOVA :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4500";
				file<<left<<setw(20)<<4500*days<<"\n\t";
			}
			if(tcar==9)
			{
				file<<left<<setw(20)<<" SCORPIO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4000";
				file<<left<<setw(20)<<4000*days<<"\n\t";
			}
	
			cout<<"\tDo you want to rent another car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='n'||ch=='N')
				break;
				
			r.display();
		}while(ch=='y'||ch=='Y');
		file.close();
		
			string linesread;
			    ifstream infile ("Customer_details.txt");
			    if (infile.is_open())
			    {
				while ( getline (infile, linesread) )
				{
				    cout << linesread << endl;
				}
				infile.close();
			    }
			    else cout << "File cannot be read";
			
			
			cout<<"\t"YEL "Thank You for visiting"RESET"\n";
			cout<<"\t"RED"TOTAL RENT : "RESET<<trent<<endl;
			exit(0);	
	}
	return 0;
}