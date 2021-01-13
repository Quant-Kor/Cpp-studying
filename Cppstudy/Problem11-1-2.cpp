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
	Book(const char* atitle, const char* aisbn, int aprice) : price(aprice)
	{
		title = new char[strlen(atitle) + 1];
		isbn = new char[strlen(aisbn) + 1];
		strcpy(title, atitle);
		strcpy(isbn, aisbn);
	}
	Book(const Book& ref) : price(ref.price)
	{
		title = new char[strlen(ref.title) + 1];
		isbn = new char[strlen(ref.isbn) + 1];
		strcpy(title, ref.title);
		strcpy(isbn, ref.isbn);
	}
	Book& operator=(const Book& ref)
	{
		delete[] title;
		delete[] isbn;

		title = new char[strlen(ref.title) + 1];
		isbn = new char[strlen(ref.isbn) + 1];
		strcpy(title, ref.title);
		strcpy(isbn, ref.isbn);
		price = ref.price;
		return *this;
	}
	void ShowBookInfo()
	{
		cout << "����: " << title << endl;
		cout << "ISBM: " << isbn << endl;
		cout << "����: " << price << endl;
	}
	~Book()
	{
		delete[]title;
		delete[]isbn;
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
	EBook(const EBook& ref) : Book(ref)
	{
		DRMkey = new char[strlen(ref.DRMkey) + 1];
		strcpy(DRMkey, ref.DRMkey);
	}
	EBook operator=(const EBook& ref)
	{
		Book::operator=(ref);
		delete[] DRMkey;
		DRMkey = new char[strlen(ref.DRMkey) + 1];
		strcpy(DRMkey, ref.DRMkey);
		return *this;
	}
	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "����Ű: " << DRMkey << endl;
	}
	~EBook()
	{
		delete[]DRMkey;
	}
};

int main(void)
{
	EBook ebook1("���� C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	EBook ebook2 = ebook1; // ���� �������� ȣ��
	ebook2.ShowEBookInfo();
	cout << endl;
	EBook ebook3("dumy", "dumy", 0, "dumy");
	ebook3 = ebook2; // ���� �������� ȣ�� (���Կ����� ȣ���� ������� ��ü�� ����, ���� �����ڴ� ���ο� ��ü ����� �ٷ� �ڿ� ������ ���� ������ ȣ��)
	ebook3.ShowEBookInfo();
	return 0;
}