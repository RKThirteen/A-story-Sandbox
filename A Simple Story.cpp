#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;
char s[1000],s1[100]="This is not a suitable option",action[100],s2[100]="What should you do?",option[100];
int n,i,scenario,outcome, desc, obj,road,house,playground,modify,message,x=10;
bool game_over=1,help=0,start=1,key=0,slide=0,bench=0,swings=0,one=0,two=0,three=0,bench1,slide1,swing1,S1,S2,S3,play,opt=0;

void show_text()
{
for (i=0;i<strlen(s);i++) {cout<<s[i]; Sleep(x);}
                            cout<<'\n';
                            Sleep(x*10);
}

void correction()
{for (i=0;i<strlen(action);i++) if (action[i]>='A' && action[i]<='Z') action[i]=action[i]+32;
}



void how_to_play()
{strcpy(s,"You will have to type in the action that you want your character to perform");
show_text();
strcpy(s,"For example, if you want your character to look around you should type Look Around");
show_text();
strcpy(s,"Possible actions that your character can perform will be hinted in the game");
show_text();
cout<<'\n';
strcpy(s,"Do you want a full list of all possible actions? Yes(Recommended if it's your first time)/No");
show_text();
while (opt==0)
{cin.getline(action,50);
correction();
if (strcmp(action,"yes")==0) {strcpy(s,"Look Around: analyze your surroundings");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Help: Get a hint that will help you progress");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Go Back/Turn Back: go back to the beginning");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Go Playground/Go To Playground/Go To The Playground");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Go House/Go To House/Go To The House");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Go Road/Go To Road/Go To The Road");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Knock/Knock On Door/Knock On the Door:knock at the house's door");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Look Slide/Look at Slide/Look at the Slide:look at the slide located on the playground");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Look Swings/Look at Swings/Look at the Swings:look at the swingset located on the playground");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Look Bench/Look at Bench/Look at the Bench:look at the bench located on the playground");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"There is also another option regarding these 3 objects. Can you find it?");
                             show_text();
                             cout<<'\n';
                             strcpy(s,"Have fun playing!");
                             show_text();
                             strcpy(s,"Don't forget, type in Play to play");
                             show_text();
                             cout<<'\n';
                             opt=1;
                             }
if (strcmp(action,"no")==0) {opt=1;
                        strcpy(s,"Alright, have fun playing!");
                        show_text();
                        strcpy(s,"Don't forget, type in Play to play");
                        show_text();
                        cout<<'\n';
                        }
}

}


void query()
{cout<<'\n';
for (i=0;i<strlen(s2);i++) {cout<<s2[i]; Sleep(x);}
cout<<'\n';
}

void game_beginning()
{
strcpy(s,"'Who are you?'");
show_text();
strcpy(s,"You hear a faint whisper that jolts you awake, while your fight or flight instinct starts kicking in");
show_text();
strcpy(s,"You look around, only not to find yourself on your comfy bed, but lying face-first on the muddy pavement.");
show_text();
strcpy(s,"It is softly raining, the weather making you feel cold");
show_text();
strcpy(s,"Your head starts ringing, as you hear that soft whisper again");
show_text();
strcpy(s,"'You should not be here. This place is not for you. I reckon you don't want to be here?'");
show_text();
strcpy(s,"Somehow, this disembodied voice has such a calming tone that you unwillingly nod.");
show_text();
strcpy(s,"'I see. If you need help, just Call For my Help'");
show_text();
strcpy(s,"Still a bit startled, you think that the best option is to look around");
show_text();

}

