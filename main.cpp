#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

int totalscore;

class Question{
    public:
        string q;
        string opt1;
        string opt2;
        string opt3;
        int v;
};

int memory(int language){
    int score=0;
    srand(time(0));
    int no[10]={rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10};
    for(int i=0; i<10; i++){no[i]=no[i]+1;}
        string string1="black";
        string string2="brown";
        string string3="green";
        string string4="yellow";
        string string5="orange";
        string string6="red";
        string string7="pink";
        string string8="purple";
        string string9="blue";
        string string10="white";
    if(language == 1){
        string string1="czarny";
        string string2="brazowy";
        string string3="zielony";
        string string4="zolty";
        string string5="pomaranczowy";
        string string6="czerwony";
        string string7="rozowy";
        string string8="fioletowy";
        string string9="niebieski";
        string string10="biały";
    }
    if(language==1){cout<<"Twoja lista to:"<<endl;}else{cout<<"Your list is:"<<endl;}
    cout<<string1<<"="<<no[0]<<endl;
    cout<<string2<<"="<<no[1]<<endl;
    cout<<string3<<"="<<no[2]<<endl;
    cout<<string4<<"="<<no[3]<<endl;
    cout<<string5<<"="<<no[4]<<endl;
    cout<<string6<<"="<<no[5]<<endl;
    cout<<string7<<"="<<no[6]<<endl;
    cout<<string8<<"="<<no[7]<<endl;
    cout<<string9<<"="<<no[8]<<endl;
    cout<<string10<<"="<<no[9]<<endl;
    if(language==1)cout<<"Skup się prosze, za 2 minuty wyczyszczcze konsole i sprawdzimy Twoja pamiec!"<<endl;
    if(language==2)cout<<"Focus please! In two minutes I'll clear the console and we'll check your memory!"<<endl;
    std::this_thread::sleep_for(std::chrono::seconds(120));
    #ifdef _WIN32
        system("cls");
    #else
        system("clear"); // Linux / macOS
    #endif
    if(language==1)cout<<"Super! Czas sprawdzic Twoja pamiec! Ja podam Ci kolory, Ty podaj mi ich numery!"<<endl;
    if(language==2)cout<<"Amazing! Time to test your memory! I'll give you the colors, and you should answer with their numbers!"<<endl;

    int choice=0;
    cout<<string1; cin>>choice; if(choice==no[0]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[0]<<endl;}
    cout<<string2; cin>>choice; if(choice==no[1]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[1]<<endl;}
    cout<<string3; cin>>choice; if(choice==no[2]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[2]<<endl;}
    cout<<string4; cin>>choice; if(choice==no[3]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[3]<<endl;}
    cout<<string5; cin>>choice; if(choice==no[4]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[4]<<endl;}
    cout<<string6; cin>>choice; if(choice==no[5]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[5]<<endl;}
    cout<<string7; cin>>choice; if(choice==no[6]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[6]<<endl;}
    cout<<string8; cin>>choice; if(choice==no[7]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[7]<<endl;}
    cout<<string9; cin>>choice; if(choice==no[8]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[8]<<endl;}
    cout<<string10; cin>>choice; if(choice==no[9]){score++; cout<<"Super!"<<endl;}else{cout<<"Nope, "<<no[9]<<endl;}

    if(language==1)cout<<"Swietnie! Twój wynik to "<<score<<"/10 punktów!"<<endl;
    if(language==2)cout<<"Amazing! Your score is "<<score<<"/10 points!"<<endl;
return score;
}

int trainingPL()
{
    int noq=0;
    Question q1;
    q1.q="Czym jest system sterowania?";
    q1.opt1="(1) - Zestaw niepowiazanych elementow mechanicznych";
    q1.opt2="(2) - Zespol urzadzen realizujacych proces oraz jego sterowanie";
    q1.opt3="(3) - System bez regulatora";
    q1.v=2;
    noq++;

    Question q2;
    q2.q="Ktory system dziala bez sprzezenia zwrotnego?";
    q2.opt1="(1) - Uklad zamkniety";
    q2.opt2="(2) - Uklad nadany";
    q2.opt3="(3) - Uklad otwarty";
    q2.v=3;
    noq++;

    Question q3;
    q3.q="System liniowy spelnia zasade:";
    q3.opt1="(1) - Zachowania energii";
    q3.opt2="(2) - Superpozycji";
    q3.opt3="(3) - Stabilnosci";
    q3.v=2;
    noq++;

    Question q4;
    q4.q="Ktore z ponizszych jest systemem dyskretnym?";
    q4.opt1="(1) - Sterownik cyfrowy";
    q4.opt2="(2) - Wznacniacz analogowy";
    q4.opt3="(3) - Sprezyna mechaniczna";
    q4.v=1;
    noq++;

    Question q5;
    q5.q="Transmitancja G(s) jest rowna:";
    q5.opt1="(1) - U(s)/Y(s)";
    q5.opt2="(2) - X(s)/U(s)";
    q5.opt3="(3) - Y(s)/U(s)";
    q5.v=3;
    noq++;

    Question q6;
    q6.q="Ktora transformacja jest stosowana w teorii sterowania?";
    q6.opt1="(1) - Laplace'a";
    q6.opt2="(2) - Z-transformacja";
    q6.opt3="(3) - Fourier'a";
    q6.v=1;
    noq++;
    Question* qarr[] = {&q1,&q2,&q3,&q4,&q5,&q6};

    int score=0;
    int ans=0;
    for(int i=0; i<noq; i++){
        cout<<qarr[i]->q<<endl;
        cout<<qarr[i]->opt1<<endl;
        cout<<qarr[i]->opt2<<endl;
        cout<<qarr[i]->opt3<<endl;
        cout<<"Wybierz odpowiedz 1, 2, lub 3:";
        cin>>ans;
        if(ans==qarr[i]->v){score++; cout<<"Super!"<<endl<<endl;}else{cout<<"Nope, "<<qarr[i]->v<<endl<<endl;}
    }
    cout<<"Super! Twoj wynik to "<<score<<"/"<<noq<<endl<<endl;
return score;
}

