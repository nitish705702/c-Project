/* *****
*
*
      Nitish Kumar Arya
      Madan mohan malaviya university of technology Gorakhpur
      Computer science and engineering 
     	                WELOCOME                   
     	                
           *******  ******  ******* *******  ******  *******  *******  ******  ******* *******  ******  ******* 
            *****    ****    *****   *****    ****    *****   *****    ****    *****   *****    ****    *****   
	         ***      **      ***     ***      **      ***     ***      **      ***     ***      **      ***
	         ******************       ******************       ******************       ******************    
	          *****************************************         *****************************************   
           *******  ******  ******* *******  ******  *******  *******  ******  ******* *******  ******  ******* 
*
*
*/
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class reservation{
     protected:
	  int p;
	    long int bus_no;
		int age[10];
		int age1;
        int sr;
		char name[56];
		int mob[] ;
		char departure[78];
		char arrival[98];
		int date,date1,date2;
		char dist[200];
		char name1[1000];
		char name2[5][1000];
		char detail[100];
	public:
	    void install();
		void include();
		void passport();
		void availity();
		void application();
		void allotment();
        void position();
	    void show1();
				
    };
   void reservation::availity(){
               cout<<"                  WELOCOME                    "<<" "<<endl;
	cout<<"*******  ******  ******* *******  ******  *******  *******  ******  ******* *******  ******  ******* "<<endl;
	cout<<" *****    ****    *****   *****    ****    *****   *****    ****    *****   *****    ****    ***** "<<endl;
	cout<<"  ***      **      ***     ***      **      ***     ***      **      ***     ***      **      ***  "<<endl;
	cout<<"   ******************       ******************       ******************       ******************   "<<endl;
	cout<<"    *****************************************         *****************************************    "<<endl;
    cout<<"*******  ******  ******* *******  ******  *******  *******  ******  ******* *******  ******  ******* "<<endl;
	cout<<"_____________________________________________________________________________________________________________";
	cout<<endl;
    cout<<" BUS costmer";
	cout<<endl<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	int s=60;
	cout<<"bus model no.-237k30"<<endl;
		cout<<"__________________________________________________________________________________________________";
	cout<<endl<<"total availible sites in bus: "<<s<<endl;
    cout<<"..................................................................................................."<<endl;
	cout<<"air condisner bus "<<endl;
	int d=2;
	cout<<"****************************************************************************************************"<<endl;
	cout<<"number of bus driver :"<<d<<endl;
		cout<<"______________________________________________________________________________________________________";
    long int b_n=8545235-45;
	cout<<"bus number :"<<b_n<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;
	 for(int i=0;i<60;i++)
	  {
	  	if(i<=60)
	  	{
	  		cout.width(10);
	  		cout<<"empty";
		  }
		  	
	}
	
	cout<<endl;
	cout<<"_________________________________________________________________________________________________"<<endl;
    }
    void reservation::application(){
	    cout<<"enter the name :";
		cin>>name;
		cout<<endl;
		cout<<"enter the condidate age :";
		cin>>age1;
		cout<<endl;
		cout<<"enter the mobile number of condidate:";
		for(int j=0;j<10;j++) 
		{
		   cin>>mob[j];
		   cout<<" ";
		}
		cout<<endl;
		cout<<"enter the arrival place :";
		cin>>arrival;
	    cout<<endl;
		cout<<"eneter the departure place :";
		cin>>departure;
	    cout<<endl;
		cout<<"enter the date :"<<endl;
		cout<<"days";
		cin>>date;
		cout<<"month";
		cin>>date1;
		cout<<"year";
		cin>>date2;
		cout<<endl;
		cout<<"enter the condidate home detail:";
		cin>>detail;
		cout<<endl;
		cout<<"enter the condidate distict ";
		cout<<dist;
		cout<<endl;
		cout<<"enter the seat required :";
		cin>>sr;
		cout<<endl;
		cout<<"enter the other passenger name :";
		for(int i=0;i<sr;i++)
		{
			cout<<"enter the name";
	cin.getline(name2[i],1000);
		cout<<endl;
		cout<<"age :";
		cin>>age[i];
		cout<<endl;
		}
		cout<<"---------------------------------";
	}
     void reservation::position()
	 {
     }
     void reservation::allotment()
	 {
	  int seat;
	  char number[5];
	  cout<<"bus number :"<<bus_no;	
     
     }
     void reservation::include()
	 {
     }
     int bus[10];
     void reservation::install()
	 {
	 
		cout<<"enter the bus number";
		cin>>bus_no;
		cout<<" ";
		cout<<"eneter the driver name :";
		cin>>name[p];
		cout<<"arrival time :";
		cin>>arrival;
		cout<<"bus[p].departure :";
		cin>>departure;
		cout<<"from :";
		cin>>name;
		cout<<"to :";
		cin>>name;
    }
     void reservation::show1()
	 {            cout<<"                  WELOCOME                    "<<" "<<endl;
	cout<<"*******  ******  ******* *******  ******  *******  *******  ******  ******* *******  ******  ******* "<<endl;
	cout<<" *****    ****    *****   *****    ****    *****   *****    ****    *****   *****    ****    *****   "<<endl;
	cout<<"  ***      **      ***     ***      **      ***     ***      **      ***     ***      **      ***    "<<endl;
	cout<<"   ******************       ******************       ******************       ******************     "<<endl;
	cout<<"    *****************************************         *****************************************      "<<endl;
    cout<<"*******  ******  ******* *******  ******  *******  *******  ******  ******* *******  ******  ******* "<<endl;
	cout<<endl;
    cout<<" BUS costmer";
	cout<<endl<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	int s=60;
	cout<<"bus model no.-237k30"<<endl;
	cout<<endl;
	cout<<"total availible sites in bus: "<<s<<endl;
    
	cout<<endl;
	cout<<"....................................................................................................."<<endl;
	cout<<endl;
	cout<<"air condisner bus "<<endl;
	int d=2;
	cout<<"****************************************************************************************************"<<endl;
	cout<<"number of bus driver :"<<d<<endl;
	cout<<" gardian applicant name is:"<<name;
	cout<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<" condidate age :"<<age;
	cout<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"mobile number of condidate:";
	for(int j=0;j<10;j++)
	{
	  cout<<mob[j];
	}
	cout<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"arrival place :"<<arrival<<endl;
	  
	cout<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	  cout<<endl;
	  cout<<" departure place :"<<departure;
	  cout<<endl;
	  cout<<endl;
	  cout<<"--------------------------------------------------------"<<endl;
	  cout<<endl;
	  cout<<"date :"<<date;
	  cout<<endl;
	  cout<<"-----------------------------------------------------"<<endl;
	  cout<<endl;
	  cout<<" condidate home town/distict:"<<detail;
	  cout<<endl;
	  cout<<endl;
	  cout<<"-------------------------------------------------------"<<endl;
	  cout<<endl;
	  cout<<" condidate distict "<<detail;
	  cout<<endl;
	  cout<<"-------------------------------------------------------"<<endl;
	  cout<<endl;
	  cout<<" seat required :"<<sr;
	  cout<<endl;
	  cout<<"other passenger name :";
	  cout<<endl;
	  for(int i=0;i<sr;i++)
	  {
	    cout<<name2[i]<<endl;
	    cout<<"age :"<<age[i];
	    cout<<endl;
	  }
  cout<<endl;
  cout<<endl;
  cout<<endl;
  for(int j=0;j<sr;j++)
			{
				cout.width(10);
				cout<<name2[j];
			}
			for(int i=sr;i<60;i++)
			{
				cout.width(10);
				cout<<"empty";
			}
    }
   void reservation::passport()
   {
   	cout<<endl<<endl<<endl;
   	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
 cout<<endl;
    cout<<"___________________________________________________________________________________________________________________________"<<endl;
   	     cout.width(10);
   	     cout<<"condidate gardian name:"<<name<<endl;
         cout.width(5);
	     cout<<"age of gardian condidate :"<<age1<<endl;
         cout.width(100);
         cout<<"travelling date :"<<date<<"-"<<date1<<"-"<<date2;
	     cout<<endl;
		 cout<<"distict :"<<detail;
         cout<<endl;
         cout<<"_____________________________________________________________________________________________________________________________"<<endl;
         cout.width(23);
         cout<<"mobile number of condidate :";
         for(int i=0;i<10;i++)
         {
         	cout<<mob[i];
		 }
		 cout<<endl;
		 cout<<"name and details of all condidates :"<<endl;
		 cout<<"*******************************************************************************************************************************"<<endl;
        for ( int i=0;i<sr;i++ )
	{
		cout <<"name of condidate:";
		cout.width(10);
		cout <<name2[i] <<endl;
		cout<<"age"<<age[i];
	cout<<endl;
	}
         cout<<"___________________________________________________________________________________________________________________________"<<endl;
		 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
         cout<<"___________________________________________________________________________________________________________________"<<endl;
   }
    int main()
            {
    	reservation ob;
	    ob.availity();
	    cout<<endl;
	    ob.application();
        cout<<endl<<endl;
	    cout<<endl;
	    ob.allotment();
        cout<<endl;
	    ob.include();
	    cout<<endl;
     	ob.show1();
    	cout<<endl;
	    ob.position();
	    ob.passport();
	    return 0;
            }
