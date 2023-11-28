//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"

using namespace std;


int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    string bookName;

    while(cin >> command){
        if(command == "add"){
            cin >> bookName;
            if(library.addBook(bookName)){
                cout << "Book added" << endl;
            }else{
                cout << "Book already exists or the library is full" << endl;
            }
        }else if(command == "remove"){
            cin >> bookName;
            if(library.removeBook(bookName)){
                cout << "Book removed" << endl;
            }else{
                cout << "Book does not exist" << endl;
            }
        }else if(command == "print"){
            library.print();
        }else{
            cout << "Invalid command" << endl;
        }
    }

    return 0;
}