int trainingEN(){
    int noq=0;
    Question q1;
    q1.q="What is a control system?";
    q1.opt1="(1) - A set of unconnected mechanical elements";
    q1.opt2="(2) - A group of devices executing a process and it's control";
    q1.opt3="(3) - A system without a regulator";
    q1.v=2;
    noq++;

    Question q2;
    q2.q="Which system works without feedback?";
    q2.opt1="(1) - A closed-loop system";
    q2.opt2="(2) - A broadcasting system";
    q2.opt3="(3) - An open-loop system";
    q2.v=3;
    noq++;

    Question q3;
    q3.q="A linear system meets the principle of:";
    q3.opt1="(1) - Conservation of energy";
    q3.opt2="(2) - Superposition";
    q3.opt3="(3) - Stability";
    q3.v=2;
    noq++;

    Question q4;
    q4.q="Which of the given options is a discreet system?";
    q4.opt1="(1) - A smart control";
    q4.opt2="(2) - An analog amplifier";
    q4.opt3="(3) - A mechanical spring";
    q4.v=1;
    noq++;

    Question q5;
    q5.q="The transmittance of G(s) equals:";
    q5.opt1="(1) - U(s)/Y(s)";
    q5.opt2="(2) - X(s)/U(s)";
    q5.opt3="(3) - Y(s)/U(s)";
    q5.v=3;
    noq++;

    Question q6;
    q6.q="Which transformation is used in control theory?";
    q6.opt1="(1) - Laplace's";
    q6.opt2="(2) - Z-transformation";
    q6.opt3="(3) - Fourier's";
    q6.v=1;
    noq++;
    Question* qarr[] = {&q1,&q2,&q3,&q4,&q5,&q6};

    int score=0;
    int ans=0;
    for(int i=0; i<noq; i++){
        cout<<qarr[i]->q<<endl;
        cout<<qarr[i]->opt1<<endl;
        cout<<qarr[i]->opt2<<endl;
        cout<<qarr[i]->opt3<<endl;
        cout<<"Select an answer: 1, 2, or 3:";
        cin>>ans;
        if(ans==qarr[i]->v){score++; cout<<"Great!"<<endl<<endl;}else{cout<<"Nope, "<<qarr[i]->v<<endl<<endl;}
    }
    cout<<"Superb! Your score is "<<score<<"/"<<noq<<endl<<endl;
return score;
}

int training(int language){
    int fscore=0;
    if(language==1){cout<<"Super! Czas przetestowac Twoja wiedze!"<<endl; fscore=trainingPL();}
    if(language==2){cout<<"Perfect! Time to test your knowledge!"<<endl; fscore=trainingEN();}
return fscore;
}

int main(){
    //Choose a language
    cout<<"Please choose a language"<<"\n";
    string languageS;
    lang:
    cout<<"(1) - Polish"<<endl;
    cout<<"(2) - English"<<endl;
    cin>>languageS;
    cout<<endl;
    int language=stoi(languageS);

    if(language == 1){cout<<"Hej! Jestem Study Buddy! Co chcesz dzisiaj pocwiczyc?"<<endl;}
    else if (language == 2){cout<<"Hi! I'm Study Buddy! What do you want to study today?"<<endl;}
    if(language != 1 && language != 2){cout<<"I'm not sure what you mean. Let's try again, make sure to only answer with the options I gave you, as '1' or '2'."<<endl; goto lang;}

    //Choose a task
    task:
        int choice=0;
    if(language == 1){
        cout<<"(1) - Pocwicz pamiec"<<endl;
        cout<<"(2) - Powtorz CE"<<endl;
    }else{
        cout<<"(1) - Train your memory"<<endl;
        cout<<"(2) - Study for CE"<<endl;
    }
    cin>>choice; cout<<endl;
    if(choice == 1){totalscore=totalscore+memory(language);}
    else if (choice == 2){totalscore=totalscore+training(language);}
    else {if (language == 1){cout<<"Nie rozumiem. Spróbujmy jeszcze raz, upewnij się że podajesz jedną z dostęonych opcji jak '1' czy '2'"<<endl;} else {
        cout<<"I'm not sure what you mean. Let's try again, make sure to only answer with the options I gave you, as '1' or '2'."<<endl;} goto lang;}

    if(language==1){
        cout<<"Chcesz sprobowac jeszcze raz?"<<endl;
        cout<<"(1)-Pewnie!"<<endl;
        cout<<"(2)-Nie dzisiaj."<<endl;
    }
    if(language==2){
        cout<<"Want to try again?"<<endl;
        cout<<"(1)-Course!"<<endl;
        cout<<"(2)-Not today."<<endl;
    }
    int tryagain=0;
    cin>>tryagain;
    if(tryagain==1){goto task;}
    
    if(language==1){
        cout<<"Twoj laczny wynik to "<<totalscore<<" punktów!"<<endl;
        cout<<"'Idzie Ci swietnie! Mam nadzieje, ze jeszcze tu wrocisz!' -Study Buddy"<<endl;
    }
    if(language==2){
        cout<<"Your total score is "<<totalscore<<" points!"<<endl;
        cout<<"You are doing amazing! I hope you will come back later!' -Study Buddy"<<endl;
    }
    
}
