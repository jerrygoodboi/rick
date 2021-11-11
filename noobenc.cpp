//This Stupid encryption algorithm is written by jerrygudboi

#include <iostream>

#include <cstring>

using namespace std;

int main ()
{ 
        
        int i=0;
		
		char a[20],b[8]={'f','A','R','v','j','S','k','F'};
		
		do{cout<<"Enter a 4 or 5 or 6 letter word:";
		
		cin>>a;
	
		strcat(a,b);
		
		i=strlen(a);
		
		if(i==16)
		{
		cout<<a[1]; // 2  0 
		cout<<a[4]; //    1
		cout<<a[8]; //    2
		cout<<a[3]; // 4  3
	    cout<<a[7]; //    4
	    cout<<a[0]; // 1  5
		cout<<a[9]; //    6
		cout<<a[2]; // 3  7
		cout<<"\n";
		
	    }
		
		
		else if(i==18)
		{
		cout<<a[1];
		cout<<a[4];
		cout<<a[8];
	    cout<<a[7];
	    cout<<a[6]; 
		cout<<a[9];
		cout<<a[0];
		cout<<a[2];
		cout<<a[3];
		cout<<"\n";
	    }
	    
		else if(i==20)
		{
		cout<<a[1];
		cout<<a[4];
		cout<<a[8];
	    cout<<a[7];
	    cout<<a[6]; 
		cout<<a[9];
		cout<<a[0];
		cout<<a[2];
		cout<<a[3];
		cout<<a[5];
		cout<<"\n";
		
		}}while(i!=0);
		
		return 0;
}
