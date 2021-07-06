#include<iostream>
using namespace std;

int gk();
int geo();
int sci();
int mus();
int hist();
int spo();
int tvf();

int game()
{
    int cat;
    int total;
    cout<<"Select category index\n";
    cout<<"1.General Knowledge\n2.Geography\n3.Science\n4.Music\n5.History\n6.Sport\n7.TV and Films\n";
    cin>>cat;
switch(cat)
    {

case 1:
    total = gk();
        cout<<"Your Score is "<<total<<endl;
        break;
case 2:
        total = geo();
        cout<<"Your Score is "<<total<<endl;
        break;

case 3:
        total = sci();
        cout<<"Your Score is "<<total<<endl;
        break;
   case 4:
        total = mus();
        cout<<"Your Score is "<<total<<endl;
        break;
   case 5:
        total = hist();
        cout<<"Your Score is "<<total<<endl;
        break;
 case 6:
        total = spo();
        cout<<"Your Score is "<<total<<endl;
        break;
   case 7:
        total = tvf();
        cout<<"Your Score is "<<total<<endl;
        break;
   default:
        cout<<"Please select correct choice :(";
        break;
}
    return total;
}

int gk()
{
    int score=0;
    int ans;
    cout<<"1)For which of the following disciplines is Nobel Prize awarded?\n";
cout<<"1.Physics and Chemistry\n";
cout<<"2.Physiology or Medicine\n";
cout<<"3.Literature, Peace and Economics\n";
cout<<"4.All of the above\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}
else if(ans>=5){cout<<"This is not a option\n";}
else{cout<<"Wrong Answer\n";}

cout<<"2)Grand Central Terminal, Park Avenue, New York is the world's \n";
cout<<"1.Largest railway station\n";
cout<<"2.Highest railway station\n";
cout<<"3.Longest railway station \n";
cout<<"4.None of the above\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}

cout<<"3)Each year World Red Cross and Red Crescent Day is celebrated on\n";
cout<<"1.May 8\n";
cout<<"2.May 18\n";
cout<<"3.June 8\n";
cout<<"4.June 18\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"4)Famous sculptures depicting art of love built some time in 950 AD - 1050 AD are\n";
cout<<"1.Khajuraho temples\n";
cout<<"2.Jama Masjid\n";
cout<<"3.Sun Temple\n";
cout<<"4.Mahabalipuram temples\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"5)Guwahati High Court is the judicature of\n";
cout<<"1.Nagaland\n";
cout<<"2.Arunachal Pradesh\n";
cout<<"3.Assam\n";
cout<<"4.All of the above\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"6)During eleventh Antarctic Expedition in Nov. 1991/March 1992 ____ was installed.\n";
cout<<"1.SODAR (SOnic Detection And Ranging)\n";
cout<<"2.Second Permanent Station 'Maitree'\n";
cout<<"3.First permanent station 'Dakshin Gangotri'\n";
cout<<"4.None of the above\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"7)Fire temple is the place of worship of which of the following religion?\n";
cout<<"1.Taoism\n";
cout<<"2.Judaism\n";
cout<<"3.Zoroastrianism (Parsi Religion)\n";
cout<<"4.Shintoism\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"8)Georgia, Uzbekistan and Turkmenistan became the members of UNO in\n";
cout<<"1.1991\n";
cout<<"2.1992\n";
cout<<"3.1993\n";
cout<<"4.1994\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"9)Guru Gobind Singh was\n";
cout<<"1.the 10th Guru of the Sikhs\n";
cout<<"2.founder of Khalsa, the inner council of the Sikhs in 1699\n";
cout<<"3.author of Dasam Granth\n";
cout<<"4.All the above\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"10)Euclid was\n";
cout<<"1.Greek mathematician\n";
cout<<"2.Contributor to the use of deductive principles of logic as the basis of geometry\n";
cout<<"3.Propounded the geometrical theorems\n";
cout<<"4.All of the above\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
    return score;
}

