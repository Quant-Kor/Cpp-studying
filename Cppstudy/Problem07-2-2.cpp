#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char *atitle, const char *aisbn, int aprice) : price(aprice)
	{
		title = new char[strlen(atitle) + 1];
		isbn = new char[strlen(aisbn) + 1];
		strcpy(title, atitle);
		strcpy(isbn, aisbn);
	}
	void ShowBookInfo()
	{
		cout << "제목: " << title << endl;
		cout << "ISBM: " << isbn << endl;
		cout << "가격: " << price << endl;
	}
	~Book()
	{
		delete []title;
		delete []isbn;
	}
};

class EBook : public Book
{
private:
	char* DRMkey;
public:
	EBook(const char* atitle, const char* aisbn, int aprice, const char* key) : Book(atitle, aisbn, aprice)
	{
		DRMkey = new char[strlen(key) + 1];
		strcpy(DRMkey, key);
	}
	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키: " << DRMkey << endl;
	}
	~EBook()
	{
		delete[]DRMkey;
	}
};

int main(void)
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;
}