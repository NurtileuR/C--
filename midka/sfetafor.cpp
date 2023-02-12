#include <iostream>

using namespace std;

void print(string a,string b,string c){
    cout << a << "\n" << b << "\n" << c;
}
int main()
{
string a,b,c;
cin >> a >> b >> c;
if(a=="black"){
    if(b=="black"){
        if(c=="green"){
        print("black","black","GREEN");
            }   
        else if(c=="GREEN"){
            print("black","yellow","black");
        }
        else{
            cout <<"error";
            return 0;
        }
    }
        else if(b=="yellow"){
            if("black"){
                print("red","black","black");
            }
        else{
            cout << "error";
            return 0;
        }
        }
        else if(b=="YELLOW"){
            if(c=="black"){
                print("black","YELLOW","black");
            }
            else{
                cout <<"error";
            return 0;
            }
        }
        else{
                cout << "error";
            return 0;
            }
}
else if(a=="red"){
    if(b=="yellow"){
        if(c=="black"){
            print("black","black","green");
        }
        else{
            cout <<"error";
            return 0;
        }
    }
    else if(b=="black"){
        if(c=="black"){
            print("red","yellow","black");
        }
        else{
            cout <<"error";
            return 0;
        }
    }
    else{
            cout <<"error";
            return 0;
        }
}
    else{
            cout <<"error";
            return 0;
        }

}