int geo()
{
    int score=0;
    int ans;
    cout<<"1)Eritrea, which became the 182nd memeber of the UN in 1993, is in the continent of \n";
cout<<"1.Asia\n";
cout<<"2.Africa\n";
cout<<"3.Europe\n";
cout<<"4.Australia\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}

cout<<"2)Garampani sanctuary is located at\n";
cout<<"1.Junagarh, Gujarat\n";
cout<<"2.Diphu, Assam\n";
cout<<"3.Kohima, Nagaland\n";
cout<<"4.Gangtok, Sikkim\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"3)Which of the following is India’s largest salt producing state?\n";
cout<<"1.Rajasthan\n";
cout<<"2.Gujarat\n";
cout<<"3.Odisha\n";
cout<<"4.Tamil Nadu\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"4)“Satmala Hills” are located in which among the following states?\n";
cout<<"1.Gujarat\n";
cout<<"2.UP\n";
cout<<"3.Maharashtra\n";
cout<<"4.Rajasthan\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"5)In how many zones Indian Railway has been divided?\n";
cout<<"1.14\n";
cout<<"2.18\n";
cout<<"3.16\n";
cout<<"4.20\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"6)Which among the following was the first port in India to be a Public Company?\n";
cout<<"1.Ennore Port\n";
cout<<"2.Tuticorin Port\n";
cout<<"3.New Mangalore Port\n";
cout<<"4.Mormugao Port\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"7)Which of the following states has largest coastline?\n";
cout<<"1.Tamilnadu\n";
cout<<"2.Andhra Pradesh\n";
cout<<"3.Maharashtra\n";
cout<<"4.Gujarat\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"8)Central Institute of Psychiatry, India’s premier Central Govt. Institute of mental health is located at ?\n";
cout<<"1.Mumbai\n";
cout<<"2.Pune\n";
cout<<"3.Ranchi\n";
cout<<"4.Chennai\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"9)A Pincode that begins with 66, would refer to which among the following states?\n";
cout<<"1.Karnataka\n";
cout<<"2.Kerala\n";
cout<<"3.Andhra Pradesh\n";
cout<<"4.Tamil Nadu\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"10)In which among the following Central Asian Countries, India has an airbase?\n";
cout<<"1.Tajikistan\n";
cout<<"2.Kazakhstan\n";
cout<<"3.Turkmenistan\n";
cout<<"4.Kyrgyzstan\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
    return score;
}

int sci()
{
    int score=0;
    int ans;
    cout<<"1)Entomology is the science that studies \n";
cout<<"1.Behavior of human beings\n";
cout<<"2.Insects\n";
cout<<"3.The Origin and history of technical and scientific terms\n";
cout<<"4.The formation of rocks\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"2)First human heart transplant operation conducted by Dr. Christiaan Barnard on Louis Washkansky, was conducted in\n";
cout<<"1.1967\n";
cout<<"2.1968\n";
cout<<"3.1958\n";
cout<<"4.1922\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"3)Exposure to sunlight helps a person improve his health because\n";
cout<<"1.the infrared light kills bacteria in the body\n";
cout<<"2.resistance power increases\n";
cout<<"3.the pigment cells in the skin get stimulated and produce a healthy tan\n";
cout<<"4.the ultraviolet rays convert skin oil into Vitamin D\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"4)Gravity setting chambers are used in industries to remove\n";
cout<<"1.SOx\n";
cout<<"2.NOx\n";
cout<<"3.suspended particulate matter\n";
cout<<"4.CO\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"5)Friction can be reduced by changing from\n";
cout<<"1.sliding to rolling\n";
cout<<"2.rolling to sliding\n";
cout<<"3.potential energy to kinetic energy\n";
cout<<"4.dynamic to static\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}

