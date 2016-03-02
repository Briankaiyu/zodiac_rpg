#include <iostream>

using namespace std;
int main()
{
	//these variables represent the basic stats available in Zodiac
	int str, mag, vit, spr, agi;
	int level=1;
	//the following variables represent the derived states in Zodiac
	int hp, mp, ap, map, sd, md, acc, macc, evade, resist, crit,speed, maxTech;


	cout<<"Enter monster's STRENGTH: "<<endl;
	cin>>str;
	cout<<"Emter monster's MAGIC: "<<endl;
	cin>>mag;
	cout<<"Enter monster's VITALITY: "<<endl;
	cin>>vit;
	cout<<"Enter monster's SPIRIT: "<<endl;
	cin>>spr;
	cout<<"Enter monster's AGILITY: "<<endl;
	cin>>agi;
	cout<<"Enter monster's LEVEL "<<endl;
	cin>>level;
	//formulas for calculation
	hp=30 + (20 * vit) +(level*10);
	mp=5 + (spr + level)/2;
	ap=str*2;
	map=mag*2;
	sd=1+(str/100);
	md=1+(mag/100);
	acc=5+(agi/5);
	macc=5+(mag/5);
	evade=25+(agi/5);
	resist=25+(vit/10)+(spr/10);
	crit=98-(agi/15);
	speed=10+ (agi/15) + (level/10);
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
