#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
// Belew i make a funciton which will add spces according to our need when prinitng on the termina;
static int i = 0;
void iputs(string s, int space = -1)
{
    if (space == -1)
    {
        for (int x = i; x; x--)
        {
            cout << " ";
        }
        for (char c : s)
        {
            Sleep(100);
            cout << c;
        }
    }
    else
    {
        i = space;
        for (int x = i; x; x--)
        {
            cout << " ";
        }
        for (char c : s)
        {
            Sleep(100);
            cout << c;
        }
    }
    cout << endl;
}
void hline()
{
    for (int i = 0; i < 81; i++)
    {
        cout << "-";
    }
}
class templ
{
    string one, two, three, four;

public:
    templ(string s1 = "", string s2 = "", string s3 = "", string s4 = "")
    {
        one = s1;
        two = s2;
        three = s3;
        four = s4;
    }
    void display(int n)
    {
        iputs(one, n);
        iputs(two);
        iputs(three);
        iputs(four);
    }
};
class information
{
    string detail;

public:
    information(string a)
    {
        detail = a;
    }
    void display()
    {
        for (char c : detail)
        {
            Sleep(100);
            cout << c;
        }
        cout << endl;
    }
};

int main()
{
    string taliport;
    HANDLE cc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(cc, 5);
    hline();
    cout << endl;
    
    templ about("Skill Set...", "Interapersonal Skills...", "Education...", "My Background...");
    templ skill_set("C++...", "CSS...", "C...", "JavaScript...");
    templ interp_skill("Got 2nd position in school level racing...", "Good in swinmming...", "A good player in circle kabaddi...", "Good in cooking...");
    templ education("Done Matric Education from Government Senior Secondary school , Bijjuwali...", "Done Secondary Education from GSSS , Risalia Kherea...", "Now I am persuing my B.E. in CSE from /033[1mCHANDIGARH UNIVERSITY...");
    templ backgound("I belongs to Haryana...", "I love living in village...", "Feels good when i drive tractor in our khet...", "Love desi food...");
    information cpp("I started learning c++ in my 2nd semester of b.tech cse .I have good knowleadge about c++ . I can built projects using c++ . I have made 6 simple but interseting projects using c++. Few from them are:\nSNAKE GAME\nTIC TOE GAME\nROCK PAPER SESIOR GAME\n");
    information css("I learn css when i am learing web developement .I learned it from turorials and from website .I am also capable of using css libraries .Using CSS a make some website clones . Few examples are:\nNETFLIX CLONE\nULTRA EDITZ CLONE\n");
    information c("The first computer lanugae i learned is C lanuage . I find c an intersting and very powerful lanuage from any other lanuage .The thing i love about c is that we can play with bits memory and can go deep in system using c.");
    information javascript("Because JavaScript is a diverse lanuage which can work like a programing lanuage and also like a scripting lanuage . I decided to learned Javascript few months ago .I also make some projects using Javascript like:\nRock Paper Scissor Game\nKeep Notes app\nTo Do List\n");
    information racing("When i was in 9th class i started racing .I do practice with my village friends .They were preparing for the army physical test.Practising with them boost my stamina . Then one day i decided to take partisipate in racing compition . I took partisipate in School level racing on the ocasson of CHILDRENS DAY and i got 2nd postion there.");
    information swimming("I started swimming in 6th or 7th class .In my village there is a temple .From that temple's pond i started swimming. And there i learned many enjoying things we can do in water like:\nJumping from 3 or 4 floor building\nDoing racing in water\nJumping from trees\n");
    information kabbaddi("I started kabbadi in 4th or 5th class .Over village kabaddi team won big prizes like 4 lakh ,5 lakh.So our village boys has craze of kabaddi so i also started playing circle kabaddi and participated in kabbadi tournaments of 40kg weight 45 kg  ");
    information cooking("Cooking i learned from my mom and sister . When i am board and hungry , i start making any dish . So i also have good cooking skill");
    information Matric("I done my martic from a village scholl .I have a very good experience with this school .All teachers are like family .I am a good student .The teacher who affected me most was our science teacher .They teach us very well.From there i came to know how to do deep learning and how to uderstand things deeply");
    information secondray("At the time of secondary education corona virus arrived .So most of my 11 and 12th passed in corona .But i study online and from tution .In 11 is choose non-medical stream .That was a nice journey");
    information college("I am doing my B.tech degree from CHANDIGARH UNIVERSITY .Most of time i do codding .I find interesting writing the programs .And developing simple project from the skills i had.");
    information haryana("Haryana is famous for wrestling kabaddi .I also took birth in haryan.I am proud on being haryanvi");
    information village("I love village life because all live in joint family .In village i get quality food and freash and health envioroment .No inorganic things are used in food");
    information tractor("We do farming and we have a tractor i like driving tractor because it have a lot power it can pull very big tralies driving tractor give me feel of power");
    information food("Desi food means home made panner,ghee,makhan,lassi,maka ki roti,kheer ,At home we have cows and buffalows .So we have richnes of dessi food .Desi food keeps us health feet and keep our brain active that's why i love desi food");
    SetConsoleTextAttribute(cc, 2);
    iputs("-:-WELCOME TO MY WORLD-:-", 30);
    SetConsoleTextAttribute(cc, 3);
    iputs("---Hey! My name is Harbansh---", 30);
    SetConsoleTextAttribute(cc, 0xF);
    cout << "Are you interesed knowing more about me(Yes/No):-";
    SetConsoleTextAttribute(cc, 0xC);
    string ask;
    cin >> ask;
    SetConsoleTextAttribute(cc, 6);
    if (ask == "yah" || ask == "yes" || ask == "Yes" || ask == "y")
    {
        about.display(40);
    }
    else
    {
        SetConsoleTextAttribute(cc, 5);
        iputs("Thanks for visiting!", 33);
        hline();
        exit(0);
    }
    up:;
    SetConsoleTextAttribute(cc, 0xF);
    cout << "Enter a number which thing you want to know about me :";
    SetConsoleTextAttribute(cc, 0xC);
    int choise1;
    cin >> choise1;
    SetConsoleTextAttribute(cc, 6);
    switch (choise1)
    {
    case 1:
    {
        skill_set.display(40);
        break;
    }
    case 2:
    {
        interp_skill.display(40);
        break;
    }
    case 3:
    {
        education.display(40);
        break;
    }
    case 4:
    {
        backgound.display(40);
        break;
    }
    default:
    {   
            SetConsoleTextAttribute(cc, 0xC);
        cout << "Choose a valid number\n";
        goto up;
    }
    }
    int choise2;
    SetConsoleTextAttribute(cc, 0xF);
    cout << "Enter 0 if you don't want" << endl
         << "Would you like to elaborate anyone from this:";
    SetConsoleTextAttribute(cc, 0xC);
    cin >> choise2;
    while (choise2 != 0)
    {

        SetConsoleTextAttribute(cc, 0xA);
        for (int i = 0; i < 45; i++)
        {
            cout << " ";
        }

        switch (choise1)
        {
        case 1:
            switch (choise2)
            {
            case 1:
                cpp.display();
                goto end;
            case 2:
                css.display();
                goto end;
            case 3:
                c.display();
                goto end;
            case 4:
                javascript.display();
                goto end;
            default:
            {
                SetConsoleTextAttribute(cc, 0xC);
                cout << "Choose a valid number\n";
                goto end;
            }
            }
        case 2:
            switch (choise2)
            {
            case 1:
                racing.display();
                goto end;
            case 2:
                swimming.display();
                goto end;
            case 3:
                kabbaddi.display();
                goto end;
            case 4:
                cooking.display();
                goto end;
            default:
            {
                SetConsoleTextAttribute(cc, 0xC);
                cout << "Choose a valid number\n";
                goto end;
            }
            }
        case 3:
            switch (choise2)
            {
            case 1:
                Matric.display();
                goto end;
            case 2:
                secondray.display();
                goto end;
            case 3:
                college.display();
                goto end;
            default:
            {
                SetConsoleTextAttribute(cc, 0xC);
                cout << "Choose a valid number\n";
                goto end;
            }
            }
        case 4:
            switch (choise2)
            {
            case 1:
                haryana.display();
                goto end;
            case 2:
                village.display();
                goto end;
            case 3:
                tractor.display();
                goto end;
            case 4:
                food.display();
                goto end;
            default:
            {
                SetConsoleTextAttribute(cc, 0xC);
                cout << "Choose a valid number\n";
                goto end;
            }
            }
        default:
        {
            SetConsoleTextAttribute(cc, 0xC);
            cout << "Choose a valid number\n";
            goto end;
        }
        }
    end:;
        SetConsoleTextAttribute(cc, 0xF);
        cout << "Would you like to elaborate more from this:";
        SetConsoleTextAttribute(cc, 0xC);
        cin >> choise2;
    }
    SetConsoleTextAttribute(cc, 5);
    iputs("-:Thanks for visiting:-", 30);
    hline();
    SetConsoleTextAttribute(cc, 7);
}