void describe_surroundings()
{if (start==1)
{strcpy(s,"You look around, noticing that everything behind you is a hypnotizing shade of black");
show_text();
strcpy(s,"You realize you are in some sort of trance, so you snap out of it and decide to focus only on what's in front of you.");
show_text();
strcpy(s,"Through the rain, you see a small house, a road and an empty playground");
show_text();
help=1;
}
if (road>=1)
{
strcpy(s,"You already know what the road looks like. And you know where it ends.");
show_text();
help=1;
}
if (house==1) {strcpy(s,"You take a look at the house");
                show_text();
                strcpy(s,"Upon closer inspection, you notice a small hole that you can see through");
                show_text();
                strcpy(s,"Peeking inside the hole, you only see darkness at first");
                show_text();
                strcpy(s,"Suddenly, a pair of crimson red eyes stare back at you");
                show_text();
                strcpy(s,"Feeling uneasy, you decide doing this wasn't the best idea and swiftly retreat back to the front door");
                show_text();

                }


if (house==2) {strcpy(s,"You look around the house");
                show_text();
               strcpy(s,"No sign of any key");
               show_text();
               strcpy(s,"You wonder if it may be somewhere else");
               show_text();
               strcpy(s,"For some reason, you feel compelled to enter the playground");
               show_text();
              }

if (playground==1) {strcpy(s,"Even though everything feels so surreal, you are in a playground");
                    show_text();
                    strcpy(s,"A lone bench sparks your interest");
                    show_text();
                    strcpy(s,"You also notice a rusty slide and some old swings");
                    show_text();
                    strcpy(s,"The entire place gives you nostalgia, but you are unsure why");
                    show_text();
                  }

}

void aid()
{if (help==0) {strcpy(s,"You should always Look Around before doing anything");
                show_text();
                Sleep(x*10);
               strcpy(s,"Always");
               show_text();
                }
if (help==1) {if (start==1)
                {strcpy(s,"The road doesn't seem like the best option");
                show_text();
                strcpy(s,"Maybe you should Go To the House or the Playground. I would, If I were in your shoes");
                show_text();
                }
              if (road==1)
              {strcpy(s,"Whatever you do, do NOT Go Forward! Please, Turn Back...for your own good...");
                show_text();
                strcpy(s,"The voice seems desperate. It knows what you want to do. It doesn't want to stop you");
                show_text();
              }
              if (road==2) {strcpy(s,"This is your last chance of turning back");
                            show_text();
                            strcpy(s,"Should you decide to Go Forward...I will not come with you.");
                            show_text();
                            strcpy(s,"I think you realize what happens if you reach the end of the road. Make your decision carefully.");
                            show_text();

                           }
              if (house==1) {strcpy(s,"What are you waiting for? Knock on the door, ask for help!");
                            show_text();

                            }
              if (house==2) {strcpy(s,"Maybe the key is around here somewhere? Look Around!");
                             show_text();

                            }
              if (playground==1) {strcpy(s,"Try Looking at these Objects. You never know what can happen");
                                    show_text();
                                  strcpy(s,"If you want to take a slight break from this mess, maybe you can take a seat on one of them");
                                  show_text();

                                 }
             }
if (help==0) help=1;
}

void go_back()
{if (road>=1) {start=1; road=0;}
if (house>=1) {start=1; house=0;}
if (playground==1) {start=1; playground=0;}
}

