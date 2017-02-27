#include<iostream>
using namespace std;

class StrMatch{
public:
	int BF(char s1[],char s2[],int a,int b);
	//int KMP(char *s1,*char *s2);
	int aa(int i);
};

int StrMatch::BF(char s1[],char s2[],int a,int b){
	for(int i=0;i<a-b;i++){
	  int j=0;
	  while(j<b){
	    if(s1[i+j]!=s2[j])break;
		++j;
	  }
	  cout<<"j="<<j<<endl;
	  if(j==b)return i+1;
	}
	cout<<"dint match!"<<"\n";
  return -1;
}
int StrMatch::aa(int i){
  cout<<i;
  return 0;
}
void main(){
	char a[]="aaabssssssabcde";
	char b[]="bcd";
  StrMatch sm;
  int ans=sm.BF(a,b,15,3);
  cout<<ans<<endl;

}