#pragma once
// Books object
class Book
{
    public:
    string title, isbn, author, publisher,
    dateAdded, quantity, wholeSale, retailSale;
    
    void setTitle(string);
    void setISBN(string);
    void setAuthor(string);
    void setPublisher(string);
    void setDateAdded(string);
    void setQuantity(string);
    void setWholeSale(string);
    void setRetailSale(string);
    
    string getTitle();
    string getISBN();
    string getAuthor();
    string getPublisher();
    string getDateAdded();
    string getQuantity();
    string getWholeSale();
    string getRetailSale();
}
