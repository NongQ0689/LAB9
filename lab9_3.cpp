/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout<<"Enter your age: ";
    int age ; cin>>age;
    if (age<=20)
    {
        cout<<"Enter your height: ";
        int hight ; cin>>hight;
        if(hight<160) 
            cout<<"Your status = UNFRIEND";
        else if(hight<175) 
            cout<<"Your status = FRIEND";
        else
        {
            cout<<"Enter your property: ";
            int pro ; cin>>pro;
            if(pro>69000000)
                 cout<<"Your status = MARRIED";
            else cout<<"Your status = ONE-NIGHT-STAND";
        }
    }else if (age<30)
    {
        cout<<"Enter your property: ";
        int pro ; cin>>pro;
        if(pro>10000000)
             cout<<"Your status = BEST FRIEND";
        else cout<<"Your status = UNFRIEND";

    }else cout<<"Your status = UNFRIEND";

}