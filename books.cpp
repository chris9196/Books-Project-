#include "books.h"

class Book
{
    public:
    string title, isbn, author, publisher,
    dateAdded, quantity, wholeSale, retailSale;
    
    void setTitle(string a) {title = a;}
    void setISBN(string b) {isbn = b;}
    void setAuthor(string c) {author = c;}
    void setPublisher(string d) {publisher = d;}
    void setDateAdded(string e) {dateAdded = e;}
    void setQuantity(string f) {quantity = f;}
    void setWholeSale(string g) {wholeSale = g;}
    void setRetailSale(string h) {retailSale = h;}
    
    string getTitle() {return title;}
    string getISBN() {return isbn;}
    string getAuthor() {return author;}
    string getPublisher() {return publisher;}
    string getDateAdded() {return dateAdded;}
    string getQuantity() {return quantity;}
    string getWholeSale() {return wholeSale;}
    string getRetailSale() {return retailSale;}
}