void progress()
{if (start==1) {strcpy(s,"You are back at the beginning, thinking that proceeding with care is the best option"); show_text();}
if (road==1) {
              strcpy(s,"You decide to go to the road");
                show_text();
                strcpy(s,"You start walking");
                show_text();
                strcpy(s,"You notice no signs of life daring to show their presence");
                show_text();
                strcpy(s,"A memory fills your head");
                show_text();
                strcpy(s,"Your thoughts are interrupted by a loud thunder");
                show_text();
                strcpy(s,"The only thing keeping you company are the empty trees, devoid of any emotion");
                show_text();
                strcpy(s,"The sky is a pitch black, yet you feel...eerily calm.");
                show_text();
              }
if (road==2) {strcpy(s,"You keep walking");
                show_text();
                strcpy(s,"Your movements become shaky, as the cold gets to you, but you don't care.");
                show_text();
                strcpy(s,"The rain has now transformed into a thunderstorm.");
                show_text();
                strcpy(s,"It is as if the chaotic energy of the lightning bolts is trying to get you to head back.");
                show_text();
                strcpy(s,"A strong wind is trying to hinder your movements, but you don't stop.");
                show_text();
                strcpy(s,"You start thinking about everything that lead to you being in this predicament");
                show_text();
                strcpy(s,"Nevertheless, you have come so far, so why stop now, right?");
                show_text();
             }
if (road==3) {strcpy(s,"Suddenly, you stop.");
                show_text();
                strcpy(s,"You are at the end of the road.");
                show_text();
                strcpy(s,"Even though it feels like an eternity, you have made it");
                show_text();
                strcpy(s,"You stare at the dark abyss behind you, but you feel like it is staring back");
                show_text();
                strcpy(s,"It is pouring, and yet, you find comfort in the rain");
                show_text();
                strcpy(s,"...but why?");
                show_text();
                strcpy(s,"Because, even though you are in the middle of nowhere...");
                show_text();
                strcpy(s,"You realize that no matter what, you should always go forward");
                show_text();
                Sleep(x*2);
                strcpy(s,"You wake up, having learned a new life lesson.");
                show_text();
                Sleep(x*2);
                game_over=0;
            }
if (house==1) {strcpy(s,"You arrive in front of the house");
                show_text();
                strcpy(s,"As you approach the house, you realize it towers over you");
                show_text();
                strcpy(s,"It's an old, wooden farmhouse, but it's looking as if it were just built");
                show_text();
                strcpy(s,"You hear a woman's voice inside");
                show_text();
                strcpy(s,"Your head starts ringing, but before you even realize it, the noise stops.");
                show_text();
                strcpy(s,"You decide to ignore it, thinking you might have found salvation");
              }
if (house==2) {strcpy(s,"You knock on the door");
                show_text();
                strcpy(s,"For a few seconds, everything fell silent...");
                show_text();
                strcpy(s,"But then, you hear the female voice speak up");
                show_text();
                strcpy(s,"'Help! I've been stuck in here for so long...'");
                show_text();
                strcpy(s,"I want to get out of this place as much as you do");
                show_text();
                strcpy(s,"There should be a key around here somewhere, I think I may have dropped it somewhere!");
                show_text();
                strcpy(s,"Why do I only have a single one of these things?");
                show_text();
                strcpy(s,"As she sighs, you decide to find the key");
                show_text();

              }
if (house==3){strcpy(s,"But you don't have a key");
                show_text();
             }
if (house==4) {strcpy(s,"You used the key");
                show_text();
                strcpy(s,"The door clicks!");
                show_text();
                strcpy(s,"It is now unlocked");
                show_text();
                strcpy(s,"'Ah, you found it! Come in, come in!', the woman shouted excitedly");
                show_text();
                strcpy(s,"You took a step inside");
                show_text();
                strcpy(s,"As you think you are finally able to leave, you find yourself surrounded by darkness");
                show_text();
                strcpy(s,"A voice fills your head");
                show_text();
                strcpy(s,"That same voice that has greeted you when you arrived in this abysmal place");
                show_text();
                strcpy(s,"It asks you if you are ready");
                show_text();
                                if (S1+S2+S3==3) {Sleep(x*20);
                                        strcpy(s,"You confidently state that you are");
                                  show_text();
                                  strcpy(s,"It knew you would say that, but you are not surprised");
                                  show_text();
                                  strcpy(s,"It tells you the importance of learning from your mistakes");
                                  show_text();
                                  strcpy(s,"You listen");
                                  show_text();
                                  strcpy(s,"It tells you that the future is what counts");
                                  show_text();
                                  strcpy(s,"You listen");
                                  show_text();
                                  for (i=1;i<=3;i++) {cout<<"."; Sleep(x*20);}
                                  strcpy(s,"You decide to thank it");
                                  Sleep(x*20);
                                 }
                                    else {Sleep(x*20);
                                            strcpy(s,"You don't understand what it means");
                                            show_text();
                                            strcpy(s,"It also understands your confusion, so it tells you that you still have time");
                                            show_text();
                                            Sleep(x*2);
                                         }
                strcpy(s,"It also tells you that you should wake up.");
                show_text();
                Sleep(x*1.3);
                game_over=0;
              }
if (playground==1 && slide+swings+bench==0 && slide1+swing1+bench1==0) {strcpy(s,"You step anxiously on the playground");
                    show_text();
                    strcpy(s,"You start remembering your life as a child");
                    show_text();
                    strcpy(s,"So young and innocent you once were...");
                    show_text();
                    strcpy(s,"But now these are different times");
                    show_text();
                    strcpy(s,"You tell yourself that you should concentrate on getting out of here first");
                    }
if (playground==1 && slide==1) {strcpy(s,"You take a look at the rusty slide");
                                show_text();
                                strcpy(s,"You don't think it is that interesting");
                                show_text();
                                strcpy(s,"Hastily, a memory forms in your head");
                                show_text();
                                strcpy(s,"Feeling nostalgic, you decide to divert your attention elsewhere");
                                show_text();
                                slide=0;
                                }
if (playground==1 && bench==1) {strcpy(s,"You stare curiously at the wooden bench");
                                show_text();
                                strcpy(s,"It feels oddly familiar");
                                show_text();
                                strcpy(s,"You realize it bears a striking resemblance to a bench next to your house you liked as a kid");
                                show_text();
                                strcpy(s,"You step away from the bench, a bit weirded out");
                                show_text();
                                bench=0;
                                }
if (playground==1 && swings==1) {strcpy(s,"You start watching the swings slowly moving in the wind");
                                 show_text();
                                 strcpy(s,"You remember that you loved swings at a young age");
                                 show_text();
                                 strcpy(s,"Even though you are in the middle of nowhere, you feel a bit better now");
                                 show_text();
                                 swings=0;

                                }
if (playground==1 && swing1==1) {strcpy(s,"You approach the swings curiously");
                                  show_text();
                                 strcpy(s,"You decide to sit on one of them");
                                 show_text();
                                 strcpy(s,"You feel your worries wash away");
                                 show_text();
                                 strcpy(s,"You had a bit of a troubled past that haunts you, but right now you are at peace");
                                 show_text();
                                 strcpy(s,"You sit back up, happy with the decision you've made");
                                 show_text();
                                  swing1=0;
                                }
if (playground==1 && bench1==1) {strcpy(s,"You sit on the bench");
                                show_text();
                                strcpy(s,"As you start relaxing, you let go of your built-up anxiety");
                                show_text();
                                strcpy(s,"In this abandoned playground, you found some inner-peace");
                                show_text();
                                strcpy(s,"You have sat around enough, so you get up");
                                show_text();
                                bench1=0;
                                }
if (playground==1 && slide1==1) {strcpy(s,"You use the slide");
                                 show_text();
                                 strcpy(s,"Your giggle as you let your childish side take over");
                                 show_text();
                                 strcpy(s,"You use the slide again");
                                 show_text();
                                 strcpy(s,"And once more, for good luck");
                                 show_text();
                                 strcpy(s,"It was a well spent minute");
                                 show_text();
                                slide1=0;
                                }
}



