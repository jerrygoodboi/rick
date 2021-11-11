//This stupid Encryption algorithm cracker is written by jerrygudboi



#include <iostream>

#include <cstring>

using namespace std;

     int main ()
{    
	 int i;
	 
	 char a[100];
	 
	 do{cout<<"Enter the Noob hash:";
	 
	 cin>>a;
	 
	 i=strlen(a);
	 
	 if(i==8)
	 {
	 cout<<a[5]; //1
	 cout<<a[0]; //2
	 cout<<a[7]; //2
	 cout<<a[3]; //4
	 cout <<"\n";
	 }
	
	 
	 else if(i==9)
	 {
	 cout<<a[6]; //1
	 cout<<a[0]; //2
	 cout<<a[7]; //2
	 cout<<a[8]; //4
	 cout<<a[1]; //5
	 cout <<"\n";
	 } 
	 
	 else if(i==10)
	 {
	 cout<<a[6]; //1
	 cout<<a[0]; //2
	 cout<<a[7]; //2
	 cout<<a[8]; //4
	 cout<<a[1]; //5
	 cout<<a[9]; //6
	 cout <<"\n";
	 }}while(i!=0);
	 
	 
	 
	 return 0;
}

	
	
