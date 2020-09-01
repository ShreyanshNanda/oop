#include<iostream>
#include"invoice.h"
#include<string>
using namespace std;

    Invoice::Invoice(string a,string b,int c,int d)
    {
    partNum=a;
    partDes=b;
    quantity=c;
    price=d;
    }

    void Invoice::setPartNum(string a){
    partNum=a;
    }
    string Invoice::getPartNum()
    {
    return partNum;
    }

    void Invoice::setPartDes(string b){
    partDes=b;
    }
    string Invoice::getPartDes()
    {
    return partDes;
    }

    void Invoice::setquantity(int c){
    quantity=c;
    }
    int Invoice::getquantity(){
    return quantity;
    }

    void Invoice::setprice(int d){
    price=d;
    }
    int Invoice::getprice(){
    return price;
    }



    int Invoice::getinvoiceamount()
    {
        if(quantity<0 || price<0)
        {
            r=0;
        }
        else
        {
            r=quantity*price;
        }
        return r;
    }