cout<<"6)Hermann Scheer (Germany) received right Livelihood Award in 1999 for\n";
cout<<"1.his indefatigable work for thepromotion of solar energy worldwide\n";
cout<<"2.his long standing efforts to end the impunity of dictators\n";
cout<<"3.showing that organic agriculture is a key to both environmental sustainability and food security\n";
cout<<"4.None of the above\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"7)The ozone layer restricts\n";
cout<<"1.Visible light\n";
cout<<"2.Infrared radiation\n";
cout<<"3.X-rays and gamma rays\n";
cout<<"4.Ultraviolet radiation\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"8)Eugenics is the study of\n";
cout<<"1.altering human beings by changing their genetic components\n";
cout<<"2.people of European origin\n";
cout<<"3.different races of mankind\n";
cout<<"4.genetic of plants\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"9)Ecology deals with\n";
cout<<"1.Birds\n";
cout<<"2.Cell formation\n";
cout<<"3.Relation between organisms and their environment\n";
cout<<"4.Tissues\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"10)Filaria is caused by\n";
cout<<"1.Bacteria\n";
cout<<"2.Mosquito\n";
cout<<"3.Protozoa\n";
cout<<"4.Virus\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
    return score;
}

int mus()
{
    int score=0;
    int ans;
    cout<<"1)What is the basis of classification of Swaras in tempered scale?\n";
cout<<"1.Major tone\n";
cout<<"2.Minor tone\n";
cout<<"3.Semi tone\n";
cout<<"4.Half tone\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"2)Which style of singing is adorned with PARANAS?\n";
cout<<"1.Dhrupad\n";
cout<<"2.Khayal\n";
cout<<"3.Thumari\n";
cout<<"4.Tappa\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"3)Who was not appointed as music teacher in the Tagore family?\n";
cout<<"1.Srikantha Singh\n";
cout<<"2.Vishnu Chakravarti\n";
cout<<"3.Jadu Bhatta\n";
cout<<"4.Ramshankar Bhattacharya\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"4)Which percussion instrument is being used for accompaniment with Rabindra Sangeet?\n";
cout<<"1.Sarangi\n";
cout<<"2.Sri Khol\n";
cout<<"3.Esraj\n";
cout<<"4.Mandira\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"5)Bilawal as Shuddha Swar Saptak was first recognized in\n";
cout<<"1.Nagmate Aasfi\n";
cout<<"2.Chaturdandi Prakashika\n";
cout<<"3.Sangeet Sar\n";
cout<<"4.Sangeet Kalpdrum\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"6)The music University of Madhya Pradesh is\n";
cout<<"1.Indira Kala Sangeet Vishwavidyalaya\n";
cout<<"2.Nathibai Damodar Thakarsi Vishwavidyalaya\n";
cout<<"3.Bhartiya Vidyapeeth\n";
cout<<"4.Raja Man Singh Tomar Sangeet Avam Kala Vishwavidyalaya\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"7)Which National organization organizes National Youth Festival?\n";
cout<<"1.Lalit Kala Academy\n";
cout<<"2.Sangeet Natak Academy\n";
cout<<"3.Department of Culture\n";
cout<<"4.Association of Indian Universities\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"8)“Ma Ni Dha Ni S” is the phrase of which ‘Raga’?\n";
cout<<"1.Miyan Ki Malhar\n";
cout<<"2.Bahar\n";
cout<<"3.Desh\n";
cout<<"4.Bageshri\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"9)‘Upaj Anga’ is meant for\n";
cout<<"1.Sargam\n";
cout<<"2.Tan\n";
cout<<"3.Meend\n";
cout<<"4.Layakari\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"10)Hira Bai Barodekar has represented which ‘Gharana’?\n";
cout<<"1.Jaipur\n";
cout<<"2.Delhi\n";
cout<<"3.Kirana\n";
cout<<"4.Rampur\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}

    return score;
}


