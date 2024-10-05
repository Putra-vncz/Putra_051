
#include <iostream>
using namespace std;

int main()
{
    int boneka, harga, bayar;
    cout<<"Kasir Perusahaan Boneka\n"<<endl;
    cout<<"Msukkan Jumlah Pembelian Boneka\t: ";
    cin>>boneka;

    if (boneka < 1)
    {   
        cout<<"\nError\n";
    }
    else if (boneka <= 12)
    {   
        cout<<"\nHarga Perboneka Rp20.000\n";
        harga = 20000;
    }
    else if (boneka <= 24)
    {
        cout<<"\nHarga Perboneka Rp19.500\n";
        harga = 19500;
    }
    else if (boneka <= 50)
    {
        cout<<"\nHarga Perboneka Rp18.000\n";
        harga = 18000;
    }
    else
    {
        cout<<"\nHarga Perboneka Rp17.000\n";
        harga = 17000;
    }
    bayar = harga * boneka;
    cout<<"Total Bayar = Rp"<<bayar<<endl;

    return 0;
}