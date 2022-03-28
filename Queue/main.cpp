#pragma warning(disable : 4996);
#include "AllLibraries.h"
#include "Queue.h"

int main()
{
	srand(time(NULL));
	setlocale(0, "UKR");

	SwitchingPriorityQueue q(25);

	q.Enqueue(10, 1);
	q.Enqueue(12, 2);
	q.Enqueue(13, 1);
	q.Enqueue(2, 2);
	q.Enqueue(5, 5);
	q.Enqueue(3, 3);
	q.Print();

	q.Dequeue();
	q.Print();

	q.Dequeue();
	q.Print();

	q.Dequeue();
	q.Print();

	q.Dequeue();
	q.Print();

}