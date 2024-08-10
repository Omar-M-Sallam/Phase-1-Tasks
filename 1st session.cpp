#include <bits/stdc++.h>
using namespace std;

int main(){
     int num1, num2;
     char operation;
     cout << "enter an op: ";
     cin >> num1 >> operation >> num2;
    switch (operation)
    {
    case '+' :
       cout << num1 + num2 <<endl;
       break;
    case '-' :
       cout << num1 - num2 <<endl;
       break;
    case '*' :
       cout << num1 * num2 <<endl;
       break;
    case '/' :{
        if (num2 == 0){
            cout << "error";
        }
        else{
            cout<< ( float) num1 / num2;
        }
        
    }
       break;
    default:
       cout << "invalid op"<<endl;
       break;
    }
}