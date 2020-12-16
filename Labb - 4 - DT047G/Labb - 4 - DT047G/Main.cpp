#include "MailBox.h"
#include "Email.h"

void show(const Mailbox &b)
{
	auto vec = b.getMail();
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << ' ' << '\n';

}

int main()
{
	setlocale(LC_ALL, "");
	Mailbox box;

	box.insertEmail(email("Anders", "2002-02-28", "lab 4"));
	box.insertEmail(email("Anders", "2002-02-28", "lab 2"));
	box.insertEmail(email("Pelle", "2010-02-28", "lab 16"));
	box.insertEmail(email("Anders", "2002-02-28", "lab 3"));
	box.insertEmail(email("Anders", "2002-02-28", "lab 1"));
	
	box.sortWho();

	show(box);

	return 0;
}