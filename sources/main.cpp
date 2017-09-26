#include "stack.hpp"
#include <iostream>

int main() {
	try {
		stack<int> st{ 2 };
		st.push(13);
		st.push(15);
		st.push(1);
		st.push(3);

		cout << "Ellements of stack" << endl;
		cout << endl;

		st.printStack();

		st.pop();
		st.pop();
		st.pop();
		st.pop();
		st.pop(); //ERROR - нельзя удалить что-либо из нулевого стека(выкинет исключение)

		cout << endl;
		cout << "After removing" << endl;
		cout << endl;

		st.printStack();

		cout << endl;
	}

	catch (exception& exc) {
		cout << exc.what() << endl;
	}

	system("pause");
	return 0;
}
