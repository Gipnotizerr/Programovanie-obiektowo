#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string name;
    string Author;
    int year;
public:
    Book() {
        name = "-";
        Author = "-";
        year = 0;

    }
    Book(string h, string m, int s) {
        name = h;
        Author = m;
        year = s;

    }
    string getName() {
        return name;
    }
    void setName(string qwe) {
        name = qwe;
    }
    string getAuthor() {
        return Author;
    }
    void setAuthor(string we) {
        Author = we;
    }
    int getYear() {
        return year;
    }
    void setYear(int e) {
        year = e;
    }
    void ShowBook(){ cout << "Name: " << getName() << endl << " Author : " << getAuthor() << endl << " Year : " << getYear() << endl; }
};
int main()
{
    Book V("Voina_i_Mir", "Tolstoy", 1840);
    V.ShowBook();
    return 0;
}

