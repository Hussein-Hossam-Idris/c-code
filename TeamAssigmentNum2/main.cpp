#include <iostream>
#include <cmath>
#include<iomanip>
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Exponential calculator
// Last Modification Date: 3/3/2018
// Author1 and ID and Group: Farah Mohammed Osama, 20170351 , G13
// Author2 and ID and Group: Hussein Hossam Idris, 20170352 , G13
// Author3 and ID and Group: Omar Reda Tawfeek,    20170353 , G13
// Purpose:getting the Exponential of a number with out using the exp function
using namespace std;

int main()
{
    double num, sum,fact=1.0;
    cout<<"Please input a number : ";
    cin>>num;
    for(int i = 1;i<=100;i++){
        //cout<<setw(20)<<sum<<"\t";
        fact = fact*i;
        sum +=(pow(num,i)/fact);
        cout<<setw(20)<<1+sum<<"\t";
    }
    cout<<endl;
    cout<<"your Result : ";
    cout<<sum+1<<endl;
    cout<<"expected result : ";
    cout<<exp(num);




    return 0;
}
