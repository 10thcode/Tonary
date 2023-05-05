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
				binary.append("00100000 ");
				break;

			case '!':
				binary.append("00100001 ");
				break;

			case '"':
				binary.append("00100010 ");
				break;

			case '#':
				binary.append("00100011 ");
				break;

			case '$':
				binary.append("00100100 ");
				break;

			case 'A':
				binary.append("01000001 ");
				break;

			case 'B':
				binary.append("01000010 ");
				break;

			case 'C':
				binary.append("01000011 ");
				break;

			case 'D':
				binary.append("01000100 ");
				break;

			case 'E':
				binary.append("01000101 ");
				break;

			case 'F':
				binary.append("01000110 ");
				break;

			case 'G':
				binary.append("01000111 ");
				break;

			case 'H':
				binary.append("01001000 ");
				break;

			case 'I':
				binary.append("01001001 ");
				break;

			case 'J':
				binary.append("01001010 ");
				break;

			case 'K':
				binary.append("01001011 ");
				break;

			case 'L':
				binary.append("01001100 ");
				break;

			case 'M':
				binary.append("01001101 ");
				break;

			case 'N':
				binary.append("01001110 ");
				break;

			case 'O':
				binary.append("01001111 ");
				break;

			case 'P':
				binary.append("01010000 ");
				break;

			case 'Q':
				binary.append("01010001 ");
				break;

			case 'R':
				binary.append("01010010 ");
				break;

			case 'S':
				binary.append("01010011 ");
				break;

			case 'T':
				binary.append("01010100 ");
				break;

			case 'U':
				binary.append("01010101 ");
				break;

			case 'V':
				binary.append("01010110 ");
				break;

			case 'W':
				binary.append("01010111 ");
				break;

			case 'X':
				binary.append("01011000 ");
				break;

			case 'Y':
				binary.append("01011001 ");
				break;

			case 'Z':
				binary.append("01011010 ");
				break;

			case '[':
				binary.append("01011011 ");
				break;

			case '/':
				binary.append("01011100 ");
				break;

			case ']':
				binary.append("01011101 ");
				break;

			case '^':
				binary.append("01011110 ");
				break;

			case '-':
				binary.append("01011111 ");
				break;

			case '`':
				binary.append("01100000 ");
				break;

			case 'a':
				binary.append("01100001 ");
				break;

			case 'b':
				binary.append("01100010 ");
				break;

			case 'c':
				binary.append("01100011 ");
				break;

			case 'd':
				binary.append("01100100 ");
				break;

			case 'e':
				binary.append("01100101 ");
				break;

			case 'f':
				binary.append("01100110 ");
				break;

			case 'g':
				binary.append("01100111 ");
				break;

			case 'h':
				binary.append("01101000 ");
				break;

			case 'i':
				binary.append("01101001 ");
				break;

			case 'j':
				binary.append("01101010 ");
				break;

			case 'k':
				binary.append("01101011 ");
				break;

			case 'l':
				binary.append("01101100 ");
				break;

			case 'm':
				binary.append("01101101 ");
				break;

			case 'n':
				binary.append("01101110 ");
				break;

			case 'o':
				binary.append("01101111 ");
				break;

			case 'p':
				binary.append("01110000 ");
				break;

			case 'q':
				binary.append("01110001 ");
				break;

			case 'r':
				binary.append("01110010 ");
				break;

			case 's':
				binary.append("01110011 ");
				break;

			case 't':
				binary.append("01110100 ");
				break;

			case 'u':
				binary.append("01110101 ");
				break;

			case 'v':
				binary.append("01110110 ");
				break;

			case 'w':
				binary.append("01110111 ");
				break;

			case 'x':
				binary.append("01111000 ");
				break;

			case 'y':
				binary.append("01111001 ");
				break;

			case 'z':
				binary.append("01111010 ");
				break;

			case '{':
				binary.append("01111011 ");
				break;

			case '|':
				binary.append("01111100 ");
				break;

			case '}':
				binary.append("01111101 ");
				break;

			case '~':
				binary.append("01111110 ");
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
