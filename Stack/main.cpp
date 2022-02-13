#include "AllLibraries.h"
#include "Stack.h"

int main()
{
	srand(time(NULL));
	Stack a;
	while (true)
	{
		a.Push(rand() % 100);
		cout << "data-> " << a.PrintTop() << "\tcount-> "<< a.GetCount() << "\n";
	}




	return 0;
}