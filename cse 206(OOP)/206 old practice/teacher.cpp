/*
teacher cls thakne shob teacher nam id dept thakbe
teacher cls er under e student cls thakbe
ekek teacher er under ekta grp thakbe
teacher er id dile unar under er manushjon ke list kore dekhaite hobe

*/

#include <iostream>
#include <cstring>

using namespace std;


class Teacher
{

    Student *students;
    string course_name;
    Teacher(){
        Student
    }
    ~Teacher(){
        delete [] students;
    }

};


class Student{
    char * name;
    int id;
public:
    Student(){}
    Student(const Student &ob){
        this->id = ob.id;
        this->name = new char[strlen(ob.name)];
        strcpy(this->name, ob.name);
    }
    Student(char  n[], int i){
        name = new char[strlen(n)];
        id = i;
        strcpy(name, n);
    }
    Student(int i){
        id = i;
        name = NULL;
    }
    ~Student(){
        delete [] name;
    }
    friend void display(Student ob);

} ;


void display(Student ob){
    if(ob.name != NULL)
        cout << ob.id << " " << ob.name << endl;
    else
        cout << ob.id << endl;
}

int main() {

    int n;
    cin >> n;
    char s[20];
    Student students[n];
    for(int i = 0; i < n; i++){
        cout << "Enter Name: ";
        cin >> s;
        cout << "Enter Roll: ";
        int id;
        cin >> id;
        if(s[0] == '-'){
            Student ob(id);
            students[i] = ob;
        }
        else {
            Student ob(s, id);
            students[i] = ob;
        }
        display(students[i]);
    }

}
