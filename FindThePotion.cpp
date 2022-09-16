#include <iostream>
#include <stdlib.h>

using namespace std;

//characters
string p;
string u = "Unknown: ";
string s = "Sheila: ";
string st = "Storyteller: ";
string w = "Wizard: ";
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
void movementF();
void movementP();
void movementV();
void conDiaF();
void gameStart();
void playAgain();
void mansionVS();
void mansionVG();
int main();
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

void playAgain()
{
    string pAoN;
    string pYes = "y";
    string pNo = "n";

    cin >> pAoN;
    do
    {
        if (pAoN == pYes)
        {
            gameStart();
        }
        else if (pAoN == pNo)
        {
            cout << "Thank you for playing 'Find The Potion'." << endl;
            exit(0);
        }
        else
        {
            cout << "Huh? I don't understand. Please type again: ";
            cin >> pAoN;
        }
    } while (true);
    
}
//forest location (forestLoc)
void forestLoc()
{
    cout << p << ": We're going to the forest." << endl;
    conDiaF();
    cout << st << "So " << p << " and Sheila walked into the forest until they found some traces of goblin footprints." << endl;
    conDiaF();
    cout << p << ": Hey! You see that? I'm pretty sure those are goblin footprints." << endl;
    conDiaF();
    cout << s << "Yeah! I was going to mention that to you." << endl;
    conDiaF();
    cout << p << ": Let's follow them." << endl;
    conDiaF();
    cout << st << "So " << p << " and Sheila followed them and it led them to a small goblin hut, but it was empty. There were subtle evidences that a goblin was here not that long ago." << endl;
    conDiaF();
    cout << st << "But right before they left, they found a note. It said:" << endl;
    conDiaF();
    cout << "Dear Soldier -" << endl;
    cout << "We need to attack the village. They have been a nuisance in our line of" << endl;
    cout << "work and I order you to kill them. Only attack the east side of the" << endl;
    cout << "village. That'll be enough. They'll learn." << endl;
    cout << "- General Banobi" << endl;
    conDiaF();
    cout << s << "This is an plan for attacking our village! What are you going to do? (Type 'right' to go to the plains, type 'forward' to go to the Wizard's Mansion (going there will end the game), and type 'backward' to go to the village.): ";
    movementF();
}

//plains location (plainsLoc)
void plainsLoc()
{
    cout << p << ": Let's go to the plains." << endl;
    conDiaF();
    cout << st << "So " << p << " and Sheila walked across the plains for some time and found abosolutely nothing." << endl;
    conDiaF();
    cout << p << ": This is starting to become pointless. Let's go somewhere else." << endl;
    conDiaF();
    cout << s << "I agree. Let's go. (Type 'left' to go to the forest, type 'forward' to go to the Wizard's Mansion (going there will end the game), and type 'backward' to go to the village.): ";
    
    movementP();
}

