#include<iostream>
using namespace std;
class strMatch{
public:
	strMatch();
	void match();
private:
	double num;
};

strMatch::strMatch(){
  cout<<"strMatch start to construct.."<<endl;
}
void strMatch::match(){
  cout<<"match";
}


//int main(){
//	int p;
//	p=90;
//	int *a=&p;
//	int &j=p;
//
//	cout<<a<<endl<<&j<<endl;
//	p+=1;
//	cout<<*a<<endl<<j<<endl;
//	return 0;
//}