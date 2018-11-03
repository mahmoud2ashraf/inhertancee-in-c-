#include <iostream>
#include <cstring>

using namespace std;
//base class to make a virtual function
class pet{

protected:
    string name;
    bool neuterSpayed;
    bool talks;

public:
    pet(){         //an empty constructor to set the protected variables
    neuterSpayed=0;
    talks=0;
    }
virtual void printdata(){};      //virtual function to print data

};
//class dog inhertiance from pet class
class dog : public pet{

public:
    dog(){};
    dog(string z,bool x,bool c){     //parametrize constructor to set data
    name=z;
    talks=x;
    neuterSpayed=c;
    }
void printdata(){                     //print function to print data
    cout<<"name is "<<name <<endl;
    if(talks){
            cout<<"the dog is talking"<<endl;}
            else{cout<<"dog is not talking"<<endl;
                }
   // else if{
     //       cout<<"dog can`t talk"<<endl;

    if(neuterSpayed){cout<<"it`s neuterspayed"<<endl<<endl<<endl;}
    else{cout<<"it`s not neuterspayed"<<endl<<endl<<endl;}
}


};
//class cat inhertiance from pet class
class cat : public pet{

public:
    cat(){};
    cat(string z,bool x,bool c){    //parametrize constructor to set data
    name=z;
    talks=x;
    neuterSpayed=c;
    }
void printdata(){       //print function to print data
    cout<<"name is "<<name <<endl;
    if(talks){
            cout<<"the cat is talking"<<endl;}
            else{cout<<"cat is not talking"<<endl;
                }
   // else if{
     //       cout<<"dog can`t talk"<<endl;

    if(neuterSpayed){cout<<"it`s neuterspayed"<<endl<<endl<<endl;}
    else{cout<<"it`s not neuterspayed"<<endl<<endl<<endl;}
}


};

//class bird inhertiance from pet class
class bird : public pet{

public:
    bird(){};
    bird(string z,bool x){            //parametrize constructor to set data
    name=z;
    talks=x;
    }
void printdata(){              //print function to print data
    cout<<"name is "<<name <<endl;
    if(talks){
            cout<<"the bird is talking"<<endl<<endl<<endl;}
            else{cout<<"bird is not talking"<<endl<<endl<<endl;}
}

};


int main()
{
/*pet *t;
dog d1("momo",true,false);
cat c1("soso",false,true);
bird b1("koko",true);
d1.printdata();
c1.printdata();
b1.printdata();*/

pet *mypets[3];             //object of type pet in shape of array
mypets[0]=new bird("koko",true);
mypets[1]=new cat("soso",false,true);
mypets[2]=new dog("lolo",true,false);
mypets[3]=new dog("Raki",false,true);
for(int i=0;i<4;i++){
    mypets[i]->printdata();
}

return 0;
}
