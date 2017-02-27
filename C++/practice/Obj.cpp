#include<iostream>
#include<string>
using namespace std;
class obj{
public:
	obj(string st){
		
		str=st;
	};
	 string toString();
     ~obj();//折构函数会在delete时调用，意味着
private:
	string str;
};
obj::~obj(){
	cout<<this->str<<"destroy..."<<endl;
}
string obj::toString(){
  string str="ssss";
  return str;
}

//void main(){
//  obj *o=new obj("s1");
//  obj o2("o2");
//  delete o;
//  o=&o2;
//  cout<<endl<<o;
//  //o->~obj();
//  //cout<<o->toString();
//}