#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>


using namespace std;

int main()
{
    system("clear");//To clear the screen

    cout<<"\n\n                 -------------------------Welcome to our registration system------------------------\n";
    cout<<"\n\n\n\n\n\n";
    
    cout<<"Choose one option : \n\n\n\n";

    int option;

    cout<<"Sign in (Press 1 to log in to an existing account)\n\n";
    cout<<"Sign up (Press 2 to create new account)\n\n";
    cin>>option;

    

    //Chosen option 1 SIGN IN section
    if (option == 1)
    {
        system("clear");

        cout<<"\n\n                 -------------------------Sign in to an existing account------------------------\n";
        cout<<"\n\n\n\n\n\n";

        string EuserName;
        cout<<"Enter username : ";
        cin>>EuserName;

        cout<<"\n\n";

        string EpassWord;
        cout<<"Enter password : ";
        cin>>EpassWord;


        //opening the file signin.txt
        fstream MyFile;
        MyFile.open("signin.txt");
        string name = EuserName+EpassWord;
        string line;
        if(MyFile.is_open())
        {
                while(getline(MyFile,line))
                {
                    if(line == name)
                    {
                       cout<<"\nUser-name : "<<EuserName;
                       getline(MyFile,line);
                       cout<<"\n\n\n"<<line;
                       cout<<"\n\n\n\n\n\n"; 
                       MyFile.close();
                    }
                    
                }
                
        }
        MyFile.close();

        
                
    }
    
    //Chosen option 2 sign up section
    if ( option == 2)
    {
        system("clear");

        cout<<"\n\n                 -------------------------Sign up to a new account------------------------\n";
        cout<<"\n\n\n\n\n\n";

        string NUserName;
        cout<<"Enter username";
        cin>>NUserName;

        cout<<"\n\n";

        string NPassWord;
        cout<<"Enter desired password";
        cin>>NPassWord;

        cout<<"\n\n";

        string addBio;
        cout<<"Add something about yourself ( Warning: Once added cann't be changed )";
        cin>>addBio;


        //Opening the file signin.txt
        std::ofstream ofs2;
        ofs2.open ("signin.txt", std::ofstream::out | std::ofstream::app);

        ofs2 << "\n";
        ofs2 << NUserName;
        ofs2 << NPassWord;
        ofs2 << "\n";
        ofs2 << addBio;

        ofs2.close();
        
    }
    
 

    
    return 0;
}