int hist()
{
    int score=0;
    int ans;
    cout<<"1)Hitler party which came into power in 1933 is known as\n";
cout<<"1.Labour Party\n";
cout<<"2.Nazi Party\n";
cout<<"3.Ku-Klux-Klan\n";
cout<<"4.Democratic Party\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"2)First Afghan War took place in\n";
cout<<"1.1839\n";
cout<<"2.1843\n";
cout<<"3.1833\n";
cout<<"4.1848\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"3)First China War was fought between\n";
cout<<"1.China and Britain\n";
cout<<"2.China and France\n";
cout<<"3.China and Egypt\n";
cout<<"4.China and Greek\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"4)Germany signed the Armistice Treaty on ____ and World War I ended\n";
cout<<"1.January 19, 1918\n";
cout<<"2.May 30, 1918\n";
cout<<"3.November 11, 1918\n";
cout<<"4.February 15, 1918\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"5)During World War II, when did Germany attack France?\n";
cout<<"1.1940\n";
cout<<"2.1941\n";
cout<<"3.1942\n";
cout<<"4.1943\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"6)During whose reign was the Fourth Buddhist Council held?\n";
cout<<"1.Ashoka\n";
cout<<"2.Kalasoka\n";
cout<<"3.Ajatsatru\n";
cout<<"4.Kanishka\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"7)According to some Jain traditions, who was son-in-law and first disciple of Tirthankara Mahavira?\n";
cout<<"1.Jamali\n";
cout<<"2.Jamvant\n";
cout<<"3.Jamval\n";
cout<<"4.Can't say\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"8)Tirthankara Parswanath’s idol is recognized by which symbol?\n";
cout<<"1.Lion\n";
cout<<"2.Bull\n";
cout<<"3.Tortoise\n";
cout<<"4.Serpent\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"9)Who among the following wrote ‘Nagananda’?\n";
cout<<"1.Banabhatta\n";
cout<<"2.Simhanada\n";
cout<<"3.Pulakesin II\n";
cout<<"4.Harshavardhana\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"10)Which of the following was the capital of Chola dynasty?\n";
cout<<"1.Madurai\n";
cout<<"2.Karur\n";
cout<<"3.Uraiyaur\n";
cout<<"4.Kaveripattnam\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
    return score;
}

int spo()
{
    int score=0;
    int ans;
cout<<"1)Epsom (England) is the place associated with\n";
cout<<"1.Horse racing\n";
cout<<"2.Polo\n";
cout<<"3.Shooting\n";
cout<<"4.Snooker\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"2)Golf player Vijay Singh belongs to which country?\n";
cout<<"1.USA\n";
cout<<"2.Fiji\n";
cout<<"3.India\n";
cout<<"4.UK\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"3)For the Olympics and World Tournaments, the dimensions of basketball court are\n";
cout<<"1.26m x 14m\n";
cout<<"2.28m x 15m\n";
cout<<"3.27m x 16m\n";
cout<<"4.28m x 16m\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"4)Federation Cup, World Cup, Allywyn International Trophy and Challenge Cup are awarded to winners of\n";
cout<<"1.Tennis\n";
cout<<"2.Volleyball\n";
cout<<"3.Basketball\n";
cout<<"4.Cricket\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"5)“Prince of Wales Cup ” is related to which of the following sports?\n";
cout<<"1.Boxinng\n";
cout<<"2.Golf\n";
cout<<"3.Hockey\n";
cout<<"4.Tennis\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"6)Which among the following is not given as “Life Time Achievement” Award in India?\n";
cout<<"1.Dada Saheb Phalke Award\n";
cout<<"2.Dhyanchand Award\n";
cout<<"3.Tenzing Norgay National Adventure Awards\n";
cout<<"4.Dronacharya Award\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"7)Which of the following stadiums in India was the first to Host a Test match in Independent India?\n";
cout<<"1.Gymkhana Ground, Mumbai\n";
cout<<"2.Feroz Shah Kotla, Delhi\n";
cout<<"3.Eden Gardens, Kolkata\n";
cout<<"4.M. A. Chidambaram Stadium, Chennai\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"8)When was the name of National Boxing Association changed to World Boxing Association?\n";
cout<<"1.1958\n";
cout<<"2.1962\n";
cout<<"3.1969\n";
cout<<"4.1970\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"9)Who was the fastest female athlete in the Rio Olympics 2016 in 400 m relay event?\n";
cout<<"1.Tiana Bartoletta\n";
cout<<"2.Allyson Felix\n";
cout<<"3.Bianca Knight\n";
cout<<"4.Carmelita Jeter\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"10)Who was the first marketing director of the International Olympic Committee?\n";
cout<<"1.Michael Payne\n";
cout<<"2.Juan Antonio\n";
cout<<"3.Richard Pound\n";
cout<<"4.Avery Brundage\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
    return score;
}

