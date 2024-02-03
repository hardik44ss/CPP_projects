#include<iostream>
using namespace std;

class cv {
    public:
        
        cv(){
            cout<<"\n\n -:Welcome to my World:- \n"
                <<"Hi , I am Hardik \n";
        }
        void askhelp(){
            string s;
            cout<<"Help (Yes/No) : ";
            cin>>s;
            if(s=="Yes"|| s=="yes"){
                getoption();
            }
            else{
                cout<<"-:Thanks for coming :-";
            }
        }
        void getoption(){
            cout<<"\n Hi I am **Hardik** Let me know what you want to know about Me : \n\n";
            cout<<"0. Introduction \n1. Skill Set "<<"\n2. Interpersonal "<<"\n3. Education \n4. Project \n. Exit\n\n";
            
        } 
        void showcv(int choice){
            cout<<endl<<endl;
            switch(choice){
                case 0: {
                    cout<<"I am a diligent and accomplished individual currently pursuing Computer Science Engineering at Chandigarh University. My academic journey has been marked by exceptional achievements, with a remarkable 92.2% in 12th class and an outstanding 94.4% in 10th class. This demonstrates my unwavering commitment to academic excellence and a strong foundation for my current pursuits. Proficient in programming languages such as C and C++, my coursework has expanded to encompass the intricate realms of Data Structures and Algorithms, IoT, and Robotics in my second semester. Beyond academics, my keen interest in web development and a goal-oriented approach to mastering diverse technologies further define my educational journey. With a track record of consistently high performance, I am poised to make significant contributions to the field of Computer Science and Engineering.";
                    break;
                }
                case 1 : {
                    cout<<"SKILLSET : \nAbout Programming language : \n\t1. C\n\t2. C++\n\t3. html and CSS\n\t4. Exit."<<endl;
                    int a1;
                    cout<<"Enter Number : ";
                    cin>>a1;
                    switch (a1)
                    {
                    case 1:
                        cout<<"\n\nIn my 1st semester in chandigarh university . I was introduced to C language and follow some books and Youtube content and also follow some books . WHick inhanced my skills in C language . It clears all my basics of pragramming and it is crazy to do projects in C language . I  have worked on it then I switched to C++ .";
                        break;
                    case 2: {
                        cout <<"\n\nDuring my academic journey, I delved into the realm of programming, specifically focusing on C++. Equipped with a strong foundation in the language, I successfully applied my knowledge to various projects and coursework. Proficient in using Visual Studio for programming purposes, I have honed my skills in C++ to a level where I am confidently navigating the intricacies of the language. My dedication to continuous learning is evident as I am concurrently expanding my expertise in web development and furthering my understanding of data structures and algorithms. This comprehensive approach to my education reflects my commitment to staying abreast of emerging technologies and solidifying my position as a versatile and adept programmer.";
                        break;
                    }
                    break;
                    case 3 : {
                        cout<<"\n\nIn my academic journey, I have been introduced to the fundamental concepts of web development, particularly in HTML and CSS. While I haven't delved deeply into these technologies yet, I possess a foundational understanding of their principles. HTML serves as the backbone for structuring web content, allowing me to create and organize various elements on a webpage. Additionally, I have explored CSS to style and visually enhance the presentation of HTML elements. Though my exploration into HTML and CSS is at an introductory stage, I am eager to deepen my proficiency in these technologies as part of my ongoing pursuit of web development skills.";
                        break;
                    }
                    case 4:
                        askhelp();
                        break;
                    default:
                        break;
                    }
                }
                     break;
                case 2 : {
                    cout<<"ACHIEVEMENTS : \n\tMath \n\tReference C++\n\tOOPs in c++"<<endl;
                }
                    break;
                case 3 : {
                    cout<<"EDUCATION : \n\tMarks in 10th Boards : 94.4%\n\tMarks in 12th Boards : 92.2%\n\tCGPA 1st semester : 8.00"<<endl;

                }
                    break;
                case 4 : {
                    cout<<"For my PROJECTS : \n\tGo to my Github Profile : https://github.com/hardik44ss\n"<<endl;
                }
                break;
                case 5 : {
                    askhelp();
                }
                default:
                    askhelp();
            }
        }
};
int main () 
{
    cv  c1;
    c1.askhelp();
    int n;
            cout<<"Select Option : ";
            cin>>n;
            c1.showcv(n);
    return 0;
}
