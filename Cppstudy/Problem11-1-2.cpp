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
		cout << "제목: " << title << endl;
		cout << "ISBM: " << isbn << endl;
		cout << "가격: " << price << endl;
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
		cout << "인증키: " << DRMkey << endl;
	}
	~EBook()
	{
		delete[]DRMkey;
	}
};

int main(void)
{
	EBook ebook1("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	EBook ebook2 = ebook1; // 복사 생성자의 호출
	ebook2.ShowEBookInfo();
	cout << endl;
	EBook ebook3("dumy", "dumy", 0, "dumy");
	ebook3 = ebook2; // 대입 연산자의 호출 (대입연산자 호출은 만들어진 객체에 대입, 복사 생성자는 새로운 객체 선언시 바로 뒤에 붙으면 복사 생성자 호출)
	ebook3.ShowEBookInfo();
	return 0;
}