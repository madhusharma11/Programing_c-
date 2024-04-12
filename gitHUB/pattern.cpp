#include<iostream>
#include<cmath>
using namespace std;


int main()
{

int n= 5;
int k=1;
float temp1 = static_cast<float>(n) / 2.0; // or simply n / 2.0 if n is already a float
int temp= round(temp1);

cout<<"round="<<temp<<endl;
int j;
int i;
for(i=1;i<=temp;i++)
{
    for(j=1;j<=i;j++)
    {
        if(k!=i)
       {
           cout << "-";
           k++;
           continue;
       }
       else
       {
           cout << "*";
       }
      
    }
    k=1;
     cout<<"j="<<j<<endl;
    cout << endl;
}
 cout<<"i="<<i<<endl;
  // cout << k;
return 0;
}
