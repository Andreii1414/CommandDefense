#include "MyLibrary.h"
#include <cstdio>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>
#include <stdarg.h>

void MyLibrary::print_books()
{
    output_stream << "Found " << books_number << " books" << endl;
    for (int i = 0; i < books_number; i++)
        output_stream << "Book: " << i << " " << books[i] << endl;
}

MyLibrary::~MyLibrary()
{
    delete[] books;
}

void MyLibrary::update_books_id_by_index(int book_index, int book_id)
{
    if (book_index < books_number)
        this->books[book_index] = book_id;
}
MyLibrary::MyLibrary(ostream& output_stream) :output_stream(output_stream)
{
    books_number = -1;
    books = nullptr;
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int* books):output_stream(output_stream)
{
    this->books_number = books_number;
    this->books = new int[books_number];
    for (int i = 0; i < books_number; i++)
        this->books[i] = books[i];
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int min, int max) :output_stream(output_stream)
{
    this->books_number = books_number;
    books = new int[books_number];
    srand(time(NULL));
    for (int i = 0; i < books_number; i++)
        books[i] = rand() % max + 1;
}


MyLibrary::MyLibrary(ostream& output_stream, int books_count, ...) :output_stream(output_stream)
{
    this->books_number = books_count;
    va_list list;
    books = new int[books_count];
    va_start(list, books_count);
    for (int i = 0; i < books_count; i++)
    {
        books[i] = va_arg(list, int);
    }
    va_end(list);
}

int MyLibrary::get_books_count() const
{
    return this->books_number;
}
int MyLibrary::get_book_index_by_id(int id) const
{
    if(id < books_number)
        return books[id];
    return -1;
}