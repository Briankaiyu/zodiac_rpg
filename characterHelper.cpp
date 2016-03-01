#include <iostream>

using namespace std;
int main()
{
	//these variables represent the basic stats available in Zodiac
	int str, mag, vit, spr, agi;
	int xp=1;
	//the following variables represent the derived states in Zodiac
	int hp, mp, ap, map, sd, md, acc, macc, evade, resist, crit,speed, maxTech;


	cout<<"Enter character's STRENGTH: "<<endl;
	cin>>str;
	cout<<"Emter character's MAGIC: "<<endl;
	cin>>mag;
	cout<<"Enter character's VITALITY: "<<endl;
	cin>>vit;
	cout<<"Enter character's SPIRIT: "<<endl;
	cin>>spr;
	cout<<"Enter character's AGILITY: "<<endl;
	cin>>agi;
	cout<<"If greater than 1, enter character's XP level: "<<endl;
	cin>>xp;
	//formulas for calculation
	hp=75 + (5 * vit) + (4 * xp);
	mp=5 + spr + (0.5 * xp);
	ap=str;
	map=mag;
	sd=1+(str/100);
	md=1+(mag/100);
	acc=5+(agi/5);
	macc=5+(mag/5);
	evade=25+(agi/5);
	resist=25+(vit/10)+(spr/10);
	crit=98-(agi/15);
	speed=10+ (agi/15) + (xp/10);
	maxTech=5+(mag/2);

	cout<<"DERIVED STATS--------------------------"<<endl;
	cout<<"HP= "<<hp<<endl;
	cout<<"MP= "<<mp<<endl;
	cout<<"ATTACK POWER= "<<ap<<endl;
	cout<<"MAGIC ATTACK POWER= "<<map<<endl;
	cout<<"STRENGTH DICE= "<<sd<<endl;
	cout<<"MAGIC DICE= "<<md<<endl;
	cout<<"ACCURACY= "<<acc<<endl;
	cout<<"MAGIC ACCURACY= "<<macc<<endl;
	cout<<"EVADE= "<<evade<<endl;
	cout<<"RESIST= "<<resist<<endl;
	cout<<"CRITICAL= "<<crit<<endl;
	cout<<"SPEED= "<<speed<<endl;
	cout<<"MAX TECH LEVEL= "<<maxTech<<endl;
	


	return 0;
}
