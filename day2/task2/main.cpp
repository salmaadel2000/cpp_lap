#include <iostream>
#include <string.h>
using namespace std;
class emp {
private:
    int id;
    int age;
    char name[10];
    public:

        void setId(int _id){
            if( _id >= 1)
                id =_id ;
            else
                cout<<"not valid" ;

        }

        int getId(){
            return id ;
        }

        void setage(int _age){
            if(_age<20&&_age>60){
                cout<<"not valid";
            }
            else{
                age=_age;
            }
        }
        int getage(){
            return age;
        }
        void setname(char * _name){
            if(strlen(_name)>1){
                strcpy(name,_name);
            }
            else{
                cout <<" not valid ";
            }
        }
        char* getname(){
            return name;
        }
        void print(){
            cout <<" name :"<< name <<" age :" <<age <<" id :" << id;

                    }
        emp(){
          cout << "hiiiiii"<<endl;
        }
        emp(int _id, int _age){

            id=_id;
            age=_age;
            cout << "hiiiiii2"<<endl;
        }
         emp(int _id ){

            id=_id;
            cout << "hiiiiii2"<<endl;
        }

};
int main()
{
    emp e1;
    emp e2(10,20);
    emp e3(1);
    e1.setId(10);
    cout<<"id = "<< e1.getId() <<endl ;
    e1.setage(30);
    cout<<"age = "<< e1.getage() <<endl ;
     e1.setname("salma");
    cout<<"name = "<< e1.getname() <<endl ;
    e1.print();
    return 0;
}