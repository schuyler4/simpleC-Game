#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;


void fight(int& attacer,int& defender) {
    defender -= attacer;
}

int main() {
    srand(time(0));
    cout<<"set the human army size"<<endl;
    string input1;
    getline(cin, input1);
    
    cout<<"set the monster army size"<<endl;
    string input2;
    getline(cin, input2);
    
    
    int humanNumbers = stod(input1);
    int& humanNumbersRef = humanNumbers;
    
    int humanLife = 10;
    int& humanLifeRef = humanLife;
    
    int monsterNumbers = stod(input2);
    int& monsterNumbersRef = monsterNumbers;
    
    int monsterLife = 10;
    int& monsterLifeRef = monsterLife;
    
    bool humanAlive = true;
    bool& humanAliveRef = humanAlive;
    
    bool monsterAlive = true;
    bool& monsterAliveRef = monsterAlive;
    do{
        
        
        int monsterDamage =  (rand() % 10) + 1;
        int& monsterDamageRef = monsterDamage;
        
        int humanDamage =  (rand() % 10) + 1;
        int& humanDamageRef = humanDamage;
        
        fight(humanDamageRef, monsterLifeRef);
        fight(monsterDamageRef, humanLifeRef);
        if(monsterLife <= 0) {
            monsterLifeRef = 10;
            monsterNumbersRef -= 1;
            cout<<"the monster army has "<<monsterNumbers<<" monsters left"<<endl;
        }
        if(humanLife <= 0) {
            humanAliveRef = 10;
            humanNumbersRef -= 1;
            cout<<"the human army has "<<humanNumbers<<" people left"<<endl;
        }
        if(humanNumbers <= 0) {
            humanAliveRef = false;
            cout<<"the monsters one";
        }
        if(monsterNumbers <= 0) {
            monsterAliveRef = false;
            cout<<"the humans one";
        }
    }while(monsterAlive == true && humanAlive == true);
    
    return 0;
}