#include "MailBox.h"
#include "Email.h"

void show(const Mailbox &b)
{
	auto vec = b.getMail();
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i];

}

int main()
{
	setlocale(LC_ALL, "");
	Mailbox box;

	box.insertEmail(email("a", "2002-02-28", "a"));
	box.insertEmail(email("b", "2002-02-29", "b"));
	box.insertEmail(email("c", "2010-02-30", "c"));
	box.insertEmail(email("d", "2002-02-31", "d"));
	box.insertEmail(email("e", "2002-03-01", "e"));
	
	box.sortWho();

	show(box);

	return 0;
}