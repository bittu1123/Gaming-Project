#include <iostream>
using namespace std;
int main()
{
    int e,m,h,num,i,c,c1,count;
    char U,H;
	do{
	cout<<"Welcome To My Game."<<endl<<endl;
	cout<<"Lets Start: "<<endl<<endl;
	cout<<"What Type of Mode do you Want to play?"<<endl;
	cout<<"For Example: "<<endl<<endl;
	cout<<"For Easy Mode: "<<endl;
	cout<<"Press 1"<<endl<<endl;
	cout<<"For Medium Mode: "<<endl;
	cout<<"Press 2"<<endl<<endl;
	cout<<"For Hard Mode: "<<endl;
	cout<<"Press 3"<<endl<<endl;
	cin>>num;
	cout<<endl;
	if(num==1){
	cout<<"You Selected Easy Mode."<<endl;	
	cout<<endl;
	cout<<"There are Three levels: "<<endl<<endl;
	cout<<"Which Level Do You Want To Play?"<<endl<<endl;
	cout<<"Press 1 For Level 1."<<endl;
	cout<<"Press 2 For Level 2."<<endl;
	cout<<"Press 3 For Level 3."<<endl<<endl;
	cin>>num;
	cout<<endl<<endl;
	if(num==1){
	char c,c1;
	int i=4;
	int count=0;
	cout<<"Level 1 is: "<<endl<<endl;
	cout<<"You Have to Guess This Province Name: P*N*AB"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"P"<<c<<"N"<<c1<<"A"<<"B"<<endl;
	cout<<endl;
	if(c=='U'&&c1=='J'||c=='u'&&c1=='j')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='U'&&c1!='J'||c!='u'&&c1!='j')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	i--;
	cout<<"P"<<c<<"N"<<c1<<"A"<<"B"<<endl;
	cout<<endl;					
	if (c=='U'&&c1=='J'||c=='u'&&c1=='j')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='U'&&c1!='J'||c!='u'&&c1!='j'){
	cout<<"You Lose The Game!";
    }
	}
	}			
	else if(num==2){
	char c,c1;
	int i=4;
	int count=0;
	cout<<"Level 2 is: "<<endl<<endl;
	cout<<"You Have to Guess This city Name: L*H*RE"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"L"<<c<<"H"<<c1<<"R"<<"E"<<endl;
	cout<<endl;
	if ( c=='A'&&c1=='O'||c=='a'&&c1=='o')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='A'&&c1!='O'||c!='a'&&c1!='o')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	i--;
	cout<<"L"<<c<<"H"<<c1<<"R"<<"E"<<endl;
	cout<<endl;					
	if (c=='A'&&c1=='O'||c=='a'&&c1=='o')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='A'&&c1!='O'||c!='a'&&c1!='o'){
	cout<<"You Lose The Game!";
    }
	}
	}else if(num==3){
	char c,c1;
	int i=4;
	int count=0;
	cout<<"Level 3 is: "<<endl<<endl;
	cout<<"You Have to Guess This City Name: M*L*AN"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"M"<<c<<"L"<<c1<<"A"<<"N"<<endl;
	cout<<endl;
	if(c=='U'&&c1=='T'||c=='u'&&c1=='t')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='U'&&c1!='T'||c!='u'&&c1!='t')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	i--;
	cout<<"M"<<c<<"L"<<c1<<"A"<<"N"<<endl;
	cout<<endl;					
	if (c=='U'&&c1=='T'||c=='u'&&c1=='t')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='U'&&c1!='T'||c!='u'&&c1!='t'){
	cout<<"You Lose The Game!";
    }
	}
	}
	cout<<endl;
	}else if(num==2){
	cout<<"You Selected Medium Mode."<<endl;
	cout<<endl;
	cout<<"There are Three levels: "<<endl<<endl;
	cout<<"Which Level Do You Want To Play?"<<endl<<endl;
	cout<<"Press 1 For Level 1."<<endl;
	cout<<"Press 2 For Level 2."<<endl;
	cout<<"Press 3 For Level 3."<<endl<<endl;
	cin>>num;
	cout<<endl<<endl;
	if(num==1){
	char c,c1,c2;
	int i=4;
	int count=0;
	cout<<"Level 1 is: "<<endl<<endl;
	cout<<"You Have to Guess This Animal Name: E*EP*A*T"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: "; 
	cin>>c2;
	cout<<"E"<<c<<"E"<<"P"<<c1<<"A"<<c2<<"T"<<endl;
	cout<<endl;
	if(c=='L'&&c1=='H'&&c2=='N'||c=='l'&&c1=='h'&&c2=='n')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='L'&&c1!='H'&&c2!='N'||c!='l'&&c1!='h'&&c2!='n')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: ";
	cin>>c2;
	cout<<endl;
	i--;
	cout<<"E"<<c<<"E"<<"P"<<c1<<"A"<<c2<<"T"<<endl;
	cout<<endl;					
	if (c=='L'&&c1=='H'&&c2=='N'||c=='l'&&c1=='h'&&c2=='n')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='L'&&c1!='H'&&c2=='N'||c!='l'&&c1!='h'&&c2=='n'){
	cout<<"You Lose The Game!";
    }
	}
	}else if(num==2){
	char c,c1,c2;
	int i=4;
	int count=0;
	cout<<"Level 2 is: "<<endl<<endl;
	cout<<"You Have to Guess This Animal Name: S*OR*I*N"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: "; 
	cin>>c2;
	cout<<"S"<<c<<"O"<<"R"<<c1<<"I"<<c2<<"N"<<endl;
	cout<<endl;
	if(c=='C'&&c1=='P'&&c2=='O'||c=='c'&&c1=='p'&&c2=='o')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='C'&&c1!='P'&&c2!='O'||c!='c'&&c1!='p'&&c2!='o')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: ";
	cin>>c2;
	cout<<endl;
	i--;
	cout<<"S"<<c<<"O"<<"R"<<c1<<"I"<<c2<<"N"<<endl;
	cout<<endl;					
	if (c=='C'&&c1=='P'&&c2=='O'||c=='c'&&c1=='p'&&c2=='o')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='C'&&c1!='P'&&c2=='O'||c!='c'&&c1!='p'&&c2=='o'){
	cout<<"You Lose The Game!";
    }
	}	
	}else if(num==3){
	char c,c1,c2;
	int i=4;
	int count=0;
	cout<<"Level 3 is: "<<endl<<endl;
	cout<<"You Have to Guess This Animal Name: T*RT*I*E"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: "; 
	cin>>c2;
	cout<<"T"<<c<<"R"<<"T"<<c1<<"I"<<c2<<"E"<<endl;
	cout<<endl;
	if(c=='O'&&c1=='O'&&c2=='S'||c=='o'&&c1=='o'&&c2=='s')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='O'&&c1!='O'&&c2!='S'||c!='o'&&c1!='o'&&c2!='s')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: ";
	cin>>c2;
	cout<<endl;
	i--;
	cout<<"T"<<c<<"R"<<"T"<<c1<<"I"<<c2<<"E"<<endl;
	cout<<endl;					
	if (c=='O'&&c1=='O'&&c2=='S'||c=='o'&&c1=='o'&&c2=='s')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='O'&&c1!='O'&&c2=='S'||c!='o'&&c1!='o'&&c2=='s'){
	cout<<"You Lose The Game!";
    }
	}	
    }
	cout<<endl;	
	}else if(num==3){
	cout<<"You Selected Hard Mode."<<endl;	
	cout<<endl;
	cout<<"There are Three levels: "<<endl<<endl;
	cout<<"Which Level Do You Want To Play?"<<endl<<endl;
	cout<<"Press 1 For Level 1."<<endl;
	cout<<"Press 2 For Level 2."<<endl;
	cout<<"Press 3 For Level 3."<<endl<<endl;
	cin>>num;
	cout<<endl;
	if(num==1){
	char c,c1,c2,c3;
	int i=4;
	int count=0;
	cout<<"Level 1 is: "<<endl<<endl;
	cout<<"You Have to Guess This Name: AM*A* HA*DE*"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: "; 
	cin>>c2;
	cout<<endl;
	cout<<"Enter Your Fourth Word: "; 
	cin>>c3;
	cout<<endl;
	cout<<"A"<<"M"<<c<<"A"<<c1<<" "<<"H"<<"A"<<c2<<"D"<<"E"<<c3<<endl;
	cout<<endl;
	if(c=='M'&&c1=='R'&&c2=='I'&&c3=='R'||c=='m'&&c1=='r'&&c2=='i'&&c3=='r')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='M'&&c1!='R'&&c2!='I'&&c3!='R'||c!='m'&&c1!='r'&&c2!='i'&&c3!='r')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: ";
	cin>>c2;
	cout<<endl;
	cout<<"Enter Your Fourth Word: ";
	cin>>c3;
	cout<<endl;
	i--;
	cout<<"A"<<"M"<<c<<"A"<<c1<<" "<<"H"<<"A"<<c2<<"D"<<"E"<<c3<<endl;
	cout<<endl;					
	if (c=='M'&&c1=='R'&&c2=='I'&&c3=='R'||c=='m'&&c1=='r'&&c2=='i'&&c3=='r')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='M'&&c1!='R'&&c2=='I'&&c3=='R'||c!='m'&&c1!='r'&&c2=='i'&&c3=='r'){
	cout<<"You Lose The Game!";
    }
	}	
	cout<<endl;	
	}else if(num==2){
	char c,c1,c2,c3;
	int i=4;
	int count=0;
	cout<<"Level 2 is: "<<endl<<endl;   
	cout<<"You Have to Guess This Name: AL*AM* IQ*A*"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: "; 
	cin>>c2;
	cout<<endl;
	cout<<"Enter Your Fourth Word: "; 
	cin>>c3;
	cout<<endl;
	cout<<"A"<<"L"<<c<<"A"<<"M"<<c1<<" "<<"I"<<"Q"<<c2<<"A"<<c3<<endl;
	cout<<endl;
	if(c=='L'&&c1=='A'&&c2=='B'&&c3=='L'||c=='l'&&c1=='a'&&c2=='b'&&c3=='l')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='L'&&c1!='A'&&c2!='B'&&c3!='L'||c!='l'&&c1!='a'&&c2!='b'&&c3!='l')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: ";
	cin>>c2;
	cout<<endl;
	cout<<"Enter Your Fourth Word: ";
	cin>>c3;
	cout<<endl;
	i--;
	cout<<"A"<<"L"<<c<<"A"<<"M"<<c1<<" "<<"I"<<"Q"<<c2<<"A"<<c3<<endl;
	cout<<endl;					
	if (c=='L'&&c1=='A'&&c2=='B'&&c3=='L'||c=='l'&&c1=='a'&&c2=='b'&&c3=='l')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='L'&&c1!='A'&&c2=='B'&&c3=='L'||c!='l'&&c1!='a'&&c2=='b'&&c3=='l'){
	cout<<"You Lose The Game!";
    }
	}	
	cout<<endl;	
	}else if(num==3){
		char c,c1,c2,c3;
	int i=4;
	int count=0;
	cout<<"Level 3 is: "<<endl<<endl;   
	cout<<"You Have to Guess This Name: N*WA* SHA*I*"<<endl;
	cout<<"Your Total Attempts Are: 5"<<endl<<endl;
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: "; 
	cin>>c2;
	cout<<endl;
	cout<<"Enter Your Fourth Word: "; 
	cin>>c3;
	cout<<endl;
	cout<<"N"<<c<<"W"<<"A"<<c1<<" "<<"S"<<"H"<<"A"<<c2<<"I"<<c3<<endl;
	cout<<endl;
	if(c=='A'&&c1=='Z'&&c2=='R'&&c3=='F'||c=='a'&&c1=='z'&&c2=='r'&&c3=='f')
	{
	cout<<"You Won The Game!"<<endl;
	}
	else if(c!='A'&&c1!='Z'&&c2!='R'&&c3!='F'||c!='a'&&c1!='z'&&c2!='r'&&c3!='f')
	{					
	while(count<4)
	{
	cout<<"Sorry Your Guess is wrong  Please Try Again."<<endl;	
	cout<<"Now Your remaining Attempts are :"<<i<<endl<<endl;				
	cout<<"Enter your first Word: ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Your Second Word: "; 
	cin>>c1;
	cout<<endl;
	cout<<"Enter Your Third Word: ";
	cin>>c2;
	cout<<endl;
	cout<<"Enter Your Fourth Word: ";
	cin>>c3;
	cout<<endl;
	i--;
	cout<<"N"<<c<<"W"<<"A"<<c1<<" "<<"S"<<"H"<<"A"<<c2<<"I"<<c3<<endl;
	cout<<endl;					
	if (c=='A'&&c1=='Z'&&c2=='R'&&c3=='F'||c=='a'&&c1=='z'&&c2=='r'&&c3=='f')
	{
	cout<<"You Won The Game!"<<endl;
	break;
	}
	count++;
	}
	if(i==0&&count==0&&c!='A'&&c1!='Z'&&c2=='R'&&c3=='F'||c!='a'&&c1!='z'&&c2=='r'&&c3=='f'){
	cout<<"You Lose The Game!";
    }
	}	
	cout<<endl;
	}
	cout<<endl;
	}else{
	cout<<"There is  no Mode in this Number."<<endl;	
	}
	cout<<endl<<endl;
	cout<<"Do You Want To Play Again?"<<endl<<endl;
	cout<<"If Yes, Then Press 1"<<endl;
	cout<<"If No, Then Press 2"<<endl;
	cin>>num;
	cout<<endl<<endl;
	}
	while(num==1);
	{
	if (num==2)
	{
	cout<<"Thanks for playing."<<endl;
	}
	}
return 0;
}  