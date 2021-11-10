#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	int n, fact = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;

	}
	cout << fact << endl;
	int i = 1, t = i * (i + 1) * (i + 2);
	while (t <= fact) {
		if (t == fact) {
			cout << i << " " << i+1 << " " << i+2;
			break;
		}
		i++;
		t = i * (i + 1) * (i + 2);
	}
	if (t > fact)
		cout << "Нет такой последовательности";

}
