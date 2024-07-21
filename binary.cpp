#include<iostream>
#include<string>
using namespace std;


class binary{
    string s;
    public:
        void read();
        void chk_bin();
        void onecomp();
        void display();

};

void binary :: read(){
    cout<<"Enter the binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Entered number is not binary.";
            exit(0);
        }
    }
    
}

void binary :: onecomp(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
            s.at(i)='1';
        else
            s.at(i) = '0';
    }
    
}

void binary :: display(){
    cout<<"\nDisplaying the binary number.......";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main(){
    binary b;
    b.read();
    b.display();
    b.chk_bin();
    b.onecomp();
    b.display();

    return 0;
}
