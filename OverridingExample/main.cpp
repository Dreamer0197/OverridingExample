//
//  main.cpp
//  OverridingExample
//
//  Created by Kaan Şengün on 5.11.2023.
//

#include <iostream>
using namespace std;

class Hayvan{
public:
    virtual string speak(){
        return "Hayvanlar";
    }
};
class Kedi:public Hayvan{
public:
    string speak(){
        return "Miyav";
    }
};
class Kopek:public Hayvan{
public:
    string speak(){
        return "Hav";
    }
};

int main(int argc, const char * argv[]) {

    Hayvan *Hayvan=new Kopek();
    //Hayvan *Hayvan=new Kedi();
    cout<<"Ne sesi geldi: "<<Hayvan->speak()<<endl;
    delete Hayvan;
    
    
    
    return 0;
}
