#include <iostream>
#include <string>
using namespace std;
int main ()
{
int point;
cout <<"enter the point " <<endl;
cin>>point;
if(point<=1){
	cout<<"grade distictin"<<endl;
	
}else if(point<=2){
	cout<<"grade credit "<<endl;
	
}else if(point <=3){
	cout<<"grade pass"<<endl;
	
}else if(point<=4){
	cout<<"grade fail"<<endl;
}

return 0;
}