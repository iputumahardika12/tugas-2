#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    bool adatukar=true;
    int n,a,b,temp;
    int x[7];
    a=1;
system("color f6");
    cout<<"jumlah angka: ";
    cin>>n;

    for (int a=1;a<n+1;a++)
    {
        cout<<"masukan angka: ";
        cin>>x[a];
    }

        while (a<n)(adatukar;
    {
        a= 1;
        adatukar =false;

        while (b<=n-a);
        {
            if (x[b]>x[b+1])
            {
                adatukar =true;
                temp =x[b];
                x[b] =x [b+1];
                x[b+1] =temp;
            }
            b=b+1;
        }
        a=a+1;
    }

}
