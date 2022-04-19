#include<iostream>
using namespace std;
int main()
{   int num;
    cout<<"enter the money: ";
    cin>>num;
    cout<<"the amount of rupees and coins are:"<<endl;
    switch(num>=2000){
        case 1:
            cout<<"2000:"<<num/2000<<endl;
            num=num-2000*(num/2000);
            break;
                }
    switch(num>=500){
        case 1:
            cout<<"500 :"<<num/500<<endl;
            num=num-500*(num/500);
            break;
                }
    switch(num>=200){
        case 1:
            cout<<"200 :"<<num/200<<endl;
            num=num-200*(num/200);
            break;
                }
    switch(num>=100){
        case 1:
            cout<<"100 :"<<num/100<<endl;
            num=num-100*(num/100);
            break;
                }
    switch(num>=50){
        case 1:
            cout<<"50  :"<<num/50<<endl;
            num=num-50*(num/50);
            break;
                }
    switch(num>=20){
        case 1:
            cout<<"20  :"<<num/20<<endl;
            num=num-20*(num/20);
            break;
                }
    switch(num>=10){
        case 1:
            cout<<"10  :"<<num/10<<endl;
            num=num-10*(num/10);
            break;
                }
    switch(num>=5){
        case 1:
            cout<<"5   :"<<num/5<<endl;
            num=num-5*(num/5);
            break;
                }
    switch(num>=2){
        case 1:
            cout<<"2   :"<<num/2<<endl;
            num=num-2*(num/2);
            break;
                }
    switch(num>=1){
        case 1:
            cout<<"1   :"<<num/1<<endl;
            num=num-1*(num/1);
            break;
                }
    
    
    return 0;
}