#include <iostream>
#include<string.h> 
using namespace std;

int main(){
	int m,d,k,c;
	cin >>m>>d>>k>>c;
	if(0 <= m && m <= 1000 && 0 <= k && k <= 1000 && 0 <= c && c <= 1000 && 0 < d && d <= 1000){
		int check = 0, gold = 0;
		if(d<k){
			cout<< "-1"<<endl;
			return 1;
		}
		if(d==k && m <= 1){
			cout<<gold;
			return 1;
		
		}
	
	int heal=d;
	
	while(1){
		heal-=k;
		check++;
		if(heal-k>=0 && (check + 1)== m){
			cout<< gold <<endl;
			break;
		}
		else if(heal-k<=0){
			heal = d;
			gold+=c;
		}
		
		
	}
	}else{
		cout<<"Du lieu dau vao khong thoa man dieu kien";
	}
	
	return 1;
}
