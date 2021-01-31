#include <iostream>

using namespace std;

int main()
{
    cout<< "WELCOME TO RATTY SUPERMARKET"<<endl;

    cout<< "" <<endl;
    string name;
    int id,quantity,product;
    int printer= 100;
    int phone =90;
    int table = 80;
    float total,VAT,amount;
    char items= 'A'; 'a'; 'B'; 'b'; 'C'; 'c';

    cout<< "Enter name of customer"<<endl;
    getline(cin,name);
    cout << "Enter your Unique id"<<endl;
    cin>>id;
    cout<< "items sold are"<<endl;
    cout<< "A. Printer ="<< printer<<endl;
    cout<< "B. Phone ="<< phone<<endl;
    cout<< "C. Table ="<< table<<endl;
    cout<< "Enter the letter of the product you want to buy"<<endl;
    cin>> items;
    cout << "Enter the quantity of product you want to buy"<<endl;
    cin>> quantity;

    if (items == 'A'|| items== 'a') {

        VAT=0.12*(printer*quantity);
        cout<< "VAT amount = "<<VAT<<endl;
        total=(printer*quantity+VAT);
        cout<< "You have to pay " << total<<endl;

    }

    else if (items == 'B'|| items== 'b'){

         VAT=0.12*(phone*quantity);
        cout<< "VAT amount = "<<VAT<<endl;
        total=(phone*quantity+VAT);
        cout<< "You have to pay " << total<<endl;

    }


         else{  VAT=0.12*(table*quantity);
        cout<<"VAT amount = $"<<VAT<<endl;
        total=(table*quantity+VAT);
        cout<<"You are to pay an amount of $"<<total<<endl;
    }



    cout<<"Please enter the amount you have: "<<endl;
    cin>>amount;

    int gain,loss;
    if(amount>total){
        gain=amount-total;
        cout<<"You have a balance of $"<<gain<<endl;
    }
    else{
        loss=total-amount;
        cout<<"Your money is insufficient to buy this item. You need $"<<loss<<" in addition to purchase this item"<<endl;
    }


        cout<< "Welcome to Ratty Supermarket"<<endl;
        cout<< ""<<endl;
        cout<< "Name of customer:"<<name<<endl;
        cout<< "Unique ID:"<<id<<endl;

         if (items=='a' || items=='A'){
        cout<<"Item bought: Printer"<<endl;
    }
    else if (items=='b' || items=='B'){
        cout<<"Item bought: Phone"<<endl;
    }
    else{
        cout<<"Item bought: Table"<<endl;
    }
    cout<<"Items in quantity: "<<quantity<<endl;

    cout<<""<<endl;
    cout<<"VAT amount: "<<VAT<<endl;
    if (items=='a' || items=='A'){
        cout<<"Total cost:  "<<(printer*quantity)<<endl;
    }
    else if (items=='b' || items=='B'){
        cout<<"Total cost:  "<<(phone*quantity)<<endl;
    }
    else {
        cout<<"Total cost:  "<<(table*quantity)<<endl;
    }

    if (amount>total){
        cout<<"Total amount paid:  "<<total<<endl;
        cout<<"Balance:  "<<gain<<endl;
    }
    else{
        cout<<"Total amount paid:  "<<total<<endl;
        cout<<"Owing:  "<<loss<<endl;
    }
    cout<<"Amount deposited:  "<<amount<<endl<<endl;
    cout<<"Thank you for transacting with us"<<endl;



    return 0;
}
