#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string id;
    float averageGrade;

public:
    
    Student(string studentName, string studentId, float studentAverageGrade) {
        name = studentName;
        id = studentId;
        averageGrade = studentAverageGrade;
    }

    
    string getName() {
        return name;
    }

    void setName(string studentName) {
        name = studentName;
    }

    string getId() {
        return id;
    }

    void setId(string studentId) {
        id = studentId;
    }

    float getAverageGrade() {
        return averageGrade;
    }

    void setAverageGrade(float studentAverageGrade) {
        averageGrade = studentAverageGrade;
    }
};

int main() {
    
    Student student1("Ivanov", "123456", 4.5);

    
    cout << "Имя студента: " << student1.getName() << endl;
    cout << "Номер зачетной книжки: " << student1.getId() << endl;
    cout << "Средний балл: " << student1.getAverageGrade() << endl;

    
    student1.setAverageGrade(4.7);

    
    cout << "Обновленный средний балл: " << student1.getAverageGrade() << endl;

    return 0;
}
