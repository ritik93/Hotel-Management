#include<iostream>
#include<string>
#include<cstdio>
#include<fstream>
using namespace std;
struct user{
	int userid;
	char first[30],last[30];
	long int mobno;
	char emailid[30];
	char gen[2];
	char date[25];
	int room;};
	void cost(void);
	void reservation(void);
	void payment(void);
int main()
{
	cout<<"      *                                *"<<endl;
	cout<<"    **                                  **"<<endl;
	cout<<" *** Welcome to Novotel Hotel Booking Page ***"<<endl;
	cout<<"         - Hospitality is our passion"<<endl;
	cout<<"    **                                  **"<<endl;
	cout<<"      *                                *"<<endl;
	cost();
	reservation();
	payment();
	return 0;
    }
void cost()
 {
    int choice,days,total1,adult,children;;
    char AC,again;
    int ac=1000;
    int superior= 3000;
    int premier=4500;
    int resid=6000;
    int time=24;
    int service=300;
    do
    {
    cout<<"Which kind of Room would you like to stay in?  "<<endl;
    cout<<endl;
               cout<<" 1.Superior Rooms "<<endl;
               cout<<endl;
               cout<<" 2.Premier Rooms "<<endl;
               cout<<endl;
               cout<<" 3.Residences "<<endl;
               cout<<endl;

    cout<<"Select 1,2 or 3 . "<<endl;
    cout<<endl;
    cout<<"Enter Your Choice Here_: ";
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
    case 1:
         cout<<"You have Selected Superior room. "<<endl;
         cout<<endl;
         cout<<" For How many days do you want to stay ?";
         cin>>days;
         cout<<endl;
         cout<<"Enter the number of adults:\t";
         cin>>adult;cout<<endl;
         cout<<"Enter the number of children:\t";
         cin>>children;cout<<endl;
         cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;
        if (AC == 'Y' || AC == 'y')
       {
         total1 =(ac+superior+time+service)*days+(adult*100)+(children*50);
         cout<<"Your Total bill + service tax = Rs."<<total1<<endl;
         cout<<endl;
         cout<<"______________________________"<<endl;
       }
        else if (AC == 'N' || AC == 'n')
      {
         total1=((superior+time+service) * days)+(adult*100)+(children*50);
         cout<<"Your Total bill + service tax = Rs."<<total1<<endl;
         cout<<endl;
         cout<<"_______________________________"<<endl;
      }
         break;
         case 2:
         cout<<"You Have Selected Premier room."<<endl;
         cout<<endl;
         cout<<" For How many days do you want to stay ? ";
         cin>>days;
         cout<<"Enter the number of adults:\t";
         cin>>adult;cout<<endl;
         cout<<"Enter the number of children:\t";
         cin>>children;cout<<endl;
         cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;

        if (AC == 'Y' || AC == 'y')
       {
         total1 =((ac+premier+time+service)*days)+(adult*100)+(children*50);
         cout<<"Your Total Total bill + service tax = Rs."<<total1<<endl;
         cout<<endl;
         cout<<"__________________________________"<<endl;
       }
         else if (AC == 'N' || AC == 'n')
       {
         total1=((premier+time+service) * days)+(adult*100)+(children*50);
         cout<<"Your Total Total bill + service tax = Rs."<<total1<<endl;
         cout<<endl;
         cout<<"_______________________________________"<<endl;
       }
         break;
         case 3:
         cout<<"You Have Selected Residences "<<endl;
         cout<<endl;
         cout<<" For How many days do you want to stay: ";
         cin>>days;
         cout<<"Enter the number of adults:\t";
         cin>>adult;cout<<endl;
         cout<<"Enter the number of children:\t";
         cin>>children;cout<<endl;
         cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;
        if (AC == 'Y' || AC == 'y')
       {
         total1 =((ac+resid+time+service)*days)+(adult*100)+(children*50);
         cout<<"Your Total Total bill + service tax = Rs."<<total1<<endl;
         cout<<endl;
         cout<<"_______________________________________"<<endl;
       }
         else if (AC == 'N' || AC == 'n')
       {
         total1=((resid+time+service) * days)+(adult*100)+(children*50);
         cout<<"Your Total Total bill + service tax = Rs."<<total1<<endl;
         cout<<endl;
         cout<<"__________________________________________"<<endl;
       }
         break;
         default:
         cout<<"you have enter an invalid Choice "<<endl;
         cout<<endl;
    }
         cout<<"Do you want to checkout for another room? (Y/N): ";
         cin>>again;
         cout<<"___________________________________"<<endl;
         cout<<endl;
    }
    while(again == 'y' || again == 'Y');
    }
    void reservation()
    {
             user guest;
             char choicedo;

    do
    {
    ofstream file;
    file.open("reservation.txt",ios::out);
    if(!file)
   {
    cout<<"Error: Cannot open file.\n";
    }
    cout<<"Enter The Room # to be Reserved:(100-200) ";
    cin>>guest.room;
    cout<<endl;
    cout<<"Enter Guest's First Name: ";
    cin.getline(guest.first,30);
    cout<<endl;
    cout<<"Enter Guest's Last Name:";
    cin.getline(guest.last,30);
    cout<<"\n";
    cout<<"Enter gender of the guest:(M/F)";
    cin.getline(guest.gen,2);
    cout<<endl;
    cout<<"Enter The Mobile no. of The Guest: (Add the Country code) +";
    cin>>guest.mobno;
    cout<<endl;
    cout<<"Enter the emailid of the guest: ";
    cin.getline(guest.emailid,30);
    cout<<endl;
    cout<<"Date: ";
    cin.getline(guest.date,25);
    cout<<endl;
    int a;
    cout<<"Press 1 to Save or 2 to cancel: ";
    cout<<endl;
    cin>>a;
    if(a==1)
       {
    cout<<endl;
    file<<" Guests Info"<<endl;
    cout<<endl;
    file<<"------------------------------------------------------------"<<endl;
               file<<endl;
               file<<"              Reservation Data of Room no.: "<<guest.room<<endl;
               file<<endl;
               file<<"The Name of the Guest is: "<<guest.first<<" "<<guest.last<<endl;
               file<<endl;
               file<<"Mobile No.: +"<<guest.mobno<<endl;
               file<<endl;
               file<<"Gender:"<<guest.gen<<endl;
               file<<endl;
               file<<"Email id: "<<guest.emailid<<endl;
               file<<endl;
               file<<"Date: "<<guest.date<<endl;
               file<<endl;

    file<<"------------------------------------------------------------"<<endl;
    file.close();
    cout<<"Record Saved..."<<endl;
    cout<<"__________________________________"<<endl;
    cout<<endl;
        }
        else
        {
         cout<<"Record Was Not Saved"<<endl;
         cout<<"____________________________________"<<endl;
         cout<<endl;
        }
         cout<<"Enter Y To input an other data or Enter N to Exit: ";
         cin>>choicedo;
         cout<<"_____________________________________"<<endl;
         cout<<endl;
         }
         while (choicedo=='y' || choicedo=='Y');
  }
  void payment()
{   char bank[30];
    long int cardno;
    int cvv;
    ofstream pfile;
    pfile.open("payment.txt",ios::out);
    if(!pfile)
    {
     cout<<"Error: Cannot open file"<<endl;
     exit(1);
    }
    char paychoice;
	cout<<"Do you wish to pay and save the details (Y/N)?"<<endl;
	cin>>paychoice;
    if(paychoice=='Y' || paychoice=='y')
    {
     cout<<"Enter your Bank name"<<endl;
     cin.getline(bank,30);cout<<endl;
     cout<<"Enter your card number"<<endl;
     cin>>cardno;cout<<endl;
     cout<<"Enter your cvv no:"<<endl;
     cin>>cvv;cout<<endl;
     cout<<"__________________________________"<<endl;
     cout<<"######## Processing the details ##########"<<endl;
     cout<<"__________________________________"<<endl;
     cout<<endl;
     cout<<"---------***  Payment Successful ***----------"<<endl;
     cout<<"      *                                       *"<<endl;
     cout<<"    **                                         **"<<endl;
     cout<<"  *** Thank You for booking with Novotel Hotels ***"<<endl;
     cout<<"****    We look foward to your stay with us      ****"<<endl;
     cout<<"  ***                                           ***"<<endl;
     cout<<"   **                                          **"<<endl;
     cout<<"      *       Novotel Hotels Limited         *"<<endl;
     pfile<<" Bank Name of guest:  "<<bank;
     pfile<<endl;
     pfile<<" Card number of the guest"<<cardno;
     pfile<<endl;
     pfile<<" CVV no. of the card: ***";
     pfile<<endl;
     pfile.close();
    }
    else
        if (paychoice=='N' || paychoice=='n')
    {
     exit(1);
    }
}


