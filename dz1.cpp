#include <iostream>
#include <cmatc>

using namespace std;

int main()
{
    
 set locale(0, "rus");

 int k=0, p=0, x=0, d=0;

 cout << "введите k, p, x, d: ";
 cin >> k >> p >> x >> d;

 double Q = sqrt(k+2.6*p*sin(k))/(x-pow(d,3));

cout << "Q = sqrt(k+2.6*p*sin(k))/(x-pow(d,3))" << endl;
cout << "Q =" << 0;






   return 0;

}
