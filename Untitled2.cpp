#include<iostream>
using namespace std;
int main()
{
int score;
cout<<"enter score"<<endl;
cin>>score;
{
	if(score>=80){
	cout<<"grade A"<<endl;
	}else if(score>=70){
	cout<<"grade B"<<endl;
	}else if(score>=60){
	cout<<"grade C"<<endl;
	}else if(score>=50){
	cout<<"grade D"<<endl;
	}else if(score>=0){
	cout<<"grade E"<<endl;
	}else{
	cout<<"score not within range"<<endl;
	}
}
return 0;
}