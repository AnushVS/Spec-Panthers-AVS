#include <iostream>

void strset(char* s, char ch);

int main()
{
	char s[20] = {};
	char ch;
	
	std::cout << "Please enter the sentence " << std::endl;
	std::cin>> s;

	std::cout << "Please enter the letter" << std::endl;
	std::cin >> ch;
	
	 strset(s, ch);
	 
	 std::cout << s << std::endl;	 
	
	 return 0;
}

void strset(char*s, char ch)
{
	int count = 0;
	
	while(s[count] !='\0')
	{
		++count;
	}
	
	for(int i = 0; i < count ; ++i)
	{
		if(s[i] != ch)
		{
			s[i] = ch;
		
		}
	}
	
}