//village location (villageLoc)
void villageLoc()
{
    cout << p << ": Let's go back to the village." << endl;
    conDiaF();
    cout << st << p << " and Sheila walked down the path to the village to find a massive amount of smoke arising from inside the village and sound of screaming humans." << endl;
    conDiaF();
    cout << s << "Oh no! We got to go inside and help the humans quick! Which way should we go? West or east? (Type 'west' to go west and type 'east' to go east.): ";
    string villageDir; //village direction (villageDir)
    string westV = "west"; //west village (westV)
    string eastV = "east"; //east village (eastV)

    cin >> villageDir;

    do
    {
        if (villageDir == westV)
        {
            cout << p << ": We should go to the west side." << endl;
            conDiaF();
            cout << s << "Yeah. Let's go quick!" << endl;
            conDiaF();
            cout << st << p << " and Sheila quickly ran to the west side of the village to find nothing but unburnt houses and safe humans." << endl;
            conDiaF();
            cout << p << ": This side of the village is safe. Let's go to the east." << endl;
            conDiaF();
            cout << st << "They continued to run to the other side of the village to find nothing but an empty vial. There were burnt houses with dead humans inside and footprints of a goblin running away." << endl;
            conDiaF();
            cout << p << ": We didn't arrive fast enough. Only if we would've ran to the east first, we would've have a chance of saving them." << endl;
            conDiaF();
            cout << s << "This is extremely sad news. We should inform the wizard. (Type 'left' to go to the forest, type 'forward' to go to the Wizard's Mansion (going there will end the game), and type 'right' to go to the plains.): " << endl;

            string mansionVSS = "forward"; //going to mansion from village with sad news string (mansionVSS)

            do
            {
                cin >> loc;
                if (loc == forest)
                {
                    forestLoc();
                }
                else if (loc == forest)
                {
                    cout << "You're already there. Please type again: ";
                    cin >> loc;
                }
                else if (loc == village)
                {
                    villageLoc();
                }
                else if (loc == mansionVSS)
                {
                    mansionVS();
                }
                else
                {
                    cout << "Huh? I don't understand. Please type again: ";
                    cin >> loc;
                }
            } while (true);
        }
        else if (villageDir == eastV)
        {
            cout << p << ": Let's go to the east. Quick!" << endl;
            conDiaF();
            cout << st << p << " and Sheila ran to the east side of the village to find half-burnt houses with injured humans inside." << endl;
            conDiaF();
            cout << s << "There's the goblin! Get the vial from him." << endl;
            conDiaF();
            cout << st << p << " ran to the goblin but then the goblin ran away and accidentally dropped the vial on the ground." << endl;
            conDiaF();
            cout << p << ": He dropped it! I now have it. Thank you for taking the time to help me with this, Sheila. I will now go to deliver this to the wizard even though the potion has been half used to burn these houses." << endl;
            conDiaF();
            cout << s << "No problem. I'll try to help the injured here. You go and deliver it. (Type 'left' to go to the forest, type 'right' to go to the plains, and type 'forward' to go to the Wizard's Mansion.): ";

            do
            {
                string mansionVGS = "forward"; //going to mansion from village with good news string (mansionVGS)

                cin >> loc;
                if (loc == forest)
                {
                    forestLoc();
                }
                else if (loc == forest)
                {
                    cout << "You're already there. Please type again: ";
                    cin >> loc;
                }
                else if (loc == village)
                {
                    villageLoc();
                }
                else if (loc == mansionVGS)
                {
                    mansionVG();
                }
                else
                {
                    cout << "Huh? I don't understand. Please type again: ";
                    cin >> loc;
                }
            } while (true);
        }
        else
        {
            cout << "Huh? I don't understand. Please type again: ";
            cin >> villageDir;
        }
    } while (true);
}


//mansion location (mansionLoc)
void mansionLoc()
{
    string yOn; //yes or no (yOn)
    string no = "no";
    string yes = "yes";
    cout << "You're going to see the wizard now? Are you sure? (The game will end.) (Type 'yes' or 'no'.): ";
    cin >> yOn;
    do
    {
        if (yOn == yes)
        {
            break;
        }
        else if (yOn == no)
        {
            cout << "Type again where you want to go: ";
            movement();
        }
        else
        {
            cout << "Huh? I don't understand. Please type again: ";
            cin >> yOn;
        }
    } while (true);

    cout << st << p << " and Sheila walked up to the front steps of the mansion and knocked on the door. The wizard opened the door expecting the potion." << endl;
    conDiaF();
    cout << w << "You got my vial of potion I ordered?" << endl;
    conDiaF();
    cout << p << ": I regret to tell you that I have lost the vial. While I was walking up the trail, a goblin attacked me and stole it. I am extremely sorry, sir." << endl;
    conDiaF();
    cout << w << "Are you being serious right now? That was an important item! Go away from my mansion." << endl;
    conDiaF();
    cout << st << "The story ends here. You didn't succeed to get the vial and you dissapointed the Wizard. To play again, type 'y', if not, type 'n'." << endl;

    playAgain();
}

void mansionVS()
{
    cout << st << p << " and Sheila walked down the path to the mansion with their heads down. Not talking. Soon enough, they arrived at the front steps of the mansion. " << p << " knocked on the door and the wizard opened the door." << endl;
    conDiaF();
    cout << w << "You got my vial of potion I ordered?" << endl;
    conDiaF();
    cout << p << ": I regret to tell you that I have lost the vial. While I was walking up the trail, a goblin attacked me and stole it. The goblin tried to burn the village and attack the villagers with it. The goblin ran away and all was left was an empty vial. I am extremely sorry, sir." << endl;
    conDiaF();
    cout << w << "The village was attacked. That's sad news. Don't worry about the vial. It wasn't anything that important. You can go now." << endl;
    conDiaF();
    cout << st << "The story ends here. You didn't succeed to get the vial of potion. To play again, type 'y', if not, type 'n'.";
    
    playAgain();
}

