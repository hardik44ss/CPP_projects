#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;


class CV {
public:
    CV() {
        
        string s="\n\n\033[1;36m -: Welcome to my World :- \033[0m";
        for(char c : s){
        cout<<c;
        Sleep(100);
        }
        cout<<endl;
        string ss="Hi, I am \033[1;34mHardik\033[0m from \033[1mChandigarh University \n";
        for (char c: ss){
            cout<<c;
            Sleep(100);
        }
       
    }

    void askHelp() {
        for(int i=0;i<69;i++){
        cout<<"\033[1;34m-";
        Sleep(10);
    }
        string s;
        s= "\033[1;33m\nNeed help to know about me(Yes/No) : \033[0m";
        for(char c : s){
        cout <<c;
        Sleep(80);
        }
        cin >> s;
        if (s == "Yes" || s == "yes") {
            getOption();
        }
        else {
            cout << "\033[1;31m-: Thanks for coming :-\n\033[0m";
        }
    }

    void getOption() {
        string info="\n Hi, I am \033[1;34m**Hardik**\033[0m. Let me know what you want to know about Me : \n\n";
        for(char c: info){
            cout<<c;
            Sleep(40);
        }
        string opt="0. \033[1;36mIntroduction\033[0m\n1. \033[1;36mSkill Set\033[0m\n2. \033[1;36mInterpersonal\033[0m\n3. \033[1;36mEducation\033[0m\n4. \033[1;36mProject\033[0m\n. \033[1;31mExit\033[0m\n\n";
        for(char c : opt){
            cout<<c;
            Sleep(30);
        }
        int n;
        cout << "\033[1;33mSelect Option : \033[0m";
        cin >> n;
        showCV(n);
    }

    void showCV(int choice) {
        cout << endl << endl;
        switch (choice) {
        case 0: {
            cout << "\033[1;32mI am a diligent and accomplished individual currently pursuing Computer Science Engineering at Chandigarh University. My academic journey has been marked by exceptional achievements, with a remarkable 92.2% in 12th class and an outstanding 94.4% in 10th class. This demonstrates my unwavering commitment to academic excellence and a strong foundation for my current pursuits. Proficient in programming languages such as C and C++, my coursework has expanded to encompass the intricate realms of Data Structures and Algorithms, IoT, and Robotics in my second semester. Beyond academics, my keen interest in web development and a goal-oriented approach to mastering diverse technologies further define my educational journey. With a track record of consistently high performance, I am poised to make significant contributions to the field of Computer Science and Engineering.\033[0m";
            askHelp();
            break;
        }
        case 1: {
            cout << "\033[1;36mSKILLSET : \nAbout Programming language : \n\t1. C\n\t2. C++\n\t3. HTML and CSS\n\t4. Exit.\033[0m" << endl;
            int a1;
            cout << "\033[1;33mEnter Number : \033[0m";
            cin >> a1;
            switch (a1) {
            case 1:
                cout << "\033[1;32m\n\nIn my 1st semester in Chandigarh University. I was introduced to C language and followed some books and YouTube content, which enhanced my skills in C language. It clears all my basics of programming, and it is exciting to do projects in C language. I have worked on it, then I switched to C++.\033[0m";
                askHelp();
                break;
            case 2: {
                cout << "\033[1;32m\n\nDuring my academic journey, I developed into the realm of programming, specifically focusing on C++. Equipped with a strong foundation in the language, I successfully applied my knowledge to various projects and coursework. Proficient in using Visual Studio for programming purposes, I have honed my skills in C++ to a level where I am confidently navigating the intricacies of the language. My dedication to continuous learning is evident as I am concurrently expanding my expertise in web development and furthering my understanding of data structures and algorithms. This comprehensive approach to my education reflects my commitment to staying abreast of emerging technologies and solidifying my position as a versatile and adept programmer.\033[0m";
                askHelp();
                break;
            }
            break;
            case 3: {
                cout << "\033[1;32m\n\nIn my academic journey, I have been introduced to the fundamental concepts of web development, particularly in HTML and CSS. While I haven't delved deeply into these technologies yet, I possess a foundational understanding of their principles. HTML serves as the backbone for structuring web content, allowing me to create and organize various elements on a webpage. Additionally, I have explored CSS to style and visually enhance the presentation of HTML elements. Though my exploration into HTML and CSS is at an introductory stage, I am eager to deepen my proficiency in these technologies as part of my ongoing pursuit of web development skills.\033[0m";
                askHelp();
                break;
            }
            case 4:
                askHelp();
                break;
            default:
                break;
            }
        }
        break;
        case 2: {
            cout << "\033[1;36mACHIEVEMENTS : \n\tMath \n\tReference C++\n\tOOPs in C++\033[0m" << endl;
            askHelp();
        }
        break;
        case 3: {
            cout << "\033[1;36mEDUCATION : \n\tMarks in 10th Boards : 94.4%\n\tMarks in 12th Boards : 92.2%\n\tCGPA 1st semester : 8.00\033[0m\n Now , I am persuing my B.E. in CSE from /033[1mChandigarh University" << endl;
            askHelp();
        }
        break;
        case 4: {
            cout << "\033[1;36mFor my PROJECTS : \n\tGo to my Github Profile : https://github.com/hardik44ss\033[0m\n";
            askHelp();
        }
        break;
        case 5: {
            askHelp();
        }
        default:
            askHelp();
        }
    }
};

int main() {
    for(int i=0;i<69;i++){
        cout<<"\033[1;34m-";
        Sleep(10);
    }
    CV c1;
    c1.askHelp();
    for(int i=0;i<69;i++){
        cout<<"\033[1;31m-";
        Sleep(10);
    }
    return 0;
}
