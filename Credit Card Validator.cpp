#include<iostream>
#include<string>
using namespace std;

//This function is used to perform the operations as mentioned by the Luhn's Algorithm and return the result..

int check(string s){
	int d=s.length();
	int flag=0,sum=0;
	for(int i=d-1;i>=0;i--)
	{	int n=s[i]-'0';
		if(flag==1){
			n=n*2;
		}
		sum=sum+n/10;
		sum=sum+n%10;
		flag=!flag;
	}
	return (sum%10==0);
}

int main()
{
	cout<<"*************************Credit Card Validator******************************"<<endl;
	cout<<"\n\n\n\n\n";
	cout<<"Enter the Credit Card Number(without any spaces)-"<<endl;
	string str;
	getline(cin,str);  // This is used to get the Number...
	int res=check(str);
	cout<<"\n"<<endl;
	if(res)				
	cout<<"Relax! Number is Valid"<<endl;
	else
	cout<<"Oops! Number is Not Valid"<<endl;
	return 0;
}
