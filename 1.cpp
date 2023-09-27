#include <iostream> // ploshad treugolnika
#include <math.h>
using namespace std;
int main()
{float a, b, c, P, S;
cout<<"\n a="; cin>>a;
cout<<"\n b="; cin>>b;
cout<<"\n c="; cin>>c;
if ((a>0) && (b>0) && (c>0) && (a+b)>c && (a+c)>b && (b+c)>a)
	{
		P=(a+b+c)/2;
		S=sqrt(P*(P-a)*(P-b)*(P-c));
		cout<< "\n Ploshad="<<S;
     }
else cout << ("\n NET.");
return 0; 
}	 
