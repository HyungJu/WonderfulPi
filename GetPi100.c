#include "../wpi.h"

int main() {

wpi pidata;
printf("Getting Pi with wpi\n");
pidata = wpi_get(100);// Getting 100 digits Pi. 
printf("Tada! Your Pi data is %.20f",pidata);
return 0;
}
