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
	box.insertEmail(email("Kent Ekerot", "2020-02-10", "Bråk på krogen eller?"));
	box.insertEmail(email("Kent Ekerot", "2020-02-10", "Bråk på krogen"));
	/*box.insertEmail(email("Erik Almqvist", "2010-06-10", "Järnrör"));
	box.insertEmail(email("Christian Westling", "2010-06-09", "Bra kväll"));
	box.insertEmail(email("Anders Borg", "2017-07-28", "Drog jag fram kuken igår..?"));
	box.insertEmail(email("Hackerman", "2018-09-28", "Bool.. kommer det från det engelska ordet buoollshit?"));*/

	box.sortDate();

	show(box);

	return 0;
}