int main()

{strcpy(s,"This game is about telling a small story");
show_text();
strcpy(s,"A story which may also teach you something very, very valuable");
show_text();
strcpy(s,"Type in Play to begin, Instructions to learn how to play or Exit to leave the game");
show_text();
strcpy(s,"Nothing will happen if you type in something else");
show_text();
while (play==0)
{cin.getline(option,50);
correction();
if (strcmp(option,"exit")==0) break;
if (strcmp(option,"instructions")==0) how_to_play();
if (strcmp(option,"play")==0) play=1;
}
//pana aici interfata
if (play==1)
{
strcpy(s,"Choose the narrating speed. A character will be shown every x miliseconds");
show_text();
cout<<'\n';
strcpy(s,"What will be the narrating speed? (The default is 100ms)");
show_text();
cout<<'\n';
cin>>x;
cin.get();
cout<<'\n';
strcpy(s,"Very well.");
show_text();
cout<<'\n';
strcpy(s,"Let us proceed to the story.");
show_text();
cout<<'\n';
game_beginning();
cout<<'\n';
while (game_over)
{
modify=-1;
query();
cin.getline(action,50);
correction();
if (strcmp(action,"go road")==0 && road==0) {road=1; start=0; modify=1;}

if (strcmp(action,"go to road")==0 && road==0) {road=1; start=0; modify=1;}

if (strcmp(action,"go to the road")==0 && road==0) {road=1; start=0; modify=1;}

if (strcmp(action,"go house")==0 && house==0) {house=1; start=0; playground=0; road=0; modify=1;}

if (strcmp(action,"go to house")==0 && house==0) {house=1; start=0; playground=0; road=0; modify=1;}

if (strcmp(action,"go to the house")==0 && house==0) {house=1; start=0; playground=0; road=0; modify=1;}

if (strcmp(action,"go playground")==0 && playground==0) {playground=1; start=0; house=0; road=0; modify=1;}

if (strcmp(action,"go to playground")==0 && playground==0) {playground=1; start=0; house=0; road=0; modify=1;}

if (strcmp(action,"go to the playground")==0 && playground==0) {playground=1; start=0; house=0; road=0; modify=1;}

if (strcmp(action,"go back")==0) {go_back(); modify=1;}

if (strcmp(action,"turn back")==0) {go_back(); modify=1;}

if (strcmp(action,"go forward")==0 && road>=1) {road++; modify=1;}

if (strcmp(action,"knock")==0 && house==1) {house=2; modify=1;}

if (strcmp(action,"knock on door")==0 && house==1) {house=2; modify=1;}

if (strcmp(action,"knock on the door")==0 && house==1) {house=2; modify=1;}

if (strcmp(action,"use key")==0 && house>=1) {modify=1;
                                             if (key==1) house=4;
                                             if (key==0) house=3;
                                             }

if (strcmp(action,"use the key")==0 && house>=1) {modify=1;}

if (strcmp(action,"look swings")==0 && playground==1) {modify=1; swings=1; one=1;}

if (strcmp(action,"look at swings")==0 && playground==1) {modify=1; swings=1; one=1;}

if (strcmp(action,"look at the swings")==0 && playground==1) {modify=1; swings=1; one=1;}

if (strcmp(action,"look bench")==0 && playground==1) {modify=1; bench=1; two=1;}

if (strcmp(action,"look at bench")==0 && playground==1) {modify=1; bench=1; two=1;}

if (strcmp(action,"look at the bench")==0 && playground==1) {modify=1; bench=1; two=1;}

if (strcmp(action,"look slide")==0 && playground==1) {modify=1; slide=1; three=1;}

if (strcmp(action,"look at slide")==0 && playground==1) {modify=1; slide=1; three=1;}

if (strcmp(action,"look at the slide")==0 && playground==1) {modify=1; slide=1; three=1;}

if (strcmp(action,"sit on bench")==0 && playground==1) {modify=1; bench1=1; S1=1;}

if (strcmp(action,"use bench")==0 && playground==1) {modify=1; bench1=1; S1=1;}

if (strcmp(action,"use the bench")==0 && playground==1) {modify=1; bench1=1; S1=1;}

if (strcmp(action,"sit on the bench")==0 && playground==1) {modify=1; bench1=1; S1=1;}

if (strcmp(action,"sit on swings")==0 && playground==1) {modify=1; swing1=1; S2=1;}

if (strcmp(action,"sit on the swings")==0 && playground==1) {modify=1; swing1=1; S2=1;}

if (strcmp(action,"use swings")==0 && playground==1) {modify=1; swing1=1; S2=1;}

if (strcmp(action,"use the swings")==0 && playground==1) {modify=1; swing1=1; S2=1;}

if (strcmp(action,"use slide")==0 && playground==1) {modify=1; slide1=1; S3=1;}

if (strcmp(action,"use the slide")==0 && playground==1) {modify=1; slide1=1; S3=1;}

if (strcmp(action,"sit on slide")==0 && playground==1) {modify=1; slide1=1; S3=1;}

if (strcmp(action,"sit on the slide")==0 && playground==1) {modify=1; slide1=1; S3=1;}

if (strcmp(action,"help")==0) {aid(); modify=0;}

if (strcmp(action,"look around")==0) {describe_surroundings(); modify=0;}
//actiuni

if (modify==-1) {for (i=0;i<strlen(s1);i++) {cout<<s1[i]; Sleep(x);}
                cout<<'\n';
               Sleep(x*10);
               }
if (modify==1) progress();

if (one+two+three==3 && key==0) {cout<<'\n';
                                strcpy(s,"A key forms in your hand");
                                show_text();
                                strcpy(s,"It is embezzled in gemstones");
                                show_text();
                                 key=1;
                                }

if (S1+S2+S3==3 && message==0) {cout<<'\n';
                                strcpy(s,"The rain stopped");
                                show_text();
                                Sleep(x*20);
                                strcpy(s,"You are greeted by the appearance of the sun");
                                show_text();
                                strcpy(s,"You greet it back, smiling warmly");
                                show_text();
                                message=1;
                                }

if (game_over==0) {strcpy(s,"And now, your adventure is over.");
                    for (i=0;i<strlen(s);i++) {cout<<s[i]; Sleep(x);}
                 }

if (strcmp(action, "force stop")==0) break;
}

}
}
