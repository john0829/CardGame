class MonsterCard: public Card{
    int blood;
    int attack;
    public:
        MonsterCard(fstream &file){
            file >> name >> blood >> attack;
            cout << name << endl;
            cout << blood << endl;
            cout << attack << endl;
        }
};