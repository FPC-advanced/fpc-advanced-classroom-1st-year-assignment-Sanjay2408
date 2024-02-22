// #include<stdio.h>
// typedef struct Fritacole{
// char name;
// int height;
// int integrity;
// int interest;
// int ability;
// int discipline;
// } fritacole;

// typedef struct Teams{
// int a;
// int b;
// }team;

// typedef struct Game
// {
// int point;
// int foul;
// } game;
// void input();
// fritacole input_players();
// team sort();
// game input_n(team a,team b);
// int compare_fritacoles();
// team compare_teams(team a,team b);
// void verify_win();
// void output(team win);
// int main()
// {

//     return 0;
// }
//  void input()
// {
//     fritacole n;
//     printf("Enter the player name:");
//     scanf("%s",&n.name);
//     printf("Enter the player height:");
//     scanf("%d",n.height);
//     printf("Enter the player integrity out of 5");
//     scanf("%d",n.integrity);
//     printf("Enter the player interest out of 5");
//     scanf("%d",n.interest);
//     printf("Enter the player ability out of 5");
//     scanf("%d",n.ability);
//     printf("Enter the player discipline out of 5");
//     scanf("%d",n.discipline);
// }
// fritacole input_players(int n)
// {
// printf("Enter the no of players:\n");
// scanf("%d",&n);
// for(int i=0;i<n;i++)
// {
//     input(i);
// }
// }
// team sort()
// {
//     team a,b;
// }
// game input_n(team a,team b)
// {
//     game goals,fouls;
//     printf("Enter the goals scored by team A:\n");
//     scanf("%d",&goals.a);
//     printf("Enter the goals scored by team A:\n");
//     scanf("%d",&fouls.a);
//     printf("Enter the goals scored by team B:\n");
//     scanf("%d",&goals.b);
//     printf("Enter the goals scored by team B:\n");
//     scanf("%d",&fouls.b);
// }
// team compare_teams(team a,team b);
// {
//     if 
// }

// A Fritacole has attributes: name, height,  integrity, interest, ability, discipline.
// There were two teams of Fritacoles playing a freyball game.
// A freyball game consists of points and fouls
// Each point is scored by a fritacole.
// Each foul is committed by a fritacole.
// The team that scores more goals wins the game.
// If the goals are the same, the team that commits less fouls wins the game.

// a. Write a function to verify whether the better team won a game?
// Note that taller the person, the more chance that the fritacole may score a point.

// b, Write a function to convert a fritacole into a string.

// c. Write a function to convert a string into a fritacole.
// Hints:
// Use structures for Fritacole, team, game, points and fouls.
// Write functions to verify_win, compare_fritacoles, compare_teams and other functions.


#include <stdio.h>
int frita_jersey();


typedef struct _fritacole {
  int frita_jersey;
  char name[100];
  float height;
} fritacole;

int frita_jersey(){
  static int f_jersey = -1;
  f_jersey++;
  return f_jersey;
}

typedef struct foul {
  int frita_jersey;
  char name[100];
} fouls;

typedef struct points {
int frita_jersey;
char name[100];
} points;

typedef struct _team {
  char name[100];
  int numplayers;
  fritacole players[20];
  fouls fouls[20];
  points points[20];
  int numfouls;
  int numpoints;
} team;

typedef struct _game {
  int jersey;
  team teams[2];
} game;



void inpfricta(fritacole *a) {
  printf("Enter the name of the fritacole\n");
  scanf("%s", a->name);
  printf("Enter the height of the fritacole\n");
  scanf("%f", &a->height);
}



void inpteam(team *a, int numplayers) {
  a->numplayers = numplayers;
  printf("Enter the name of the team\n");
  scanf("%s", a->name);
  for (int i = 0; i < a->numplayers; i++) {
    a->players[i].frita_jersey=frita_jersey();
    inpfricta(&a->players[i]);
  }
}


void inpgame(game *a) {
  printf("please enter game number: \n");
  scanf("%d",&a->jersey);
  int numplayers;
  printf("Enter the number of players for each team\n");
  scanf("%d", &numplayers);
  for (int i = 0; i < 2; i++) {
    inpteam(&a->teams[i], numplayers);
  }
}



