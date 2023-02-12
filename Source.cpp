#include "Quiz.h"
#include <conio.h>
#include <iostream>
using namespace std;

void main()
{
	quiz q;
	quiz::questions g = quiz::questions::Quiz1;
	for (int i = 0; i < quiz::questions::endQuiz; i++)
	{
		quiz::questions g = (quiz::questions)i;
		cout << i + 1 << "." << quiz::get_quiz(g);
		int answer;
		cin >> answer;
		cout << q.correct_message(quiz::check_answer(g, answer)) << endl;
	}
	cout << "Total correct Answers : " << q.total_correct_ans;
	cout << "\nTotal wrong Answers : " << q.total_wrong_ans;
	_getch();
}
