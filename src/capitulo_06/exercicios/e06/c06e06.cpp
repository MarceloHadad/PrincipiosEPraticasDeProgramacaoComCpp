#include "std_lib_facilities.h"

class String_stream
{
public:
	String_stream();
	string get();
	void putback(string str);
private:
	bool full;
	string buffer;
};

String_stream::String_stream()
	:full(false), buffer("")
{
}

String_stream ss;

void String_stream::putback(string str)
{
	if (full) error("putback() into a full buffer");
	buffer = str;
	full = true;
}

string String_stream::get()
{
	if (full)
	{
		full = false;
		return buffer;
	}

	// Dica: não se incomode com tokens; apenas leia para um string usando >>.
	string str;
	cin >> str;

	return str;
}

// Escreva um programa que verifique se uma frase está correta de acordo com a gramática no §6.4.1.
bool article();
bool subject();
bool verb();
bool conjunction();
bool sentence();
void isAPeriod(string);

int main()
try
{
	bool result = false;

	while (cin)
	{
		vector<string> results{ "Not O.K.", "O.K." };
		string str = ss.get();

		if (str == "x") break;
		if (str == ".")
			// Suponha que cada frase é terminada por ponto (.) cercado de espaço em branco.
			// Por exemplo, pássaros voam mas os peixes nadam . é uma frase , mas pássaros voam mas os peixes nadam. (sem espaço antes do ponto) não são.
			// Para cada frase fornecida, o programa deve responder simplesmente "O.K" ou "NÃO O.K".
			cout << "=" << results[result] << '\n';
		else
			ss.putback(str);
		result = sentence();
	}
	keep_window_open();
}
catch (exception& e)
{
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...)
{
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}

bool article()
{
	vector<string> articles{ "the" };
	string str = ss.get();
	isAPeriod(str);

	auto pos = find(articles.begin(), articles.end(), str);

	if (pos < articles.end()) return true;

	return false;
}

bool subject()
{
	vector<string> subjects{ "birds", "fish", "C++" };
	string str = ss.get();
	isAPeriod(str);

	auto pos = find(subjects.begin(), subjects.end(), str);

	if (pos < subjects.end()) return true;

	return false;
}

bool verb()
{
	vector<string> verbs{ "predominates", "fly", "swim" };
	string str = ss.get();
	isAPeriod(str);

	auto pos = find(verbs.begin(), verbs.end(), str);

	if (pos < verbs.end()) return true;

	return false;
}

bool conjunction()
{
	vector<string> conjunctions{ "and", "or", "but" };
	string str = ss.get();
	isAPeriod(str);

	auto pos = find(conjunctions.begin(), conjunctions.end(), str);

	if (pos < conjunctions.end()) return true;

	return false;
}

bool sentence()
{
	bool result = article() && subject() && verb();

	if (result)
	{
		string str = ss.get();

		if (str == "." || str == "x")
		{
			isAPeriod(str);
			return result;
		}

		ss.putback(str);

		if (::conjunction()) return sentence();

		return false;
	}

	return result;
}

void isAPeriod(string str)
{
	if (str == "." || str == "x")
	{
		ss.putback(str);
	}
}