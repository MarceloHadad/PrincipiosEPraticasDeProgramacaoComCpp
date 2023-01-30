#include "std_lib_facilities.h"

void article();
void subject();
void verb();
void conjunction();
void sentence();

int main()
{
	cout << "Nothing to see here." << endl;

	return 0;
}

// Acrescente o artigo os na gramática do §6.4.1, de modo que possa descrever frases tais como "Os pássaros voam mas os peixes nadam".
void article()
{
	vector<string> articles{ "the" };
}

void subject()
{
	vector<string> subjects{ "birds", "fish", "C++" };
}

void verb()
{
	vector<string> verbs{ "predominates", "fly", "swim" };
}

void conjunction()
{
	vector<string> conjunctions{ "and", "or", "but" };
}

void sentence()
{
	//article() + subject() + verb();
	//sentence() + conjunction() + sentence();
}