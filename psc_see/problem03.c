#include <stdio.h>
#include <string.h>

// Define a structure for an ID
typedef struct {
    int fritid;
} FritID;

// Define a structure for a fritacole
typedef struct {
    FritID fritid;
    char name[100];
    float height;
    int integrity;
    int interest;
    int ability;
    int discipline;
} Fritacole;

// Define a structure for a point
typedef struct {
    int goals_scored;
} Point;

// Define a structure for a foul
typedef struct {
    int fouls_committed;
} Foul;

// Define a structure for a team
typedef struct {
    char name[100];
    int num_players;
    Fritacole players[20];
    Point points;
    Foul fouls;
} Team;

// Define a structure for a game
typedef struct {
    Team teams[2];
} Game;

// Function to compare two fritacoles based on their heights
int compare_fritacoles(Fritacole a, Fritacole b) {
    return (a.height > b.height) ? 1 : ((a.height < b.height) ? -1 : 0);
}

// Function to input details for a fritacole
void input_fritacole(Fritacole *frita, int frita_id) {
    frita->fritid.fritid = frita_id;
    printf("Enter name of Fritacole %d: ", frita_id);
    scanf("%s", frita->name);
    printf("Enter height of Fritacole %d: ", frita_id);
    scanf("%f", &frita->height);
    printf("Enter integrity of Fritacole %d: ", frita_id);
    scanf("%d", &frita->integrity);
    printf("Enter interest of Fritacole %d: ", frita_id);
    scanf("%d", &frita->interest);
    printf("Enter ability of Fritacole %d: ", frita_id);
    scanf("%d", &frita->ability);
    printf("Enter discipline of Fritacole %d: ", frita_id);
    scanf("%d", &frita->discipline);
}

// Function to input details for a team
void input_team(Team *team, int team_number) {
    printf("Enter name of Team %d: ", team_number);
    scanf("%s", team->name);
    printf("Enter number of players in Team %d: ", team_number);
    scanf("%d", &team->num_players);
    // Input details for each player in the team
    for (int i = 0; i < team->num_players; i++) {
        input_fritacole(&team->players[i], i + 1);
    }
    printf("Enter number of goals scored by Team %d: ", team_number);
    scanf("%d", &team->points.goals_scored);
    printf("Enter number of fouls committed by Team %d: ", team_number);
    scanf("%d", &team->fouls.fouls_committed);
}

// Function to input details for a game
void input_game(Game *game) {
    int num_teams;
    printf("Enter the number of teams: ");
    scanf("%d", &num_teams);
    for (int i = 0; i < num_teams; i++) {
        input_team(&game->teams[i], i + 1);
    }
}

// Function to find the better team among an array of teams
Team find_better_team(Team *teams, int num_teams) {
    Team better_team = teams[0];
    for (int i = 1; i < num_teams; i++) {
        if (teams[i].points.goals_scored > better_team.points.goals_scored) {
            better_team = teams[i];
        }
    }
    return better_team;
}

// Function to output game statistics including the result
void output(Game *game, Team better_team) {
    printf("\nGAME STATS:\n\n");
    for (int i = 0; i < 2; i++) {
        printf("Team %d: %s\n", i + 1, game->teams[i].name);
        printf("Goals: %d\n", game->teams[i].points.goals_scored);
        printf("Fouls: %d\n\n", game->teams[i].fouls.fouls_committed);
    }

    // Check if the better team won or not
    int better_team_index = -1;
    for (int i = 0; i < 2; i++) {
        if (strcmp(game->teams[i].name, better_team.name) == 0) {
            better_team_index = i;
            break;
        }
    }
    if (better_team_index == -1) {
        printf("Better team not found.\n");
        return;
    }

    int better_team_won = 1;
    for (int i = 0; i < 2; i++) {
        if (i != better_team_index && game->teams[i].points.goals_scored >= better_team.points.goals_scored) {
            better_team_won = 0;
            printf("%s won the game.\n", game->teams[i].name);
            break;
        }
    }
    if (better_team_won) {
        printf("%s won the game.\n", better_team.name);
    }
}

int main() {
    Game game;

    printf("Enter details for the game:\n");
    input_game(&game);

    Team better_team = find_better_team(game.teams, 2);

    printf("The better team is: %s\n", better_team.name);

    output(&game, better_team);

    return 0;
}