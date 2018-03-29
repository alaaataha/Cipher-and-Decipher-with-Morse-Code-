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


#include <iostream>

using namespace std;
int main(){
     float v,f, r ,y ,pie =3.14 ;
     cout <<"enter the radius of sphere and the weight y kbeer" <<endl;
     cin >> r>>y;
     v=(1.333)*pie*(r*r*r);
     cout <<"volume ="<<v<<endl;
     f=v*y;
     cout <<"force = "<<f<<endl;
     if (f>=y)
        cout <<"it will float"  <<endl ;
     else
        cout<<"it will sink " <<endl;



    return 0;}


 //group 14:
// assignment 2 :
//ID1:20170284
//ID2:20170057
// mas2ala bta3t el group :
int main()
{
    int n;
    char answer = ' ';

    cout <<" would you like to covert numbers ?(Y/N): ";
    cin >> answer;
    answer = toupper(answer);
    if(answer == 'Y')
    {
            again:
            cout<<endl;
            cout << "Enter the number: ";

        while(cin>>n)
        {
            int i,j,k,l;
            l=(n/1000)*1000;
            if(l==1000)
                cout<<"M";
            if(l==2000)
                cout<<"MM";
            if(l==3000)
                cout<<"MMM";
            if(l==4000)
                cout<<"-IV";
            if(l==5000)
                cout<<"-V";
            if(l==6000)
                cout<<"-VI";
            if(l==7000)
                cout<<"-VII";
            if(l==8000)
                cout<<"-VIII";
            if(l==9000)
                cout<<"-IX";
            if(l==10000)
                cout<<"-X";
            k=(n%1000);
            k=(k/100)*100;
            if (k == 100)
                cout<<"C";
            else if (k == 200)
                cout<<"CC";
            else if (k == 300)
                cout<<"CCC";
            else if (k == 400)
                cout<<"CD";
            else if (k ==500)
                cout<<"D";
            else if (k == 600)
                cout<<"DC";
            else if (k == 700)
                cout<<"DCC";
            else if (k ==800)
                cout<<"DCCC";
            else if (k == 900)
                cout<<"CM";
            k=n%1000;
            l=k%100;
            j=(l/10)*10;
            if (j == 10)
                cout<<"X";
            else if (j == 20)
                cout<<"XX";
            else if (j == 30)
                cout<<"XXX";
            else if (j == 40)
                cout<<"XL";
            else if (j ==50)
                cout<<"L";
            else if (j == 60)
                cout<<"LX";
            else if (j == 70)
                cout<<"LXX";
            else if (j ==80)
                cout<<"LXXX";
            else if (j == 90)
                cout<<"XC";
            i=l%10;
            if (i == 1)
                cout<<"I";
            else if (i == 2)
                cout<<"II";
            else if (i == 3)
                cout<<"III";
            else if (i == 4)
                cout<<"IV";
            else if (i ==5)
                cout<<"V";
            else if (i == 6)
                cout<<"VI";
            else if (i == 7)
                cout<<"VII";
            else if (i ==8)
                cout<<"VIII";
            else if (i == 9)
                cout<<"IX";
            cout<<endl;

            cout <<"Would you like to try again?(Y/N): ";
            cin >> answer;
            answer = toupper(answer);

            if(answer == 'Y' )
            {
                goto again;
            }
            else if(answer == 'N')
            {
                return 0;
            }
        }

    }
    return 0;
}
