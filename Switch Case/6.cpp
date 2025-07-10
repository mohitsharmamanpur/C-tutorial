#include<iostream>
using namespace std;
int main()
{
    char ch = '1';
    int num = 1;
    cout<<endl; 

    Switch(ch)
    {
        case 1: cout<<"First"<<endl;
                cout<<"First again"<<endl;
                break;
        case '1': Switch(num)
        {
            case 1: cout<<"value of num is"<<num<<endl;
            break;

        }   
        break;
        default: cout<"it is default case"<<endl;     
    }
    cout<<endl;
}