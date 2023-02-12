#pragma once

#include<string>
using namespace std;

class quiz
{
public:
	int total_correct_ans = 0;
	int total_wrong_ans = 0;
	enum questions { Quiz1, Quiz2, Quiz3, Quiz4, Quiz5, Quiz6, Quiz7, Quiz8, Quiz9, Quiz10, Quiz11, Quiz12, Quiz13, Quiz14, Quiz15, Quiz16, Quiz17, Quiz18, Quiz19, Quiz20, endQuiz };

	static string get_quiz(questions);
	static bool check_answer(questions, int);
	string correct_message(bool);
};

