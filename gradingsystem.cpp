#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if((marks>90)&&(marks<100)){
        cout<<"A grade";
    }
    else if((marks>80)&&(marks<89)){
        cout<<"B grade";
    }
    else if((marks>70)&&(marks<79)){
        cout<<"C grade";
    }
    else if((marks>60)&&(marks<69)){
        cout<<"D grade";
    }
    else {cout<<"Fail";
    }
}
