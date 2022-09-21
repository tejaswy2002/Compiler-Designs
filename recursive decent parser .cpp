#include<stdio.h>
int main()
{
	E();
		if (l == '$')
		printf("Parsing Successful");
}
E()
{
	if (l == 'i') {
		match('i');
E'();
	}
}
E'()
{
	if (l == '+') {
		match('+');
		match('i');
		E'();
	}
	else if ( l == 'e' )
	{
	match('e');
	}
		return ();
}
match(char t)
{
	if (l == t) {
		l = getchar();
	}
	else
		printf("Error");
}
