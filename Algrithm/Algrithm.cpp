// Algrithm.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;
using std::vector;
using std::bitset;
//struct book
struct Book
{
	char title[100];
	char author[100];
	char subject[200];
	int book_id;
};
//print book information
void PrintBook(Book* book);
int main()
{
#pragma region struct
	Book book1;
	strcpy_s(book1.title, "Star");
	strcpy_s(book1.author, "Nobody");
	strcpy_s(book1.subject, "Country");
	book1.book_id = 2398;
	cout << "title: " << book1.title << endl;
	cout << "author: " << book1.author << endl;
	cout << "subject: " << book1.subject << endl;
	cout << "id: " << book1.book_id << endl;
	PrintBook(&book1);
#pragma endregion
#pragma region sort_Algrithm
	int data[] = {2,83,32,123,688,122.113,32,1233,1201};

#pragma endregion
	cerr << "xxx"<<endl;
	vector<int> v1(10);
	for (vector<int>::iterator vi = v1.begin(); vi != v1.end(); ++vi)
	{
		*vi = 0;
	}

	bitset<33> status(0);
	status[1] = 1;
	status.set(2);
	cout << status.any() << status.count() << status.size() << endl;
	cout << "status:" << status << endl;
	string str = "Hello";
	cout << str << endl;
	getchar();
    return 0;
}
void PrintBook(Book* book)
{
	cout << "title: " << book->title << endl;
	cout << "author: " << book->author << endl;
	cout << "subject: " << book->subject << endl;
	cout << "id: " << book->book_id << endl;
}
