#include <stdio.h>
#include <stdint.h>
#include <unistd.h> 

#define STATUS_NORMAL      0 // 0000 (정상)
#define STATUS_IGNITE      1 // 0001 (점화)
#define STATUS_EXHAUST     2 // 0010 (탈진)
#define STATUS_POLYMORPH   4 // 0100 (변이)

int main() {
    uint8_t ChampionStatus = STATUS_NORMAL;

    if (/*점화걸림*/) {
        ChampionStatus |= STATUS_IGNITE; 
        sleep(3000);
        ChampionStatus &= ~STATUS_IGNITE;
    }
    else if (/*탈진걸림*/) {
        ChampionStatus |= STATUS_EXHAUST;
        sleep(3000);
        ChampionStatus &= ~STATUS_EXHAUST;
    }
    else if (/*변이걸림*/) {
        ChampionStatus |= STATUS_POLYMORPH; 
        sleep(3000);
        ChampionStatus &= ~STATUS_POLYMORPH;
    }
    else if (/*정화 사용*/) {
        ChampionStatus &= 0; 
    }

    return 0;
}