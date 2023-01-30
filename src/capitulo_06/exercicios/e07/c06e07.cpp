#include "std_lib_facilities.h"

class Token
{
public:
	char kind;
	double value;
	Token(char ch)
		:kind(ch), value(0)
	{
	}
	Token(char ch, double val)
		:kind(ch), value(val)
	{
	}
};

class Token_stream
{
public:
	Token_stream();
	Token get();
	void putback(Token t);
private:
	bool full;
	Token buffer;
};

Token_stream::Token_stream()
	:full(false), buffer(0)
{
}

void Token_stream::putback(Token t)
{
	if (full) error("putback() into a full buffer");
	buffer = t;
	full = true;
}

Token Token_stream::get()
{
	if (full)
	{
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;

	switch (ch)
	{
	case '=':
	case 'x':
	case '(': case ')': case '!': case '~': case '&': case '|': case '^': case '{': case '}':
		return Token(ch);
	case '.':
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	{
		cin.putback(ch);
		double val;
		cin >> val;
		return Token('8', val);
	}
	default:
		error("Bad token");
	}
}

Token_stream ts;

// Escreva uma gramática para expressões lógicas.
// Uma expressão lógica é bem parecida com uma expressão aritmética, exceto que os operadores são ! (negação), ~ (complemento), & (e), | (ou) e ^ (ou exclusivo).
// Os ! e ~ são operadores unários de prefixo.
// Um ^ se une a | (assim como * se une a +), de modo que x|y^z significa x|(y^z) em vez de (x|y)^z.
// O operador & tem precedência sobre ^, de modo que x^y&z significa x^(y&z).

double unary(char op, int n);
double expression();

double primary()
{
	Token t = ts.get();
	switch (t.kind)
	{
	case '(':
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')') error("')' expected");
		return d;
	}
	case '{':
	{
		double d = expression();
		t = ts.get();
		if (t.kind != '}') error("'}' expected");
		return d;
	}
	case '!': case '~':
	{
		char op = t.kind;
		t = ts.get();
		double d = unary(op, t.value);
		return d;
	}
	case '8':
		return t.value;
	default:
		error("primary expected");
	}
}

double unary(char op, int n)
{
	int result = 0;

	// '!' and '~'
	switch (op)
	{
	case '!':
		result = !n;
	case '~':
		result = ~n;
	default:
		break;
	}

	return result;
}

double expressionL2()
{
	// &
	int x = 0;
	double left = primary();
	Token t = ts.get();

	while (true)
	{
		switch (t.kind)
		{
		case '&':
			x = left;
			left = x & int(primary());
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

double expressionL1()
{
	// ^
	int x = 0;
	double left = expressionL2();
	Token t = ts.get();

	while (true)
	{
		switch (t.kind)
		{
		case '^':
			x = left;
			left = x ^ int(expressionL2());
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

double expression()
{
	// |
	int x = 0;
	double left = expressionL1();
	Token t = ts.get();

	while (true)
	{
		switch (t.kind)
		{
		case '|':
			x = left;
			left = x | int(expressionL1());
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

int main()
{
	try
	{
		double val = 0;

		while (cin)
		{
			Token t = ts.get();

			if (t.kind == 'x') break; // 'x' for quit
			if (t.kind == '=')        // '=' for "print now"
				cout << "=" << val << '\n';
			else
				ts.putback(t);
			val = expression();
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

	return 0;
}
