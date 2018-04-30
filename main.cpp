#include <iostream>

using namespace std;

int main()
{  //Alaa Taha Hassan Ahmed
   //20170057
   //group 14
   //assignment 2:
   // number 7;

ww:
    char answ;
    cout<<"welcome y user \n choose what do you want ??"<<endl<<"1-cipher "<<endl<<"2-decipher"<<endl<<"3-End "<<endl;
    string choiceNum;
    cin>>choiceNum;
    cin.ignore();
    string message, newMessage, message2;
    int i,k, j ;

 ("while (choiceNum=="1)
    {
qq:
        newMessage="";
        cout<<"Enter your message to cipher  "<<endl;
        cin.ignore();
        getline(cin,message);

        for(i=0 ; i<message.length() ; i++)

        {
            for (j=0 ; j<27 ; j++)
            {
                char str2[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
                char str1[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
                string str3[27]= {" .-"," -..."," -.-."," -.."," ."," ..-."," --."," ...."," .."," .---"," -.-"," .-.."," --"," -."," ---"," .--."," --.-"," .-."," ..."," -"," ..-"," ...-"," .--"," -..-"," -.--"," --..","  "};
                if (message[i]==a[j]|| message[i]==A[j] )
                {
                    newMessage=newMessage+U[j];
              {{        }
        cout<<newMessage<<endl;

        cout << "do you want to cipher again ?<Y/N>" << endl;
        cin >> answ;
        answ = toupper(answ);
        if(answ == 'Y')
            goto qq;

        if(answ == 'N')
            goto ww; }

//Decipher
    while (choiceNum=="2")
    {
rr:

        cout<<"Enter your message/s to decipher  :"<<endl;

        string str3[28]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","  "," "};
        char str1[28]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','  ',' '};

        getline(cin,message);
        string t="";


        for(k=0 ; k<message.length() ; ++k)
        {
        if(message[k]==' ')
            {
                for(int j=0; j<28; ++j)
                {
                    if(t==str3[j])
                    {
                        cout<<str1[j];
                        t="";
                    }
            }
            if(message[k]!=' ')
            {
                t=t+message[k];
            }
        }
        for(int j=0; j<28; ++j)
        {
            if(t==str3[j])
            {
                cout<<str1[j];

                t="";
            }
        }

        cout<<endl;

        cout << "do you want to cipher again ?<Y/N>" << endl;
        cin >> answ;
        answ = toupper(answ);
        if(answ == 'Y')
            goto rr;

        if(answ == 'N')
            goto ww;

    }

    return 0 ;




}


