#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void printTrade();
void bookTrade();
void userChoice();
void exit();

long USD2INR(long x) // function declaration
{
long finalamount, amount;
finalamount=66*x;
return(finalamount);
}

double INR2USD(double  x)
{
double finalamount, amount,y;

finalamount=0.0153*x;
return(finalamount);
}

int EURO2USD()
{
cout<<"\n To be filled in by the user \n";
}

int USD2EURO()
{
cout<<"\n To be filled in by the user \n";
}

class Forex
{
private:
int useroptions;
int amount[30];
string name[30];
char curr_pair[30];
char reply1;
char reply2;
double finalamount;

public:

int currencyPair(int[]) // function declaration
{
int finalamount[30]; // function prototyping
int i; 
int amount[30];
while(i<3)
finalamount[i]=66*amount[30];
return(finalamount[i]);

}

void bookTrade()
{
int i=0;
int finalamount;
while(i<3) 
{  //while begins
//int i;
//char name[30];

cout<<"\n Whats your name? \n";
cin>>name[i];
cout<<"\n Enter currency pair \n ";
cin>>curr_pair;
cout<<"\n Enter the amount of money you wanna transfer \n";
cin>>amount[i];
cout<<"\n Amount you have entered is \n"<<amount[i]<<"\n";
currencyPair(amount[i]);// function calling
finalamount=currencyPair(amount[i]);
************************************************************************************
// Part of the program that I am editing

cout<<"enter conversion system \n Enter 1 for USD2INR \n Enter 2 for INR2USD \n Enter 3 for EURO2USD \n Enter 4  for USD2EURO \n ";
cin>>curr;
switch(curr)
{
case 1:// USD2INR(amount);
finalamount=USD2INR(amount);
cout<<" \n Final amount after USD2INR is "<<finalamount<<"\n";

break;

case 2: //INR2USD(amount);
finalamount=INR2USD(amount);
cout<<" \n Final amount after INR2USD is "<<finalamount<<"\n";
break;

case 3: EURO2USD();
break;

case 4:USD2EURO();
break;

default: cout<<"\n Invalid input \n ";
break;
}
if(curr==1)
	{
	
	cout<<" \n Final amount after USD2INR is "<<finalamount<<"\n";
	}
		else if(curr==2)
		{
        	
		cout<<" \n Final amount after INR2USD is "<<finalamount<<"\n";		
		}


return 0;
}



*************************************************************************************
cout<<"\n Final value after currency conversion is "<<finalamount<<"\n";
cout<<"\n Do you wanna book this trade? \n";
cout<<"\n Enter capital Y for yes and capital N for no \n";
cin>>reply1;
	if(reply1=='Y')
	{ // first if begins here
		cout<<"\n Trade with John fixed for final amount of"<<finalamount<<"\n Sure you wanna continue? \n ";
		cout<<"\n Enter capital Y for yes and capital N for no \n";
		cin>>reply2;	
			{ // safe parenthesis begins here
			if(reply2=='Y')
				{ // second if begins here
				cout<<"\n Amount "<<finalamount<<" transferred to "<<name[i]<<" \n Thanks for trading!! "<<"\n";
				} // second if ends here
		else if(reply2=='N')
				{ // else if begins here
				cout<<"\n Trade cancelled at second chance !! \n ";
				userChoice();
				} // else if ends here
			} // safe parenthesis ends here	
		
	}// first if ends here
	else if(reply1=='N')
		{
			cout<<"\n Trade cancelled at first chance \n ";
			userChoice();
		} // else if ends here
i++;
} // while ends
//return 0;
userChoice();
}// int main ends here // function bookTrade() ends here


void printTrade()
{
int n,i;
for(n=0;n<3;n++)
{
cout<<"\n Customer name is "<<name[n]<<"\n"<<" Amount is "<<amount[n]<<"\n Final amount is  "<<finalamount[n]<<"\n";
}
userChoice();
}

void exit()
{
cout<<"\n How you gonna exit ? is the question\n";
}

void userChoice()
{
cout<<"\n Enter what you wanna do \n 1) Book Trade \n 2) Print Trades \n 3) Exit \n \n";
cin>>useroptions;

//while(1)
//{//while(1) begins
switch(useroptions)
	{
	case 1: bookTrade();
	break;

	case 2: printTrade();
	break;

	case 3: exit();
	break;	

	default: cout<<"\n Wrong input, buddy !! \n";
	//break;
	//void flushCin();
	}
//} // while(1) ends here
}// function userChoice definition ends here

}; // class ends here

int main()
{
Forex forex1;
forex1.userChoice();
return 0;
}




