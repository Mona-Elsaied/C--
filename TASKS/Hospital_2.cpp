#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;


class patient{

    char name[50];
    char age[2];
    char gender[3];
    char disease[100];
    char phone[15];
    char address[100];

    public:
        

        void getdata(){
            cout<<"\n\nEnter patient details:\n";
            cout<<"Name: "; 
            cin>>name;
            cout<<"Age: "; 
            cin>>age;
            cout<<"Gender (M/F): "; 
            cin>>gender;
            cout<<"Disease: "; 
            cin>>disease;
            cout<<"Phone number: "; 
            cin>>phone;
            cout<<"Address: "; 
            cin>>address;
        }
        void showdata(){
            cout<<"\n"<<name<< endl;
            cout<<"\n"<<age<< endl;
            cout<<"\n"<<gender<< endl;
            cout<<"\n"<<disease<< endl;
            cout<<"\n"<<phone<< endl;
            cout<<"\n"<<address<< endl;
        }
        char* getname(){
            return name;
        }
};

void add_patient();
void view_patient();
void search_patient();
void delete_patient();

int main(){
    int choice;
    while (1){
        system("cls");
        cout<<"\n\tHospital Management System" <<endl;
        cout<<"1. Add Patient"<<endl;
        cout<<"2. View Patient"<<endl;
        cout<<"3. Search Patient"<<endl;
        cout<<"4. Delete Patient"<<endl;
        cout<<"\5. Exit"<<endl;
        cout<<"PLZ Enter your choice (1-5): "<<endl;
        cin>>choice;
        switch(choice){
            case 1: add_patient(); break;
            case 2: view_patient(); break;
            case 3: search_patient(); break;
            case 4: delete_patient(); break;
            case 5: exit(0);
            default: cout<<" ";
        }
    }
}


// function implementation 

// to add patient 
void add_patient(){
    patient p;
   ofstream fout("patient.dat", ios::binary | ios::app);
    p.getdata();
     fout.write((char*)&p, sizeof(p));
    fout.close();
    cout<<"\n\nPatient record has been created!";
    getch();
}


// to view data
void view_patient(){
   patient p;
    ifstream fin("patient.dat", ios::binary);
    if(!fin){
        cout<<"\n\nFile not found!";
        getch();
        return;
    }
    cout<<"\n\n"<<setw(20)<<"Name"<<setw(10)<<"Age"<<setw(5)<<"Sex"
        <<setw(20)<<"Disease"<<setw(15)<<"Phone"<<setw(20)<<"Address";
    while(fin.read((char*)&p, sizeof(p))){
        p.showdata();
    }
    fin.close();
    getch();
}

// to search in the data
void search_patient(){
    patient p;
    char name[50];
    ifstream fin("patient.dat", ios::binary);
    if(!fin){
        cout<<"\n\nFile not found!";
        getch();
        return;
    }
    cout<<"\n\nEnter patient name to search: ";
    cin>>name;
    int flag = 0;
    while (fin.read((char*)&p, sizeof(p))){
        if(strcmp(p.getname(), name) == 0){
            p.showdata();
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"\n\nPatient not found!";
    }
    fin.close();
    getch();
}

// to delete patient 
void delete_patient(){
    patient p;
    char name[50];
    ifstream fin("patient.dat", ios::binary);
    if(!fin){
        cout<<"\n\nFile not found!";
        getch();
        return;
    }
    ofstream fout("temp.dat", ios::binary);
    cout<<"\n\nEnter patient name to delete: ";
    cin>>name;
    int flag = 0;
    while (fin.read((char*)&p, sizeof(p))){
        if(strcmp(p.getname(), name) != 0){
            fout.write((char*)&p, sizeof(p));
        }
        else{
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"\n\nPatient not found!";
    }
    else{
        cout<<"\n\nPatient record has been deleted!";
    }
    fin.close();
    fout.close();
    remove("patient.dat");
    rename("temp.dat", "patient.dat");
    getch();
}