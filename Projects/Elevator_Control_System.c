#include <stdio.h>
int main(){
    int floor, target;
	printf("      Elevator Control System     \n");

    printf("Enter Current Floor: ");
    scanf("%d", &floor);

    if (floor < 0 || floor > 100){
        printf("Invalid Starting Floor!\n");
        return 0;
    }
	while (1){
        printf("\nCurrent Floor: %d\n", floor);
        printf("Enter Destination Floor: ");
        scanf("%d", &target);

        if (target < 0){
            printf("Elevator Stopped.\n");
            break;
        }
		if (target < 0 || target > 100){
            printf("Invalid Floor! Enter a floor between 0 and 100.\n");
            continue;
        }
		if (target == floor){
            printf("Elevator is already at Floor %d.\n", floor);
        }
        else if (target > floor){
            printf("Moving Up...\n");

            while (floor < target){
                floor++;
                printf("Reached Floor %d\n", floor);
            }
			printf("Door Opening...\n");
            printf("Door Closing...\n");
        }
        else{
            printf("Moving Down...\n");

            while (floor > target){
                floor--;
                printf("Reached Floor %d\n", floor);
            }
			printf("Door Opening...\n");
            printf("Door Closing...\n");
        }
    }

    return 0;
}