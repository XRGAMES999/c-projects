#include<iostream>
using namespace std;
int main(){
float g;
cout<<"enter num"<<endl;
cin>>g;
if (g>=90)
cout<<"A";
else if (g>=80)
cout<<"B";
else if (g>=70)
cout<<"C";
else if (g>=50)
cout<<"D";
else 
cout<<"F";
return 0;
}