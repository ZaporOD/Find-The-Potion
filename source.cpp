#include <iostream>
using namespace std;

//characters
string p;
string u = "Unknown: ";
string s = "Sheila: ";
string st = "Storyteller: ";
//characters

//locations
string loc;
string forest = "left";
string plains = "right";
string village = "backward";
string mansion = "forward";
//locations

//functions declarations
void forestLoc();
void plainsLoc();
void villageLoc();
void mansionLoc();
void movement();
//functions declarations

//continue dialogue function (conDiaF)
void conDiaF()
{
    string conDia;
    string conDiaC = "e";
    cin >> conDia;
    while (conDia != conDiaC)
    {
        cout << "Huh? I don't understand. Please type again: ";
        cin >> conDia;
    }
}

//forest location (forestLoc)
void forestLoc()
{
    cout << "The forest, here we come." << endl;
    conDiaF();
    cout << st << "So " << p << " and Sheila walked into the forest until they found some traces of goblin footprints." << endl;
    conDiaF();
    cout << p << ": Hey! You see that? I'm pretty sure those are goblin footprints." << endl;
    conDiaF();
    cout << s << "Yeah! I was going to mention that to you." << endl;
    conDiaF();
    cout << p << ": Let's follow them." << endl;
    conDiaF();
    cout << st << "So " << p << " and Sheila followed them and it led them to a small goblin hut, but it was empty. There were subtle evidence that a goblin was here not that long ago." << endl;
    conDiaF();
    cout << s << "Aw, man. I think the goblin knew we were coming and left at the right before we arrived. Where do you want to go next? To the right to the plains, forward to the Wizard's Mansion, or back to the village?" << endl;
    movement();
}

//plains location (plainsLoc)
void plainsLoc()
{
    cout << "Plains, huh? Sure, let's go." << endl;
}

//village location (villageLoc)
void villageLoc()
{
    cout << "Let's go to the village. Why not? " << endl;
}

//mansion location (mansionLoc)
void mansionLoc()
{
    cout << "You're going to see the wizard?" << endl;
    conDiaF();
}

//player movement to somewhere 2 (movement2)
void movement()
{
    cin >> loc;
    if (loc == forest)
    {
        forestLoc();
    }
    else if (loc == plains)
    {
        plainsLoc();
    }
    else if (loc == village)
    {
        villageLoc();
    }
    else if (loc == mansion)
    {
        mansionLoc();
    }
    else
    {
        cout << "Huh?" << endl;
    }
}

//main code
int main()
{
    string playGame;
    cout << "Welcome to the game! Type 'play' to play: ";
    string playG = "play";
    cin >> playGame;
    while (playGame != playG)
    {
        cout << "Huh? I don't understand. Please type again: ";
        cin >> playGame;
    }

    cout << "Game started." << endl;
    cout << u << "Hey, hey! You okay? I was walking by and I saw you laying here. You looked like you were dead! What's your name? (Type in your name.) ";
    cin >> p;
    cout << u << "Hello, " << p << ". Name's Sheila. Nice to meet you. What are you doing here? (Enter 'e' to continue, you'll do this every time.)" << endl;;
    conDiaF();
    cout << p << ": I was walking down the path but then some goblins attacked me out of nowhere and knocked me out!" << endl;
    conDiaF();
    cout << s << "That stinks, but where were you going to?" << endl;
    conDiaF();
    cout << p << ": I was going to the Wizard's Mansion to deliver something to him. I think it was some potion he needs to create a spell." << endl;
    conDiaF();
    cout << s << "Can I see?" << endl;
    conDiaF();
    cout << p << ": Sure, one second, let me find it..... I can't find it. I think the goblins stole it. Oh no, I'll be in trouble." << endl;
    conDiaF();
    cout << s << "I can help you find it, I have nothing to do anyway." << endl;
    conDiaF();
    cout << p << ": Are you sure? I can probably do it by myself." << endl;
    conDiaF();
    cout << s << "I'm sure! Why not. where do you want to go first. The forest to out left, the plains to our right, forward to the Wizard's Mansion or go back to the village. (Type 'left' or 'right' or 'backward' or 'forward' to go to the location.)";
    
    movement();

    return 0;
}
