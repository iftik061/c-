#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

fstream MyFile("Assignmentfile.txt",ios::app);



int userno;
char name[16];
char lastname[16];
char address[51];
char cellno[14];
char landlineno[12];
char sent;

void userinput();
void searchfunc();
void deletecontact();
void displaycontact();
void modifycontact();
void sortcontact();
void findcontact();




int main()
{
	
	
	
	userinput();
	
	
	
	return 0;
}

void userinput()
{
	
		cout<<"Would you like to enter a new contact? (N)"<<endl;
		cout<<"Would you like to Display all contacts? (D)";
		cin>>sent;
		while (sent=='N')
		{
			
			
			cout<<"Enter Name: ";
			cin>>name;
			MyFile<<left<<setw(16)<<name<<"|";
			cout<<"Enter Last name: ";
			cin>>lastname;
			MyFile<<left<<setw(16)<<lastname<<"|";
			cout<<"Enter Address: ";
			cin>>address;
			MyFile<<left<<setw(51)<<address<<"|";
			cout<<"Enter Cell Number: ";
			cin>>cellno;
			while (cellno[0]!='+')
			{
				cout<<"Enter Cell number again starting with +92"<<endl;
				cout<<"Enter Cell Number: ";
				cin>>cellno;
			}
			while (cellno[1]!='9')
			{
				cout<<"Enter Cell number again starting with +92"<<endl;
				cout<<"Enter Cell Number: ";
				cin>>cellno;
			}
			while (cellno[2]!='2')
			{
				cout<<"Enter Cell number again starting with +92"<<endl;
				cout<<"Enter Cell Number: ";
				cin>>cellno;
			}
			MyFile<<left<<setw(14)<<cellno<<"|";
			cout<<"Enter Landline Number: ";
			cin>>landlineno;
			while (landlineno[0]!='0')
			{
				cout<<"Please enter Landline Number again starting with 0"<<endl;
				cout<<"Enter Landline Number: ";
				cin>>landlineno;
			}
			MyFile<<left<<setw(12)<<landlineno<<endl;
			cout<<endl;
			cout<<"Would you like to enter a new contact? (N)";
			cin>>sent;
			cout<<"Would you like to Display all contacts? (D)";
			}
			while (sent=='D')
			{
			
			MyFile.open("Assignment.txt");
			while(MyFile.eof()!=1)
			{
    		    MyFile>>name>>lastname>>address>>cellno>>landlineno;
    		    cout<<setw(16)<<name<<setw(16)<<lastname<<setw(51)<<address<<setw(14)<<cellno<<setw(12)<<landlineno;
			}
			cout<<"Would you like to enter a new contact? (N)";
			cin>>sent;
			cout<<"Would you like to Display all contacts? (D)";
			
			}
		MyFile.close();
	
	
	
	

	}

