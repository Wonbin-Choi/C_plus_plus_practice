#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id, price;
    string text;
    string name;
public:
    static int num;
    virtual void ask() {
        id = num;
        cout << "product text>>";
        cin.ignore(); 
        getline(cin, text); 
        cout << "producer>>";
        getline(cin, name);
        cout << "product price>>";
        cin >> price;
    }
    int getId() { return id; }
    int getPrice() { return price; }
    string getText() { return text; }
    string getName() { return name; }
    virtual void show() = 0;
};

class Book : public Product {
private:
    string bookTitle, ISBN, author;
public:
    void askBook() {
        ask();
        cout << "book title>>";
        cin.ignore();
        getline(cin, bookTitle);
        cout << "author>>";
        getline(cin, author);
        cout << "ISBN>>";
        getline(cin, ISBN);
    }
    string getBookTitle() { return bookTitle; }
    string getAuthor() { return author; }
    string getISBN() { return ISBN; }
    void show() {
        cout << "--id : " << getId() << endl;
        cout << "text : " << getText() << endl;
        cout << "name : " << getName() << endl;
        cout << "price : " << getPrice() << endl;
        cout << "book title : " << getBookTitle() << endl;
        cout << "author : " << getAuthor() << endl;
        cout << "ISBN : " << getISBN() << endl;
    }
};

class CompactDisk : public Product {
private:
    string albumTitle, singer;
public:
    void askAlbum() {
        ask();
        cout << "album title>>";
        cin.ignore();
        getline(cin, albumTitle);
        cout << "singer>>";
        getline(cin, singer);
    }
    string getAlbumTitle() { return albumTitle; }
    string getSinger() { return singer; }
    void show() {
        cout << "--id : " << getId() << endl;
        cout << "text : " << getText() << endl;
        cout << "name : " << getName() << endl;
        cout << "price : " << getPrice() << endl;
        cout << "album title : " << getAlbumTitle() << endl;
        cout << "singer : " << getSinger() << endl;
    }
};

class ConversationBook : public Book {
private:
    string lang;
public:
    void askCBook() {
        askBook();
        cout << "language>>";
        getline(cin, lang);
    }
    string getLang() { return lang; }
    void show() {
        cout << "--id : " << getId() << endl;
        cout << "text : " << getText() << endl;
        cout << "name : " << getName() << endl;
        cout << "price : " << getPrice() << endl;
        cout << "book title : " << getBookTitle() << endl;
        cout << "author : " << getAuthor() << endl;
        cout << "ISBN : " << getISBN() << endl;
        cout << "language : " << getLang() << endl;
    }
};

int Product::num = 0;

int main() {
    int choice;
    Product* p[100]; 

    cout << "**********************\n";
    while (Product::num < 100) {
        cout << "add product(1), show(2), quit(3) ? ";
        cin >> choice;
        if (choice == 1) {
            cout << "add book(1), CompactDisc(2), ConversationBook(3) ? ";
            cin >> choice;
            switch (choice) {
            case 1: {
                Book* b = new Book;
                b->askBook();
                p[Product::num] = b;
                Product::num++;
                break;
            }
            case 2: {
                CompactDisk* cd = new CompactDisk;
                cd->askAlbum();
                p[Product::num] = cd;
                Product::num++;
                break;
            }
            case 3: {
                ConversationBook* cb = new ConversationBook;
                cb->askCBook();
                p[Product::num] = cb;
                Product::num++;
                break;
            }
            default:
                cout << "wrong number. try again.\n";
                break;
            }
        }
        else if (choice == 2) {
            for (int i = 0; i < Product::num; i++) {
                p[i]->show();
            }
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "wrong number. try again.\n";
        }
    }

    for (int i = 0; i < Product::num; i++) {
        delete p[i];
    }

    return 0;
}
