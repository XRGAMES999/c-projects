#include<iostream>
using namespace std;
int main(){
int n=1;
cout<<"n\tn*10\tn*100\tn*1000"<<endl;
cout<<"--\t----\t------\t--------"<<endl;
do
{
  cout<<n<<"\t"<<n*10<<"\t"<< n*100<<"\t"<<n*1000<<endl;
} while (++n<=5);

return 0;
}