class Tech{
	private:
		int primary;
		int secondary1;
		int secondary2;
		int element;
		int level;
		char costType;
	public:
//GETTERS-----------------------------------
		int getPrimary(){return this.primary}
		int getSecondary1(){return this.secondary1;}
		int getSecondary2(){return this.secondary2;}
		int getElement(){return this.element;}
		int getLevel(){return this.level;}
		char getCostType(){return this.costType;}
//SETTERS------------------------------------
		void setPrimary(int value){this.primary=value;}
		void setSecondary1(int value){this.secondary1=value;}
		void setSecondary2(int value){this.secondary2=value;}
		void setElement(int value){this.element=value;}
		void setLevel(int value){this.level=level;}
		void setCostType(char value){this.costType=value;} 
		
};
class Weapon{
	private:
		int pbonus,mbonus;
		int ability1;
		int ability2;
		int element;
		int totalPoint;
		int level;
	public:
//GETTERS---------------------------------------
		int getPBonus(){return this.pbonus;}
		int getMBonus(){return this.mbonus;}
		int getAbility1(){return this.ability1;}
		int getAbility2(){return this.ability2;}
		int getElement(){return this.element;}
		int getTotalPoint(){return this.totalPoint;}
		int getLevel(){return this.level;}
//SETTERS--------------------------------------
		int setPBonus(int value){this.pbonus=value;}
		int setMBonus(int value){this.mbouns=value;}
		int setAbility1(int value){this.ability1=value;}
		int setAbility2(int value){this.ability2=value;}
		int setElement(int value){this.element=value;}			
		int setTotalPoint(int value){this.totalPoint=value;}
		int setLevel(int level){this.level=level;}
}; 
class Armor{

};
class Guard{

};
class Player{
	private:
		//base stats for players
		int str, mag, vit, spr, agi;
		//derived stats from above
		int hp,mp,ap,map,sd,md,acc,macc,evade,resist,crit,maxTech;
		//misc information that might be needed later
		int level,xp,money,tp;
	public:
//GETTERS---------------------------------------------------------
	//BASE STATS
		int getStr(){return this.str;}
		int getMag(){return this.mag;}
		int getVit(){return this.vit;}
		int getSpr(){return this.spr;}
		int getAgi(){return this.agi;}
	//DERIVED STATS
		int getHp(){return this.hp;}
		int getMp(){return this.mp;}
		int getAp(){return this.ap;}
		int getMap(){return this.map;}
		int getSd(){return this.md;}
		int getMd(){return this.md;}
		int getAcc(){return this.acc;}
		int getMacc(){return this.macc;}
		int getEvade(){return this.evade;}
		int getResist(){return this.resist;}
		int getCrit(){return this.crit;}
		int getMaxtech(){return this.maxTech;}
	//MISC STATS
		int getLevel(){return this.level;}
		int getXp(){return this.xp;};
		int getMoney(){return this.money;}
		int getTp(){return this.tp;}
//SETTERS
	//BASE STATS
};
