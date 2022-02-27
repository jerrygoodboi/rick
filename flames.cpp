#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[10],b[10];
	cout<<"Enter two names:";
	cin.getline(a,10);
	cout<<"Enter the other name:";
	cin.getline(b,10);
	int i,d,f,g;
	f=strlen(a);
	g=strlen(b);
	for(i=0;i<f;i++){
	for(d=0;d<g;d++){
	if(a[i]!=b[d]){
	cout<<a[i];
	break;}
	else{break;}}}
	for(d=0;d<g;d++){
	for(i=0;i<f;i++){
	if(a[i]!=b[d]){
	cout<<b[d];
	break;}
	else{break;}}}
        cout<<"\n"; 
return 0;}
