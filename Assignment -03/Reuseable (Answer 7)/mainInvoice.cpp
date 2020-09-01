#include<iostream>
#include"invoice.h"
using namespace std;

int main()
{
    Invoice g1("X","Good for X part",3,100);
    Invoice g2("Y","Essential part",0,100);
    Invoice g3("Y","Important part",2,0);
    cout<<"Part Number => "<<g1.getPartNum()<<"\nPart Description => "<<g1.getPartDes()<<"\nQuantity => "<<g1.getquantity()<<"\nPrice => "<<g1.getprice()<<"\nInvoice amount => "<<g1.getinvoiceamount()<<"\n"<<endl;
    cout<<"Part Number => "<<g2.getPartNum()<<"\nPart Description => "<<g2.getPartDes()<<"\nQuantity => "<<g2.getquantity()<<"\nPrice => "<<g2.getprice()<<"\nInvoice amount => "<<g2.getinvoiceamount()<<"\n"<<endl;
    cout<<"Part Number => "<<g3.getPartNum()<<"\nPart Description => "<<g3.getPartDes()<<"\nQuantity => "<<g3.getquantity()<<"\nPrice => "<<g3.getprice()<<"\nInvoice amount => "<<g3.getinvoiceamount()<<"\n"<<endl;
return 0;
}
