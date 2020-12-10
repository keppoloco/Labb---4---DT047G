#include "MailBox.h"
#include "Email.h"

/*void show(std::vector<Mailbox>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << '\n';
	}
}
*/
int main()
{
	Mailbox box;
	box.insertEmail(email("Kent Ekerot", "2020-02-10", "Bråk på krogen"));
	box.insertEmail(email("Erik Almqvist", "2010-06-10", "Järnrör"));
	box.insertEmail(email("Christian Westling", "2010-06-11", "Bra kväll"));
	box.insertEmail(email("Anders Borg", "2017-07-28", "Drog jag fram kuken igår..?"));

	return 0;
}