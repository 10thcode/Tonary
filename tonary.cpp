#include <iostream>
#include <string>
using namespace std;

void toBinary();
void toText();

int main()
{
	do
	{
		string convertTo;
		cout<<endl;
		cout<<"Convert To ----------\n";
		cout<<"1. Binary\n";
		cout<<"2. Text\n";
		getline(cin, convertTo);

		if(convertTo == "1")
		{
			toBinary();
			return 0;
		}
		else if(convertTo == "2")
		{
			toText();
			return 0;
		}
		else if(convertTo == "x" || convertTo == "x")
		{
			cout<<"Exitting...\n";
			return 0;
		}
		else
		{
			cout<<"Wrong input. Try again.\n";
		}
	}
	while(true);
}

void toBinary()
{
	string text, binary;
	cout<<endl;
	cout<<"Binary ----------\n";
	cout<<"Text: ";
	getline (cin, text);

	for(int i = 0; i < text.length(); i++)
	{
		switch(text[i])
		{
			case ' ':
				binary.append("0010 0000 ");
				break;

			case '!':
				binary.append("0010 0001 ");
				break;

			case '"':
				binary.append("0010 0010 ");
				break;

			case '#':
				binary.append("0010 0011 ");
				break;

			case '$':
				binary.append("0010 0100 ");
				break;

			case 'A':
				binary.append("0100 0001 ");
				break;

			case 'B':
				binary.append("0100 0010 ");
				break;

			case 'C':
				binary.append("0100 0011 ");
				break;

			case 'D':
				binary.append("0100 0100 ");
				break;

			case 'E':
				binary.append("0100 0101 ");
				break;

			case 'F':
				binary.append("0100 0110 ");
				break;

			case 'G':
				binary.append("0100 0111 ");
				break;

			case 'H':
				binary.append("0100 1000 ");
				break;

			case 'I':
				binary.append("0100 1001 ");
				break;

			case 'J':
				binary.append("0100 1010 ");
				break;

			case 'K':
				binary.append("0100 1011 ");
				break;

			case 'L':
				binary.append("0100 1100 ");
				break;

			case 'M':
				binary.append("0100 1101 ");
				break;

			case 'N':
				binary.append("0100 1110 ");
				break;

			case 'O':
				binary.append("0100 1111 ");
				break;

			case 'P':
				binary.append("0101 0000 ");
				break;

			case 'Q':
				binary.append("0101 0001 ");
				break;

			case 'R':
				binary.append("0101 0010 ");
				break;

			case 'S':
				binary.append("0101 0011 ");
				break;

			case 'T':
				binary.append("0101 0100 ");
				break;

			case 'U':
				binary.append("0101 0101 ");
				break;

			case 'V':
				binary.append("0101 0110 ");
				break;

			case 'W':
				binary.append("0101 0111 ");
				break;

			case 'X':
				binary.append("0101 1000 ");
				break;

			case 'Y':
				binary.append("0101 1001 ");
				break;

			case 'Z':
				binary.append("0101 1010 ");
				break;

			case '[':
				binary.append("0101 1011 ");
				break;

			case '/':
				binary.append("0101 1100 ");
				break;

			case ']':
				binary.append("0101 1101 ");
				break;

			case '^':
				binary.append("0101 1110 ");
				break;

			case '-':
				binary.append("0101 1111 ");
				break;

			case '`':
				binary.append("0110 0000 ");
				break;

			case 'a':
				binary.append("0110 0001 ");
				break;

			case 'b':
				binary.append("0110 0010 ");
				break;

			case 'c':
				binary.append("0110 0011 ");
				break;

			case 'd':
				binary.append("0110 0100 ");
				break;

			case 'e':
				binary.append("0110 0101 ");
				break;

			case 'f':
				binary.append("0110 0110 ");
				break;

			case 'g':
				binary.append("0110 0111 ");
				break;

			case 'h':
				binary.append("0110 1000 ");
				break;

			case 'i':
				binary.append("0110 1001 ");
				break;

			case 'j':
				binary.append("0110 1010 ");
				break;

			case 'k':
				binary.append("0110 1011 ");
				break;

			case 'l':
				binary.append("0110 1100 ");
				break;

			case 'm':
				binary.append("0110 1101 ");
				break;

			case 'n':
				binary.append("0110 1110 ");
				break;

			case 'o':
				binary.append("0110 1111 ");
				break;

			case 'p':
				binary.append("0111 0000 ");
				break;

			case 'q':
				binary.append("0111 0001 ");
				break;

			case 'r':
				binary.append("0111 0010 ");
				break;

			case 's':
				binary.append("0111 0011 ");
				break;

			case 't':
				binary.append("0111 0100 ");
				break;

			case 'u':
				binary.append("0111 0101 ");
				break;

			case 'v':
				binary.append("0111 0110 ");
				break;

			case 'w':
				binary.append("0111 0111 ");
				break;

			case 'x':
				binary.append("0111 1000 ");
				break;

			case 'y':
				binary.append("0111 1001 ");
				break;

			case 'z':
				binary.append("0111 1010 ");
				break;

			case '{':
				binary.append("0111 1011 ");
				break;

			case '|':
				binary.append("0111 1100 ");
				break;

			case '}':
				binary.append("0111 1101 ");
				break;

			case '~':
				binary.append("0111 1110 ");
				break;

			default:
				break;
		}
	}

	cout<<endl;
	cout<<"Binary:\n";
	cout<<binary <<endl;
}

void toText()
{
	cout<<endl;
	cout<<"Text ----------\n";
	cout<<"Binary: ";
}

