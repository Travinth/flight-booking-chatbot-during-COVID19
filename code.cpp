#include <iostream>
#include <string>

using namespace std;

int main() {
    bool fever;
    bool loss_of_taste;
    bool loss_of_smell;
    bool cough;
    bool tiredness;
    bool result;
    bool tickets, luggage;
    string name;
    float age;
    cout<<"enter your name";
    getline(cin,name);
    cout<<"\n welcome "<< name<<", welcome to corona checking centre,\n It is mandatory to get checked for covid-19 symptoms before you board the flight"<<endl;
    cout<<"Enter the following details with full honesty to generate your report"<<endl;
    cout<<"Instructions for users: enter 0 for no and 1 for yes "<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"\n 1. Have you been feeling feverish since past few days?";
    cin>>fever;
    cout<<"\n 2. Have you been feeling lost of taste for the past few days?";
    cin>>loss_of_taste;
    cout<<"\n 3. Have you been feeling loss of smell in the past few days?";
    cin>>loss_of_smell;
    cout<<"\n 4. are you having cough problems in the past few days?";
    cin>>cough;
    cout<<"\n 5. Have you been feeling tired in the past few days?";
    cin>>tiredness;
    result=(fever && (loss_of_taste || loss_of_smell) && cough && tiredness);
    cout<<"\n Corona positive (0:no/1:yes): "<<result<<"\n \n ";
    
    if (result==0){
       cout<<"\n Do you have valid tickets?";
       cin>>tickets;
       cout<<"\n Do you want your luggage checked in?";
       cin>>luggage;
       bool board=((luggage || (!result)) && tickets);
       if (board==0) 
       cout<<"\n Boarding process incomplete";
       if (board==1)
       cout<<"\n Boarding process completed succesfully, Have a safe trip, "<<name;
    }
    if (result==1){
        cout<<name<<", You seem to be Covid-19 positive based on your symptoms.\n we cannot board you on the flight, sorry for the inconvenience ";
    }
}
