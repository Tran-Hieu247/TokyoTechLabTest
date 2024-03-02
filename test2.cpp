#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool KiemTraXauNgoac(string str,stack<char> a){
		for(int i=0;i<str.size();i++){
			if(str[i]==' '){
				continue;
			}else{
				if(str[i]=='('||str[i]=='['||str[i]=='{'){
					a.push(str[i]);
				}
				else{
					if(!a.empty()){
				
						if(str[i]==']'){
							if(a.top()!='['){
								return false;
							}
						}
						if(str[i]==')'){
							if(a.top()!='('){
								return false;
							}
						}
						if(str[i]=='}'){
							if(a.top()!='{'){
								return false;
							}
						}
						a.pop();
					}else {
						return false;
					}
				}
			}	
	}
	return a.empty()==true;
		
}
int main(){
	int N;
	cin>>N;
	int b[100000]; 
	cin.ignore();
	string str;
	stack<char> a;
	if(0<N && N<=100){
		for(int i=0;i<N;i++){
			if(str.size()<=100000){
				getline(cin,str);
				if(KiemTraXauNgoac(str,a)==true){
					b[i]=1;
				}
				else {
					b[i]=0;
				}
			}else{
				cout<<"Du lieu khong thoa man yeu cau";
				return 0;
			}
			
		}
		for(int i=0;i<N;i++){
			if(b[i]==1){
				cout<<"true"<<endl;
			}else if(b[i]==0){
			cout<<"false"<<endl;
			}
		}
	}else{
		cout<<"Du lieu khong thoa man yeu cau";
	}
	

	return 0;
}