void mansionVG()
{
    cout << st << p << " walked down the path to the mansion, excited to deliver the vial of potion. He got to the front steps and knocked on the door. The wizard opened the door." << endl;
    conDiaF();
    cout << w << "You got my vial of potion I ordered?" << endl;
    conDiaF();
    cout << p << ": I indeed do. Here it is." << endl;
    conDiaF();
    cout << st << p << " reached into his pouch and his hand came out with a half-used vial of potion." << endl;
    conDiaF();
    cout << p << ": Here it is. Right here. It's half used because a goblin attacked me, stole it, ran away, and attacked the village with it. The villagers are fine, in case you ask. Some of the houses were burned down and some humans got injured but no one died. Unfortunately, the goblin escaped." << endl;
    conDiaF();
    cout << w << "Wow. That was a lot. It's not a problem the vial is half full. I didn't need the whole thing anyway. Well, thank you for all your work delivering this. Here, a tip for you. Ten golden nuggets." << endl;
    conDiaF();
    cout << p << ": Thank you so much, sir. I will now leave. Thank you for using my service." << endl;
    conDiaF();
    cout << st << "The story ends here. You succeeded to get the vial of potion and impressed the Wizard. To play again, type 'y', if not, type 'n'.";

    playAgain();
}

//player movement to somewhere (movement)
void movement()
{
    cin >> loc;
    do
    {
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
            cout << "Huh? I don't understand. Please type again: ";
            cin >> loc;
        }
    } while (true);
}

//player movement to somewhere in forest (movementF)
void movementF()
{
    cin >> loc;
    
    do
    {
        if (loc == plains)
        {
            plainsLoc();
        }
        else if (loc == forest)
        {
            cout << "You're already there. Please type again: ";
            cin >> loc;
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
            cout << "Huh? I don't understand. Please type again: ";
            cin >> loc;
        }
    } while (true);
}

//player movement to somewhere in village (movementV)
void movementV()
{
    cin >> loc;
    
    do
    {
        if (loc == forest)
        {
            forestLoc();
        }
        else if (loc == village)
        {
            cout << "You're already there. Please type again: ";
            cin >> loc;
        }
        else if (loc == plains)
        {
            plainsLoc();
        }
        else if (loc == mansion)
        {
            mansionLoc();
        }
        else
        {
            cout << "Huh? I don't understand. Please type again: ";
            cin >> loc;
        }
    } while (true);
}

//player movement to somewhere in plains (movementP)
void movementP()
{
    cin >> loc;
    
    do
    {
        if (loc == forest)
        {
            forestLoc();
        }
        else if (loc == forest)
        {
            cout << "You're already there. Please type again: ";
            cin >> loc;
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
            cout << "Huh? I don't understand. Please type again: ";
            cin >> loc;
        }
    } while (true);
}

void gameStart()
{
    cout << "Game started." << endl;
    cout << u << "Hey, hey! You okay? I was walking by and I saw you laying here. You looked like you were dead! What's your name? (Type in your name with the first letter capitalized.): ";
    cin >> p;
    cout << u << "Hello, " << p << ". Name's Sheila. Nice to meet you. What are you doing here? (Enter 'e' to continue, you'll do this every time.)" << endl;;
    conDiaF();
    cout << p << ": I was walking down the path but then some goblins attacked me out of nowhere and knocked me out!" << endl;
    conDiaF();
    cout << s << "That stinks, but where were you going to?" << endl;
    conDiaF();
    cout << p << ": I was going to the Wizard's Mansion to deliver something to him. I think it was some vial of potion he needs to create a spell." << endl;
    conDiaF();
    cout << s << "Can I see?" << endl;
    conDiaF();
    cout << p << ": Sure, one second, let me find it..... I can't find it. I think the goblins stole it. Oh no, I'll be in trouble." << endl;
    conDiaF();
    cout << s << "I can help you find it, I have nothing to do anyway." << endl;
    conDiaF();
    cout << p << ": Are you sure? I can probably do it by myself." << endl;
    conDiaF();
    cout << s << "I'm sure! Why not? where do you want to go first. The forest to our left, the plains to our right, forward to the Wizard's Mansion (going there will end the game) or go back to the village. (Type 'left' or 'right' or 'backward' or 'forward' to go to the location.):  ";

    movement();
}

//start
int main()
{
    string playGame;
    cout << "Welcome to the 'Find The Potion'! Type 'p' to play: ";
    string playG = "p";
    cin >> playGame;
    while (playGame != playG)
    {
        cout << "Huh? I don't understand. Please type again: ";
        cin >> playGame;
    }

    gameStart();

    return 0;
}
