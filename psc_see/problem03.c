#include<stdio.h>
typedef struct Fritacole{
char name;
int height;
int integrity;
int interest;
int ability;
int discipline;
} fritacole;

typedef struct Teams{
int a;
int b;
}team;

typedef struct Game
{
int point;
int foul;
} game;
void input();
fritacole input_players();
team sort();
game input_n(team a,team b);
int compare_fritacoles();
team compare_teams(team a,team b);
void verify_win();
void output(team win);
int main()
{

    return 0;
}
 void input()
{
    fritacole n;
    printf("Enter the player name:");
    scanf("%s",&n.name);
    printf("Enter the player height:");
    scanf("%d",n.height);
    printf("Enter the player integrity out of 5");
    scanf("%d",n.integrity);
    printf("Enter the player interest out of 5");
    scanf("%d",n.interest);
    printf("Enter the player ability out of 5");
    scanf("%d",n.ability);
    printf("Enter the player discipline out of 5");
    scanf("%d",n.discipline);
}
fritacole input_players(int n)
{
printf("Enter the no of players:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    input(i);
}
}
team sort()
{
    team a,b;
}
game input_n(team a,team b)
{
    game goals,fouls;
    printf("Enter the goals scored by team A:\n");
    scanf("%d",&goals.a);
    printf("Enter the goals scored by team A:\n");
    scanf("%d",&fouls.a);
    printf("Enter the goals scored by team B:\n");
    scanf("%d",&goals.b);
    printf("Enter the goals scored by team B:\n");
    scanf("%d",&fouls.b);
}
team compare_teams(team a,team b);
{
    if 
}