// Problem Statement: 
// You are tasked with implementing a simple system to manage the details of students and their grades. Each student has a name, a unique student ID, and a set of grades for different subjects. 
// Implement the following classes: 
// Student: 
// Properties: name (string), studentID (integer), grades (array of integers for different subjects). 
// Methods: 
// displayInfo(): Display the student's name, ID, and grades. 
// Declare the class GradeBook as a friend class to Student. 
// GradeBook: 
// Friend class to Student. 
// Properties: None. 
// Methods: 
// computeAverage(Student student): Takes a Student object as a parameter and computes the average grade for that student. 
// Your task is to implement the Student and GradeBook classes according to the specifications above. Ensure that the average grade computation is done inside the computeAverage method of the GradeBook class, which should be declared as a friend class to the Student class. 

#include <iostream>
using namespace std;
class Student{
    private:
    char name[100];
    int studentID;
    int grade[3];
    public: 
    Student(char* n,int sID,int g1,int g2,int g3){
        strcpy(name,n);
        studentID=sID;
        grade[0]=g1;
        grade[1]=g2;
        grade[2]=g3;
    }
    void displayInfo(){
        cout<<"Name "<<name<<endl;
        cout<<"Student ID "<<studentID<<endl;
        cout<<"Grades in 3 subjects: "<<endl;
        for(int i=0;i<3;i++){
            cout<<grade[i]<<endl;
        }
    }
    friend class GradeBook;

};
class GradeBook{
    public:
    static void computeAvg(Student student){
        double sum=0;
        for(int i=0;i<3;i++){
            sum+=student.grade[i];
        }
        double avg=sum/3;
        cout<<"Average grade : "<<avg<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Student student1("John",1001,85,90,75);
    student1.displayInfo();
    GradeBook g;
    g.computeAvg(student1);
    return 0;
}
