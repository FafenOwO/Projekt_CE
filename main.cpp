#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

class Question{
    public:
        int noq;
        string q;
        string opt1;
        string opt2;
        string opt3;
        int v;
};

void memory(int language){
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
return;
}

int main(){
    //Choose a language
    cout<<"Please choose a language"<<"\n";
    string languageS;
    lang:
    cout<<"(1) - Polish"<<endl;
    cout<<"(2) - English"<<endl;
    cin>>languageS;
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
    cin>>choice;
    if(choice == 1){memory(language);}
    else if (choice == 2){training(language);}
    else {if (language == 1){cout<<"Nie rozumiem. Spróbujmy jeszcze raz, upewnij się że podajesz jedną z dostęonych opcji jak '1' czy '2'"<<endl;} else {
        cout<<"I'm not sure what you mean. Let's try again, make sure to only answer with the options I gave you, as '1' or '2'."<<endl;} goto lang;}

    if(language==1){
        cout<<"Chcesz sprobowac jeszcze raz?"<<endl;
        cout<<"(1)-Pewnie!"<<endl;
        cout<<"(2)-Nie dzisiaj."<<endl;
    }
    if(language==2){
        cout<<"Chcesz sprobowac jeszcze raz?"<<endl;
        cout<<"(1)-Course!"<<endl;
        cout<<"(2)-Not today."<<endl;
    }
    int tryagain=0;
    cin>>tryagain;
    if(tryagain==1){goto task;}
}