int tvf()
{
    int score=0;
    int ans;
    cout<<"1)FFC stands for\n";
cout<<"1.Foreign Finance Corporation\n";
cout<<"2.Film Finance Corporation\n";
cout<<"3.Federation of Football Council\n";
cout<<"4.None of the above\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"2)Film and TV institute of India is located at\n";
cout<<"1.Pune(Maharashtra)\n";
cout<<"2.Rajkot(Gujarat)\n";
cout<<"3.Pimpri(Maharashtra)\n";
cout<<"4.Perambur(Tamilnadu)\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"3)What movie does NOT have Brad Pitt in it?\n";
cout<<"1.Oceans 13\n";
cout<<"2.300\n";
cout<<"3.Burn After Reading\n";
cout<<"4.Troy\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"4)Which book is NOT a title of a book in the Twilight series?\n";
cout<<"1.New Moon\n";
cout<<"2.Eclipse\n";
cout<<"3.Midnight\n";
cout<<"4.Breaking Dawn\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"5)Which one is the highest-grossing film ever?\n";
cout<<"1.Titanic\n";
cout<<"2.Dark Knight\n";
cout<<"3.Lord of the Rings: The Fellow Ship of the Ring\n";
cout<<"4.Harry Potter and the Sorcerers Stone\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"6)How many seasons of the TV show 'FRIENDS' were there?\n";
cout<<"1.9\n";
cout<<"2.10\n";
cout<<"3.11\n";
cout<<"4.13\n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"7)Which Bollywood actor was recently named in the WEF’s Young Global Leaders (YGLs) list?\n";
cout<<"1.Priyanka Chopra\n";
cout<<"2.Vidya Balan\n";
cout<<"3.Deepika Padukone\n";
cout<<"4.Nawazuddin Siddique\n";
cin>>ans;
if(ans==3)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"8)Which Bollywood personality has launched an online platform called ‘Pravasi Rojgar’ to help migrants find job opportunities?\n";
cout<<"1.Nana Patekar\n";
cout<<"2.Nawazuddin Siddiqui\n";
cout<<"3.Amitabh Bachchan\n";
cout<<"4.Sonu Sood\n";
cin>>ans;
if(ans==4)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"9)The Versatile Bollywood actor Irrfan Khan, who recently passed away, had won National award for which movie?\n";
cout<<"1.Paan Singh Tomar\n";
cout<<"2.Lunch Box\n";
cout<<"3.Life of Pi\n";
cout<<"4.Haidar\n";
cin>>ans;
if(ans==1)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
cout<<"10)As of 2020, which is the only Bollywood movie to win 13 Filmfare Awards?\n";
cout<<"1.Uri: The Surgical Strike\n";
cout<<"2.Gully Boy\n";
cout<<"3.Saand Ki Aankh\n";
cout<<"4Article 15n";
cin>>ans;
if(ans==2)
{
    cout<<"Correct Answer \n";
    score++;
}else if(ans>=5){cout<<"This is not a option\n";}else{cout<<"Wrong Answer\n";}
    return score;
}



int main()
{

    char choice;
    char st;
    cout<<"---------------------------------------------------------------------------Welcome to QUIZY---------------------------------------------------------------------------\n";
    cout<<"Start????(y/no) ";
    cin>>st;
    if(st=='y')
    {
     do{
       game();
cout<<"You want to play(y/n) ";
    cin>>choice;
}while(choice=='y');
    cout<<"\n---------------------------------------------------------------------------Come again :) !!!!---------------------------------------------------------------------------";
    }
    else
        {
    cout<<"\n---------------------------------------------------------------------------Come again :) !!!!---------------------------------------------------------------------------";
    }
    return 0;
}
