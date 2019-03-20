#include <iostream>
#include <windows.h>

using namespace std;
void QS( int DataSimpan[], int Kiri, int Kanan)
{
    system ("color f6");
    int A=Kiri, B=Kanan;
    int Temp;
    int Bagi=DataSimpan[(Kiri+Kanan)/2];

    while(A<=B)
    {
        while(DataSimpan[A]<Bagi)
        A++;
        while(DataSimpan[B]>Bagi)
        B--;
        if(A<=B)
        {
            Temp=DataSimpan[A];
            DataSimpan[A]=DataSimpan[B];
            DataSimpan[B]=Temp;
            A++;
            B--;
        }
    }

    if(Kiri<B)
    {
        QS(DataSimpan,Kiri,B);
    }
    if(A<Kanan)
    {
        QS(DataSimpan,A,Kanan);
    }
}

int main()
{
     system ("color f6");
    int DataSimpan[100];
    int A,BanyakData,AwalBatas,AkhirBatas;
    AwalBatas=0;
    cout<<"======QUICK SORT======"<<endl;
    cout<<"masukkan banyak data yang di urut: "; cin>>BanyakData;

    AkhirBatas=BanyakData;
    cout<<"masukkan data-datanya: \n\n";
    for(A=1; A<=BanyakData; A++)
    {
        cout<<"Masukan data ke- "<<A<<" : "; cin>>DataSimpan[A];
    }

    QS(DataSimpan,AwalBatas,AkhirBatas);
    cout<<"\nHasil pengurutan data: ";
    for(A=1; A<=BanyakData; A++)
        cout<<" "<<DataSimpan[A];
}