int inpfouls(game *a,int j) {
  scanf("%d", &a->teams[j].numfouls);
  for (int i = 0; i < a->teams[j].numfouls; i++) {
    printf("Enter the jersey of the fritacole who fouled: \n");
    scanf("%d",&a->teams[j].fouls[i].frita_jersey);
  }
  return a->teams[j].numfouls;
}


int inppoints(game *a,int j) {
  scanf("%d", &a->teams[j].numpoints);
  for (int i = 0; i < a->teams[j].numpoints; i++) {
    printf("Enter the jersey of the fritacole who scored: \n");
    scanf("%d", &a->teams[j].points[i].frita_jersey);
  }
  return a->teams[j].numpoints;
}



float sumheight(game *a, int j) {
  float hsum = 0;
  for (int i = 0;i<a->teams[j].numplayers; i++) {
    hsum += a->teams[j].players[i].height;
  }
  return hsum;
}



void verifyadvantage(game *a) {
  float team1height = sumheight(a, 0);
  float team2height = sumheight(a, 1);
  (team1height > team2height)   ? printf("team one has the advantage\n")
  : (team1height < team2height) ? printf("team two has the advantage\n")
                                : printf("both teams possess equal advantage\n");
  ;
}


void verify_win(game *a) {
  printf("team 1 info: \n");
  for(int i=0;i<a->teams[0].numplayers;i++){
    printf("name: %s ,jersey no: %d\n",a->teams[0].players[i].name,a->teams[0].players[i].frita_jersey);
  }
  printf("team 2 info: \n");
  for(int i=0;i<a->teams[1].numplayers;i++){
    printf("name: %s ,jersey no: %d\n",a->teams[1].players[i].name,a->teams[1].players[i].frita_jersey);
  }

  printf("\n\nenter the points for team %s: \n", a->teams[0].name);
  int team1points = inppoints(a,0);
  printf("enter the points for team %s: \n", a->teams[1].name);
  int team2points = inppoints(a,1);
  printf("enter the fouls for team %s: \n", a->teams[0].name);
  int team1fouls = inpfouls(a,0);
  printf("enter the fouls for team %s: \n", a->teams[1].name);
  int team2fouls = inpfouls(a,1);
  verifyadvantage(a);
  (team1points>team2points)?printf("team one has won the game\n"):(team1points<team2points)?printf("team 2 has won the game\n"):
  (team1fouls>team2fouls)?printf("both teams have equal points but since team 1 has more fouls, team 2 won\n"):(team1fouls<team2fouls)?
  printf("both teams have equal points but since team 2 scored more fouls, team 1 won:\n"):printf("its a draw\n");
}



void output(game *a){
  printf("\nGAME STATS: \n\n");
  printf("The number of fouls scored by each team are: \n");
  printf("Team 1: %d\n",a->teams[0].numfouls);
  for(int i=0;i<a->teams[0].numfouls;i++){
    printf("name: %s, jersey: %d\n",a->teams[0].players[a->teams[0].fouls[i].frita_jersey].name,a->teams[0].fouls[i].frita_jersey);
  }
  printf("Team 2: %d\n",a->teams[1].numfouls);
  for(int i=0;i<a->teams[1].numfouls;i++){
    printf("name: %s, jersey: %d\n",a->teams[1].players[a->teams[1].fouls[i].frita_jersey].name,a->teams[1].fouls[i].frita_jersey);
  }
  printf("\nThe number of points scored by each team are: \n");
  printf("\nTeam 1: %d\n",a->teams[0].numpoints);
  for(int i=0;i<a->teams[0].numpoints;i++){
    printf("name: %s, jersey: %d\n",a->teams[0].players[a->teams[0].points[i].frita_jersey].name,a->teams[0].points[i].frita_jersey);
  }
  printf("\nTeam 2: %d\n",a->teams[1].numpoints);
  for(int i=0;i<a->teams[1].numpoints;i++){
    printf("name: %s, jersey: %d \n",a->teams[1].players[a->teams[1].points[i].frita_jersey].name,a->teams[1].points[i].frita_jersey);
  }

}

int main(){
  game a;
  inpgame(&a);
  verify_win(&a);
  output(&a);
}