#include <stdio.h>
#include <math.h>

int main()
{
    int numwalls=0;
    int lenwalls=0;
    float bricks;
    float pallets;



    printf("How many walls does man lyke bob need?\n");
    scanf("%d",&numwalls);
    fflush(stdin);
    printf("How big are the walls in meters?\n");
    scanf("%d",&lenwalls);
    fflush(stdin);
    bricks = numwalls*lenwalls*1.5;
    printf("Therefore it will take %f bricks to make it\n",bricks);
    pallets = bricks/100;
    printf("Therefore it will take %f pallets to make it\n",ceil(pallets));
    printf("The amount of bricks left over will be %f\n",ceil(pallets)*100-bricks);
}