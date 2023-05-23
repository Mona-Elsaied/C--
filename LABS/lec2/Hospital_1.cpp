#include <iostream>
#include <string>


using namespace std;

struct patient
{
    long long ID;
    string Name ;
    int age ;
    char blood[5];
    char gender ;
    patient * Next;
}

class linkedlist 
{
    patient *head,*last;
    public:
    linkedlist()
    {
        head =NULL;
        last =NULL;
    }

    patient input ();
    void insert_atEnd();
    void insert_inNeed();
    void Get_PatientOut();
    void List_of_patients();
    int search(int);
    char departmentName[50];

};

int linkedlist :: search(int item)
{
    if (head == NULL )
    return false ;
    else 
    {
        int flag =0;
        patient*p=new patient();
        p=head;
        while (p->Next != NULL  && p-> ID != item)
        {
            p=p->Next;
        }
    }
}