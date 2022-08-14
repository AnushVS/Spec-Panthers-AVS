#include <iostream>

char* strcat(char* s1, char* s2);

int main()
{
	const int size1 =20;
	const int size2 =10;

	char s1[size1]={};
	char s2[size2]={};
	
	std::cout << "Please enter the sentences." << std::endl;	
	
	std::cin >> s1;
	std::cin >> s2;

	std::cout << strcat(s1, s2) << std::endl;
	
return 0;
}
char* strcat(char*s1, char*s2)
{
	int count = 0;
	
	while (s1[count] != '\0')
	{
		++count;
	}	

	for(int i = 0; s2[i] != '\0'; ++i)
	{
		s1[count + i] = s2[i]; 


	}
	
	return s1;

}


