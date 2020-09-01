#include<iostream>
#include<string>
using namespace std;

class Invoice
{
private:
    string partNum,partDes;
    int quantity,price;
    int invoiceamount,r;
public:
    
    Invoice(string partNum, string partDes,int quantity,int price);
    
    void setPartNum(string a);
    string getPartNum();

    void setPartDes(string b);
    string getPartDes();

    void setquantity(int c);
    int getquantity();
    
    void setprice(int d);
    int getprice();

    int getinvoiceamount();

};
