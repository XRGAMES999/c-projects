#include<iostream>
using namespace std;
int main(){
int num,i,j=0;
cin>>num;
for(i=2;i<num;i++)
if(num%i==0)
j++;
if (j==0)
cout<<"prime";
else
cout<<"not";
return 0;
}