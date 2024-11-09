#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int id ;
    float gpa;

public:
    Student(string Name,int ID,float GPA) : name(Name),id(ID),gpa(GPA) {}

    bool operator<(const Student & other) const
    {
        return id < other.id;
    }

    bool operator==(const int& otherID) const {
        return id == otherID;
    }

    friend ostream& operator<<(ostream& os, const Student& s) {
        os << "Name: " << s.name << ", ID: " << s.id << ", GPA: " << s.gpa;
        return os;
    }
};

template <class T>
        class StudentNode{
        public:
    T info;
    StudentNode*next;
            StudentNode(T in, StudentNode* n = nullptr) : info(in),next(n) {}
        };

class StudentList{

    StudentNode<Student>* head;
    int count;
public:
    StudentList() : head(nullptr),count(0){}
    ~StudentList() {
        StudentNode<Student>* cur =head;   // cur == currnt
        while (cur != nullptr){
            StudentNode<Student>* temp = cur;
            cur = cur->next;
            delete temp;
        }
    }
    void addInsortedorder(const Student&student){
StudentNode<Student>* newStudent = new StudentNode<Student>(student);
if(head == nullptr || student <head->info){
    newStudent->next = head;
    head = newStudent;
}
else{
    StudentNode<Student>* cur = head;
    while(cur->next != nullptr && cur->next->info <student){
        cur = cur->next;
    }
    newStudent->next = cur->next;
    cur->next = newStudent;
}
count++;
    }
    void deleteByID(int ID){
        if(head == nullptr) return;
        if(head->info == ID){
            StudentNode<Student>* temp = head;
            head = head->next;
            delete temp;
            count--;
            return;
        }

        StudentNode<Student>* cur = head;
        while (cur->next != nullptr && !(cur->next->info == ID)){
            cur = cur->next;
        }

        if(cur->next != nullptr){
            StudentNode<Student>* temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
            count--;
        }
    }

    void display() const{
        StudentNode<Student>* p = head;
        cout<<"Student List:\n";
        while ( p != nullptr){
            cout<< p->info<<endl;
            p = p->next;
        }
    }


    bool search(int ID)const{
        StudentNode<Student>* cur = head;
        while( cur != nullptr){
            if(cur->info == ID){
                cout << "Studen Found: "<< cur->info<<endl;
                return true;
            }
            cur = cur->next;
        }
        cout << "Student With ID: "<<ID<<"Not Found.\n";
        return false;
    }

   int Size()const{
     return count;
    }
};

class Node {
public:
    char data;
    Node* next;
    Node* prev;

    Node(char val):data(val),next(nullptr),prev(nullptr){}
};

class DoublyLinkedList {

    Node *head;
    Node *tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void initialize(const string &str) {
        for (char ch: str) { append(ch); }
    }

