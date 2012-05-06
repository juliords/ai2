#ifndef GAME_H
#define GAME_H

#include <string.h>
#include <ctype.h>

#define NUM_HOSPITALS	4
#define NUM_STATIONS	4
#define NUM_ZOMBIES	60

#define MAPW 20
#define MAPH 20

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

struct hospital {
	int x, y;
	int antidotes;
};

struct station {
	int x, y;
	int ammo;
};

struct zombie {
	int x, y;
	int num;
};

struct game_info {
	struct hospital hospitals[NUM_HOSPITALS];
	struct station stations[NUM_STATIONS];
	struct zombie zombies[NUM_ZOMBIES];
	int num_hospitals;
	int num_stations;
	int num_zombies;
	char map[MAPH][MAPW];
};

extern struct game_info GI;

void game_read(FILE *file);
void game_dump(void);

#endif /* GAME_H */