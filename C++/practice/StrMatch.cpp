#include<iostream>
using namespace std;

class StrMatch{
public:
	int BF(char[] *s1,char[] *s2);
	//int KMP(char *s1,*char *s2);
};

int StrMatch::BF(char[] *s1,char[] *s2){
  cout<<*s1<<endl<<*s2;
  return 0;
}

void main(){
 StrMatch sm;
 char s1[6]="dadaa";
 char s2[4]="aa";
 sm.BF(&s1,&s2);

}