#include <iostream>
using namespace std;
double suma(double a[], int n);

int main()
{
   double x[] = {1., 34., -234., 43., -12};
   cout << "Suma val. din sirul x este : " << suma(x, 5) << endl;
   return 0;
}

double suma(double a[], int n)
{
   double s = 0.;
   int i;
   for (i = 0; i < n; i++)
      s = s + a[i];
   return s;
}