    void append(char ch) {
        Node *newNode = new Node(ch);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    string toString() const {
        string result;
        Node *current = head;
        while (current) {
            result += current->data;
            current = current->next;
        }
        return result;
    }

    void insert(int pos, char ch) {
        Node *newNode = new Node(ch);
        if (pos == 0) {
            newNode->next = head;
            if (head) head->prev = newNode;
            head = newNode;
            if (!tail) tail = head;
            return;
        }
        Node *current = head;
        for (int i = 0; i < pos - 1 && current; ++i) {
            current = current->next;
        }
        if (!current) return;
        newNode->next = current->next;
        if (current->next) current->next->prev = newNode;
        current->next = newNode;
        newNode->prev = current;
        if (!newNode->next) tail = newNode;
    }

    void deleteAt(int pos) {
        if (!head) return;
        Node *current = head;
        if (pos == 0) {
            head = head->next;
            if (head) head->prev = nullptr;
            delete current;
            return;
        }
        for (int i = 0; i < pos && current; ++i) {
            current = current->next;
        }
        if (!current) {
            return;
        }
        if (current->prev) {
            current->prev->next = current->next;
        }
        if (current->next) {
            current->next->prev = current->prev;
        }
        if (current == tail) {
            tail = current->prev;
        }
        delete current;

    }

    void concat(const DoublyLinkedList &other) {
        Node *othercurrent = other.head;
        while (othercurrent) {
            append(othercurrent->data);
            othercurrent = othercurrent->next;
        }
    }

    string Substring(int start, int length) {
        string result;
        Node *current = head;
        for (int i = 0; i < start; i++) {
            current = current->next;
        }
        for (int i = 0; i < length && current; i++) {
            result += current->data;
            current = current->next;
        }
        return result;
    }

    int search(const string &substr) {
        Node *current = head;
        int index = 0;
        while (current) {
            Node *start = current;
            bool found = true;
            for (char ch: substr) {
                if (!start || start->data != ch) {
                    found = false;
                    break;
                }
                start = start->next;
            }
            if (found) return index;
            current = current->next;
            ++index;
        }
        return -1;
    }

    void replace(const string &target, const string &replacment) {
        int pos = search(target);
        while (pos != -1) {
            for (int i = 0; i < target.size(); i++) {
                deleteAt(pos);
            }
            for (int i = 0; i < replacment.size(); i++) {
                insert(pos + i, replacment[i]);
            }
            pos = search(target);
        }
    }

    void reverse() {
        Node *current = head;
        Node *temp = nullptr;
        while (current) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        if (temp) head = temp->prev;
    }
};

void sideMain();

int main(){

    sideMain();
}


void sideMain(){

    cout<< "Enter number :\nSorted linked list 1\nString Manipulation using Doubly Linked List 2\n";

    int num ;
    cin >> num;
    switch (num) {

        case 1: {
            StudentList list;
            int choice;

            do {
                cout << "\nChoose an operation:\n";
                cout << "1. Insert Student\n";
                cout << "2. Delete Student\n";
                cout << "3. Display All Students\n";
                cout << "4. Search for a Student\n";
                cout << "5. Display Size of List\n";
                cout << "0. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                if (choice == 1) {
                    string name;
                    int id;
                    float gpa;
                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter ID: ";
                    cin >> id;
                    cout << "Enter GPA: ";
                    cin >> gpa;
                    Student s(name, id, gpa);
                    list.addInsortedorder(s);
                } else if (choice == 2) {
                    int id;
                    cout << "Enter ID of student to delete: ";
                    cin >> id;
                    list.deleteByID(id);
                } else if (choice == 3) {
                    list.display();
                } else if (choice == 4) {
                    int id;
                    cout << "Enter ID of student to search: ";
                    cin >> id;
                    list.search(id);
                } else if (choice == 5) {
                    cout << "Current number of students: " << list.Size() << endl;
                } else if (choice == 0) {
                    cout << "Exiting...\n";
                } else {
                    cout << "Invalid choice. Please try again.\n";
                }

            } while (choice != 0);
            break;

        }

        case 2: {
            DoublyLinkedList list1, list2;
            string str1, str2;
            cout << "Enter String to Add To List 1: ";
            cin >> str1;
            list1.initialize(str1);
            cout << "Enter String to Add To List 2: ";
            cin>> str2;
            list2.initialize(str2);


            list1.concat(list2);
            cout << "Concatenated Lists: " << list1.toString() << endl;

            int pos;
            cout << "Choose a character by index to remove: ";
            cin >> pos;
            list1.deleteAt(pos);
            cout << "List after removal: " << list1.toString() << endl;

            int start, len;
            cout << "Enter index and length to get substring: ";
            cin >> start >> len;
            cout << "Substring: " << list1.Substring(start, len) << endl;

            cin.ignore();
            string searchStr;
            cout << "Search for a string in the list: ";
            getline(cin, searchStr);
            int foundPos = list1.search(searchStr);
            if (foundPos != -1) {
                cout << "Found at index " << foundPos << endl;
            } else {
                cout << "Not found" << endl;
            }

            string target, replacement;
            cout << "Enter 2 substrings to replace one with another: ";
            cin >> target ;
            cout<< "Enter sec string word" ; cin>> replacement;
            list1.replace(target, replacement);
            cout << "List after replacement: " << list1.toString() << endl;

            list1.reverse();
            cout << "Reversed List: " << list1.toString() << endl;
        }

    }

}


