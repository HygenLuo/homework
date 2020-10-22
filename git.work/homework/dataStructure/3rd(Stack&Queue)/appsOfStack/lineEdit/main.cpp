/*********************************************
 * @Author       : Daniel_Elendeer
 * @Date         : 2020-10-13 13:00:24
 * @LastEditors  : Daniel_Elendeer
 * @LastEditTime : 2020-10-14 17:15:25
 * @Description  :
*********************************************/

#include <iostream>
#include "./../../../template/Stack.hpp"


int main() {
	using namespace std;

	char c;
	Stack<char> s;

	c = getchar();

	while (c != '\n') {

		switch (c) {
			case '#':
				s.pop();
				break;

			case '@':
				s.clean();
				break;

			default:
				s.push(c);
				break;
		}

		c = getchar();
	}

	cout << "Stack : " << endl;
	s.print();




	return 0;
}
