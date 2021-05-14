// Created by Jerimiah Cook
#include <iostream>
#include <string>
 
using namespace std;
 
int Guess;
int Total;
 
class Question
{
    private:
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;
 
        int Correct_Answer;
        float Question_Score;
 
    public:
        void setValues (string, string, string, string, string, int, int);
        void askQuestion ( );
};
 
int main()
{
 
cout << "Ten Codes Quiz" << endl;
 
cout << "Press Enter to start the quiz .. " << endl;
cin.get();
 
string Name;
int Age;

cout <<"What is your name?" << endl;
cin >> Name;
cout << endl;
cout <<"How old are you?" << endl;
cin >> Age;
cout << endl;
string Respond;
cout << "Are you ready to take the quiz " << Name << "? Yes/no" << endl;
cin >> Respond;
if (Respond == "yes"){
    cout << endl;
    cout << "ok, goodluck!" << endl;
}else if(Respond == "Yes"){
    cout << endl;
    cout << "ok, goodluck!" << endl;
}else{
    cout << "ok, goodbye!" << endl;
    return 0;
}
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;
	Question q11;
	Question q12;
	Question q13;
	Question q14;
	Question q15;
	Question q16;
	Question q17;
	Question q18;
	Question q19;
	Question q20;
	Question q21;
	Question q22;
	Question q23;
	Question q24;
	Question q25;
	Question q26;
	Question q27;
	Question q28;
	Question q29;
	Question q30;
	Question q31;
	Question q32;
	Question q33;
	Question q34;
	Question q35;
	Question q36;
	Question q37;
	Question q38;
	Question q39;
	Question q40;
	Question q41;
	Question q42;
	Question q43;
	Question q44;
	Question q45;
	Question q46;
	Question q47;
	Question q48;
	Question q49;
	Question q50;
	Question q51;
	Question q52;
	Question q53;
	Question q54;
	Question q55;
	Question q56;
	Question q57;
	Question q58;
	Question q59;
	Question q60;
	Question q61;
	Question q62;
	Question q63;
	Question q64;
	Question q65;
	Question q66;
	Question q67;
	Question q68;
	Question q69;
	Question q70;
	Question q71;
	Question q72;
	Question q73;
	Question q74;
	//Question q75;

	q1.setValues ("What is the code for 'Poor Reception'?",
				"10-1",
				"10-2",
				"10-9",
				"10-10",
				1,
				1.33);
	q2.setValues ("What is the code for 'Stop transmitting'?",
				"10-5",
				"10-7",
				"10-3",
				"10-45",
				3,
				1.33);
	q3.setValues ("What is the code for 'Relay message'?",
				"10-5",
				"10-6",
				"10-9",
				"10-22",
				1,
				1.33);
	q4.setValues ("What is the code for 'Radio reception good'?",
				"10-7",
				"10-2",
				"10-35",
				"10-23",
				2,
				1.33);
	q5.setValues ("What is the code for 'Advise weather/road conditions'?",
				"10-1",
				"10-12",
				"10-10",
				"10-13",
				4,
				1.33);
	q6.setValues ("what is the code for 'Message recieved and understood'?",
				"10-12",
				"10-10",
				"10-4",
				"CODE 4",
				3,
				1.33);
	q7.setValues ("What is the code for 'In service - Available for calls'?",
				"CODE 3",
				"187",
				"10-8",
				"10-6",
				3,
				1.33);
	q8.setValues ("What is the code for 'Busy - out of unit'?",
				"10-6",
				"10-7",
				"10-8",
				"273.5",
				1,
				1.33);
	q9.setValues ("What is the code for 'Escort duty'?",
				"10-3",
				"10-14",
				"10-21",
				"CODE 7",
				2,
				1.33);
	q10.setValues ("What is the code for 'Out of service - subject to call'?",
				"10-10",
				"10-12",
				"10-13",
				"CODE 3",
				1,
				1.33);
	q11.setValues ("What is the code for 'Off duty'?",
				"10-37",
				"10-87",
				"10-19",
				"10-7",
				4,
				1.33);
	q12.setValues ("What is the code for 'Pick up papers'?",
				"10-12",
				"10-17",
				"10-89",
				"10-34",
				2,
				1.33);
	q13.setValues ("What is the code for 'Telephone ______, state location'?",
				"10-2",
				"10-12",
				"10-21",
				"10-20",
				3,
				1.33);
	q14.setValues ("What is the code for 'Return to Station'?",
				"10-19",
				"10-12",
				"10-10",
				"10-98",
				1,
				1.33);
	q15.setValues ("What is the code for 'Driver's License Check'?",
				"10-17",
				"10-18",
				"10-27",
				"10-19",
				3,
				1.33);
	q16.setValues ("What is the code for 'Murder/homicide'?",
				"10-9",
				"211",
				"187",
				"415",
				3,
				1.33);
	q17.setValues ("What is the special code for 'Respond - emergency, use lights and siren'?",
				"CODE 4",
				"CODE 7",
				"CODE 9",
				"CODE 3",
				4,
				1.33);
	q18.setValues ("What is the modifier for 'Female'?",
				"X",
				"T/C",
				"M",
				"F",
				1,
				1.33);
	q19.setValues ("What is the special code for 'situation not stable, send backup'?",
				"CODE 4 BLUE",
				"CODE 4",
				"CODE 2",
				"CODE 999",
				1,
				1.33);
	q20.setValues ("What is the special code for 'Officer requires emergency assistance'?",
				"CODE 4 BLUE",
				"CODE 999",
				"451",
				"243",
				2,
				1.33);
	q21.setValues ("What is the code for 'Radio reception check'?",
				"There is no need for a code, I can yell at the radio until it submits to my will",
				"10-96",
				"10-98",
				"10-36",
				2,
				1.33);
	q22.setValues ("What is the L.E.O. code for 'sousal abuse'?",
				"211",
				"273.5",
				"451",
				"488",
				2,
				1.33);
	q23.setValues ("What is the L.E.O. code for 'Fight, noise, offensive words'?",
				"10-12",
				"CODE 7",
				"10851",
				"415",
				4,
				1.33);
	q24.setValues ("What is the modifier for 'Felony'?",
				"X",
				"M",
				"S",
				"F",
				4,
				1.33);
	q25.setValues ("What is the modifier for 'Misdemeanor'?",
				"M",
				"S",
				"T/C",
				"B",
				1,
				1.33);
	q26.setValues ("What is the modifier for 'Traffic collision'?",
				"MCI",
				"MVA",
				"T/C",
				"TCA",
				3,
				1.33);
	q27.setValues ("What is the L.E.O. code for 'Robbery'?",
				"460",
				"211",
				"451",
				"594",
				2,
				1.33);
	q28.setValues ("What is the modifier for 'Residence'?",
				"R",
				"S",
				"B",
				"PD",
				3,
				1.33);
	q29.setValues ("What is the code for 'Arrived on scene'?",
				"10-97",
				"10-80",
				"10-10",
				"10-34",
				1,
				1.33);
	q30.setValues ("What is the code for 'Who is radio operator'?",
				"10-36",
				"10-33",
				"10-37",
				"10-47",
				3,
				1.33);
	q31.setValues ("what is the code for 'Repeat last transmission'?",
				"10-7",
				"10-9",
				"10-8",
				"There isn't one, I yell out the window 'say again?'",
				2,
				1.33);
	q32.setValues ("What is the code for asking someone what the time is?",
				"10-45",
				"10-99",
				"10-36",
				"T",
				3,
				1.33);
	q33.setValues ("What is the code representing 'officals present'?",
				"10-12",
				"10-14",
				"10-87",
				"OP",
				1,
				1.33);
	q34.setValues ("What is the code representing 'investigation/stake out'?",
				"10-15",
				"10-98",
				"CODE 5",
				"CODE 6",
				3,
				1.33);
	q35.setValues ("What is the code for 'Prisoner in custody'?",
				"CODE 7",
				"CODE 1",
				"10-15",
				"CODE 148",
				3,
				1.33);
	q36.setValues ("What is the code for 'Transporting Prisoner'?",
				"261",
				"211",
				"487",
				"10-16",
				4,
				1.33);
	q37.setValues ("What is the code for 'standby'?",
				"S",
				"10-20",
				"10-23",
				"10-28",
				3,
				1.33);
	q38.setValues ("What is the modifier for 'Station'?",
				"S",
				"Station",
				"ST",
				"PD",
				1,
				1.33);
	q39.setValues ("What is the code for 'Finished last assignment'?",
				"10-28",
				"10-10",
				"10-97",
				"10-98",
				4,
				1.33);
	q40.setValues ("What is the code for 'Meet with ___ at ___'?",
				"10-45",
				"10-22",
				"10-87",
				"10-20",
				3,
				1.33);
	q41.setValues ("What is the special code for 'Bomb threat'?",
				"CODE 7",
				"CODE 10",
				"CODE 30",
				"451",
				2,
				1.33);
	q42.setValues ("What is the special code for 'Present Location'?",
				"10-20",
				"10-21",
				"10-22",
				"10-18",
				1,
				1.33);
	q43.setValues ("What is the special code for 'Vehicle Registration Check'?",
				"10-20",
				"10-27",
				"10-28",
				"10-22",
				3,
				1.33);
	q44.setValues ("What is the special code for 'Disregard/cancel last transmission/assignment'?",
				"10-21",
				"01-12",
				"10-10",
				"10-22",
				4,
				1.33);
	q45.setValues ("What is the special code for 'Rape'?",
				"261",
				"260",
				"273D",
				"273",
				1,
				1.33);
	q46.setValues ("What is the special code for 'Burglary'?",
				"461",
				"459",
				"460",
				"222",
				3,
				1.33);
	q47.setValues ("What is the special code for 'Hit and Run'?",
				"128",
				"444",
				"470",
				"480",
				4,
				1.33);
	q48.setValues ("What is the special code for 'Forgery'?",
				"470",
				"460",
				"374",
				"CODE 2",
				1,
				1.33);
	q49.setValues ("What is the special code for 'Under influence of drugs'?",
				"12874",
				"11550",
				"12723",
				"10-12",
				2,
				1.33);
	q50.setValues ("What is the special code for 'Assault'?",
				"240",
				"273D",
				"765",
				"128",
				1,
				1.33);
	q51.setValues ("What is the special code for 'Drunk in Public'?",
				"647F",
				"786",
				"876",
				"245",
				1,
				1.33);
	q52.setValues ("What is the special code for 'Vandalism'?",
				"549",
				"495",
				"594",
				"945",
				3,
				1.33);
	q53.setValues ("What is the special code for 'Annoying phone calls'?",
				"ST200",
				"653M",
				"645F",
				"712",
				2,
				1.33);
	q54.setValues ("What is the special code for 'Vehicle Theft'?",
				"10851",
				"10-851",
				"1623",
				"594",
				1,
				1.33);
	q55.setValues ("What is the special code for 'Petty Theft'?",
				"444",
				"487",
				"488",
				"876",
				3,
				1.33);
	q56.setValues ("What is the special code for 'Respond, no hurry'?",
				"CoODE 1",
				"CODE 4",
				"CODE 5",
				"CODE 2",
				1,
				1.33);
	q57.setValues ("What is the special code for 'Emergency Radio Traffic only'?",
				"CODE 30",
				"CODE 33",
				"CODE 999",
				"CODE 142",
				2,
				1.33);
	q58.setValues ("What is the special code for 'Resume normal radio traffic'?",
				"CODE 30",
				"CODE 33",
				"CODE 45",
				"CODE 142",
				1,
				1.33);
	q59.setValues ("What is the special code for 'Refueling vehicle at city yard'?",
				"10-10",
				"10-46",
				"10-45",
				"10-44",
				3,
				1.33);
	q60.setValues ("What is the special code for 'Wants check on property, guns, person, etc.'?",
				"10-29",
				"10-12",
				"10-28",
				"10-90",
				1,
				1.33);
	q61.setValues ("What is the special code for 'Does not conform to radio regulations'?",
				"10-21",
				"10-35",
				"10-20",
				"10-30",
				4,
				1.33);
	q62.setValues ("What is the special code for 'Confidential info. to follow'?",
				"163",
				"10-35",
				"10-34",
				"10-33",
				2,
				1.33);
	q63.setValues ("What is the special code for 'Respond, ASAP no lights or sirens'?",
				"CODE 5",
				"CODE 2",
				"CODE 3",
				"CODE 1",
				2,
				1.33);
	q64.setValues ("What is the special code for 'nO assistance neccessary'?",
				"CODE 1",
				"CODE 148",
				"CODE 999",
				"CODE 4",
				4,
				1.33);
	q65.setValues ("What is the special code for 'Meal Break'?",
				"CODE 7",
				"CODE 10",
				"CODE2",
				"CODE 5",
				1,
				1.33);
	q66.setValues ("What is the special code for 'Officer involved in resistance/fight'?",
				"CODE 3",
				"Shots Fired",
				"CODE 148",
				"CODE 999",
				3,
				1.33);
	q67.setValues ("What is the special code for 'Busy - Out of vehicle'?",
				"CODE 4",
				"CODE 6",
				"CODE 3",
				"CODE 8",
				2,
				1.33);
	q68.setValues ("What is the special code for 'Battery'?",
				"342",
				"240",
				"243",
				"420",
				3,
				1.33);
	q69.setValues ("What is the special code for 'Assault with deadly weapon'?",
				"241",
				"243",
				"244",
				"245",
				4,
				1.33);
	q70.setValues ("What is the special code for 'Defrauding Innkeeper'?",
				"212",
				"437",
				"537",
				"337",
				3,
				1.33);
	q71.setValues ("What is the special code for 'Corporal punishment of child'?",
				"273D",
				"162",
				"745",
				"273",
				1,
				1.33);
	q72.setValues ("What is the special code for 'Arson'?",
				"452",
				"451",
				"450",
				"449",
				2,
				1.33);
	q73.setValues ("What is the special code for 'Grand Theft'?",
				"444",
				"444",
				"477",
				"487",
				4,
				1.33);
	q74.setValues ("What is the special code for 'Lewd or lascivious conduct'?",
				"222",
				"238",
				"288",
				"283",
				3,
				1.33);
	/*q75.setValues ("What is the special code for 'Lerd or lascivious conduct'?",
				"222",
				"238",
				"288",
				"283",
				3,
				1.33); */
q1.askQuestion();
q2.askQuestion();
q3.askQuestion();
q4.askQuestion();
q5.askQuestion();
q6.askQuestion();
q7.askQuestion();
q8.askQuestion();
q9.askQuestion();
q10.askQuestion();
q11.askQuestion();
q12.askQuestion();
q13.askQuestion();
q14.askQuestion();
q15.askQuestion();
q16.askQuestion();
q17.askQuestion();
q18.askQuestion();
q19.askQuestion();
q20.askQuestion();
q21.askQuestion();
q22.askQuestion();
q23.askQuestion();
q24.askQuestion();
q25.askQuestion();
q26.askQuestion();
q27.askQuestion();
q28.askQuestion();
q29.askQuestion();
q30.askQuestion();
q31.askQuestion();
q32.askQuestion();
q33.askQuestion();
q34.askQuestion();
q35.askQuestion();
q36.askQuestion();
q37.askQuestion();
q38.askQuestion(); // woo hoo
q39.askQuestion();
q40.askQuestion();
q41.askQuestion();
q42.askQuestion();
q43.askQuestion();
q44.askQuestion();
q45.askQuestion();
q46.askQuestion();
q47.askQuestion();
q48.askQuestion();
q49.askQuestion();
q50.askQuestion();
q51.askQuestion();
q52.askQuestion();
q53.askQuestion();
q54.askQuestion();
q55.askQuestion();
q56.askQuestion();
q57.askQuestion();
q58.askQuestion();
q59.askQuestion();
q60.askQuestion();
q61.askQuestion();
q62.askQuestion();
q63.askQuestion();
q64.askQuestion();
q65.askQuestion();
q66.askQuestion();
q67.askQuestion();
q68.askQuestion();
q69.askQuestion();
q70.askQuestion();
q71.askQuestion();
q72.askQuestion();
q73.askQuestion();
q74.askQuestion();
//q75.askQuestion();
 
cout << "Your Total Score is " << Total << " out of 100" << endl;
 
if (Total >= 70)
{
    cout << "Great you passed the quiz!" << endl;
}
 
else {
 
cout << "Oh no! you failed the quiz." << endl;
cout << "better luck next time" << endl;
}
return 0;
}
 
void Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}
 
void Question::askQuestion()
{
    cout << endl;
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    cout << "What is your answer?(using corresponding numnber)" << endl;
    cin >> Guess;
    if (Guess == Correct_Answer)
    {
        cout << endl;
        cout << "Great! You are correct" << endl;
        Total = Total + Question_Score;
        cout << "Score: " << Question_Score << " Out of " << Question_Score << "!" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "oh no! You are wrong." << endl;
        cout << "Score: 0" << " out of " << Question_Score << "!" << endl;
        cout << "The correct answer is " << Correct_Answer << "." << endl;
        cout << endl;
    }
 

}
