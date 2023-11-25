#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>=b&&a>=c&&b>=c)
    cout<<a<<"\t"<< b <<"\t" <<c;
    if(a>=b&&a>=c&&c>b)
    cout<<a<<"\t"<< c<<"\t" << b;
    if(b>a&&b>=c&&a>=c)
    cout<<b<<"\t"<<a<<"\t"<<c;
    if(b>a&&b>=c&&c>a)
    cout<<b<<"\t"<<c<<"\t"<<a;
    if(c>a&&c>b&&a>=b)
    cout<<c<<"\t"<<a<<"\t"<<b;
    if(c>a&&c>b&&b>a)
    cout<<c<<"\t"<<b<<"\t"<<a;
}