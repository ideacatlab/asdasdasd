#include "Quiz.h"
#include<string>
using namespace std;

string quiz::get_quiz(const questions quiz)
{
	switch (quiz) 
	{
		//"What is the capital of India?\n1.Chennai\t2.Delhi\n3.Tamilnadu\t4.Kerala\nAnswer : "
	case Quiz1:
		return "Grand Central Terminal, Park Avenue, New York is the world's\n\n1.largest railway station\t2.highest railway station\n3.longest railway station\t4.None of the above\n\nAnswer : ";
	case Quiz2:
		return "Entomology is the science that studies\n\n1.Behavior of human beings\t2.Insects\n3.The origin and history of technical and scientific terms\n4.The formation of rocks\n\nAnswer : ";
	case Quiz3:
		return "Eritrea, which became the 182nd member of the UN in 1993, is in the continent of\n\n1.Asia\t2.Africa\n3.Europe\t4.Australia\n\nAnswer : ";
	case Quiz4:
		return "Garampani sanctuary is located at\n\n1.Junagarh, Gujarat\t2.Diphu, Assam\n3.Kohima, Nagaland\t4.Gangtok, Sikkim\n\nAnswer : ";
	case Quiz5:
		return "For which of the following disciplines is Nobel Prize awarded?\n\n1.Physics and Chemistry\t2.Physiology or Medicine\n3.Literature, Peace and Economics\t4.All of the above\n\nAnswer : ";
	case Quiz6:
		return "Hitler party which came into power in 1933 is known as\n\n1.Labour Party\t2.Nazi Party\n3.Ku-Klux-Klan\t4.Democratic Party\n\nAnswer : ";
	case Quiz7:
		return "FFC stands for\n\n1.Foreign Finance Corporation\t2.Film Finance Corporation\n3.Federation of Football Council\t4.None of the above\n\nAnswer : ";
	case Quiz8:
		return "Fastest shorthand writer was\n\n1.Dr. G. D. Bist\t2.J.R.D. Tata\n3.J.M. Tagore\t4.Khudada Khan\n\nAnswer : ";
	case Quiz9:
		return "Epsom (England) is the place associated with\n\n1.Horse racing\t2.Polo\n3.Shooting\t4.Snooker\n\nAnswer : ";
	case Quiz10:
		return "First human heart transplant operation conducted by Dr. Christian Bernard on Louis Washkansky, was conducted in\n\n1.1967\t2.1968\n3.1958\t4.1922\n\nAnswer : ";
	case Quiz11:
		return "Galileo was an Italian astronomer who\n\n1.developed the telescope\t2.discovered four satellites of Jupiter\n3.discovered that the movement of pendulum produces a regular time measurement\n4.All of the above\n\nAnswer : ";
	case Quiz12:
		return "Habeas Corpus Act 1679\n\n1.states that no one was to be imprisoned without a writ or warrant stating the charge against him\n2.provided facilities to a prisoner to obtain either speedy trial or release in bail\n3.safeguarded the personal liberties of the people against arbitrary imprisonment by the king's orders\n4.All of the above\n\nAnswer : ";
	case Quiz13:
		return "Exposure to sunlight helps a person improve his health because\n\n1.the infrared light kills bacteria in the body\t2.resistance power increases\n3.the pigment cells in the skin get stimulated and produce a healthy tan\n4.the ultraviolet rays convert skin oil into Vitamin D\n\nAnswer : ";
	case Quiz14:
		return "Golf player Vijay Singh belongs to which country?\n\n1.USA\t2.Fiji\n3.India\t4.UK\n\nAnswer : ";
	case Quiz15:
		return "Guarantee to an exporter that the importer of his goods will pay immediately for the goods ordered by him, is known as\n\n1.Letter of Credit (L/C)\t2.laissezfaire\n3.inflation\t4.None of the above\n\nAnswer : ";
	case Quiz16:
		return "First Afghan War took place in\n\n1.1839\t2.1843\n3.1833\t4.1848\n\nAnswer : ";
	case Quiz17:
		return "Gulf cooperation council was originally formed by\n\n1.Bahrain, Kuwait, Oman, Qatar, Saudi Arabia and United Arab Emirates\n2.Second World Nations\n3.Third World Nations\t4.Fourth World Nations\n\nAnswer : ";
	case Quiz18:
		return "First China War was fought between\n\n1.China and Britain\t2.China and France\n3.China and Egypt\t4.China and Greek\n\nAnswer : ";
	case Quiz19:
		return "Dumping is\n\n1.selling of goods abroad at a price well below the production cost at the home market price\n2.the process by which the supply of a manufacture's product remains low in the domestic market, which batches him better price\n3.prohibited by regulations of GATT\t4.All of the above\n\nAnswer : ";
	case Quiz20:
		return "For the Olympics and World Tournaments, the dimensions of basketball court are\n\n1.26 m x 14 m\t2.28 m x 15 m\n3.27 m x 16 m\t4.28 m x 16 m\n\nAnswer : ";
	default:
		return "No Questions";
	}
}

bool quiz::check_answer(const questions quiz, const int answer)
{
	bool return_answer = false;
	switch (quiz)
	{
	case Quiz1:
		return_answer = answer == 1;
		break;
	case Quiz2:
		return_answer = answer == 2;
		break;
	case Quiz3:
		return_answer = answer == 2;
		break;
	case Quiz4:
		return_answer = answer == 2;
		break;
	case Quiz5:
		return_answer = answer == 4;
		break;
	case Quiz6:
		return_answer = answer == 2;
		break;
	case Quiz7:
		return_answer = answer == 2;
		break;
	case Quiz8:
		return_answer = answer == 1;
		break;
	case Quiz9:
		return_answer = answer == 1;
		break;
	case Quiz10:
		return_answer = answer == 1;
		break;
	case Quiz11:
		return_answer = answer == 4;
		break;
	case Quiz12:
		return_answer = answer == 4;
		break;
	case Quiz13:
		return_answer = answer == 4;
		break;
	case Quiz14:
		return_answer = answer == 2;
		break;
	case Quiz15:
		return_answer = answer == 1;
		break;
	case Quiz16:
		return_answer = answer == 1;
		break;
	case Quiz17:
		return_answer = answer == 1;
		break;
	case Quiz18:
		return_answer = answer == 1;
		break;
	case Quiz19:
		return_answer = answer == 4;
		break;
	case Quiz20:
		return_answer = answer == 2;
		break;
	default:
		break;
	}
	return return_answer;
}
string quiz::correct_message(const bool answer)
{
	if (answer)
	{
		total_correct_ans++;
		return "Congratz your answer is right.\n";
	}

	total_wrong_ans++;
	return "Sorry your answer is wrong.\n";
}
