#include <iostream>
#include <vector>
#include <string>
#include "Figure.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	vector<Figure> mas;
	float x1, x2, x3, x4, y1, y2, y3, y4;
	for (int i = 0; i < 3; i++)
	{
		cout << "Ââåäèòå êîîðäèíàòû x1,x2,x3,x4,y1,y2,y3,y4 äëÿ ÷åòûðåõóãîëüíèêà ¹ " << i + 1 << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas.push_back(Figure(x1, x2, x3, x4, y1, y2, y3, y4));
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Ïàðàìåòðû ÷åòûðåõóãîëüíèêà ¹ " << i + 1<<" : "; mas[i].show();  
		cout << "ßâëÿåòñÿ ëè ïðÿìîóãîëüíèêîì ÷åòûðåõóãîëüíèê  ¹ " << i + 1 << " : " << mas[i].is_prug() << endl;
		cout << "ßâëÿåòñÿ ëè êâàäðàòîì ÷åòûðåõóãîëüíèê  ¹ " << i + 1 << " : " << mas[i].is_square() << endl;
		cout << "ßâëÿåòñÿ ëè ðîìáîì ÷åòûðåõóãîëüíèê  ¹ " << i + 1 << " : " << mas[i].is_romb() << endl;
		cout << "Ìîæíî ëè âïèñàòü îêðóæíîñòü â ÷åòûðåõóãîëüíèê  ¹ " << i + 1 << " : " << mas[i].is_in_circle() << endl;
		cout << "Ìîæíî ëè îïèñàòü ÷åòûðåõóãîëüíèê  ¹ " << i + 1 << " : " << mas[i].is_out_circle() << endl;
	}
}