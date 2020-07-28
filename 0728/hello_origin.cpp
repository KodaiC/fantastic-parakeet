#include <string>
#include <iostream>
using namespace std;

//®” num ‰ñ‚ ‚¢‚³‚Â‚ð‚·‚é
void hello_N(int num) {
	for (int i = 0; i < num; i++) {
		cout << "hello ";
	}
	cout << endl;
}

//“G‚ÉƒAƒ“ƒuƒbƒVƒ…‚³‚ê‚é@’l‚ª-10ˆÈ‰º‚È‚ç‰ñ”ð¬Œ÷
void ambush(int num) {
	cout << "<<“G‚ÌƒAƒ“ƒuƒbƒVƒ…I>>\n";
	if (num <= -10) {
		cout << "ƒAƒ“ƒuƒbƒVƒ…‚ÉŽ¸”s‚µ‚½ƒjƒ“ƒWƒƒ‚Í‚·‚êˆá‚¢—l‚ÉƒJƒ‰ƒe‚ð‹ò‚ç‚¢”š”­ŽlŽUI\n";
	}
	else {
		cout << "ƒAƒ“ƒuƒbƒVƒ…‚àŒ©”²‚¯‚È‚¢ƒTƒ“ƒVƒ^ƒjƒ“ƒWƒƒ‚Í”š”­ŽlŽUI\n";
	}

}

int main() {
	int N;
	cout << "‰½‰ñ‚ ‚¢‚³‚Â‚·‚éH:";
	cin >> N;

	if (N <= 0) {
		ambush(N);
		return 0;
	}

	hello_N(N);

	cout << "ˆ¥ŽAI‚í‚è\n";

	return 0;
}