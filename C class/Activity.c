#include <stdio.h>
#include <stdbool.h>


struct Activity {
    int start;
    int end;
};


int compareActivities(const void* a, const void* b) {
    struct Activity* activity1 = (struct Activity*)a;
    struct Activity* activity2 = (struct Activity*)b;
    return activity1->end - activity2->end;
}


void activitySelection(struct Activity activities[], int n) {

    qsort(activities, n, sizeof(struct Activity), compareActivities);


    printf("(%d, %d), ", activities[0].start, activities[0].end);

    int prevEnd = activities[0].end;


    for (int i = 1; i < n; i++) {
        if (activities[i].start >= prevEnd) {
            printf("(%d, %d), ", activities[i].start, activities[i].end);
            prevEnd = activities[i].end;
        }
    }
}

int main() {

    struct Activity activities[] = {
        {1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8},
        {5, 9}, {6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}
    };
    int n = sizeof(activities) / sizeof(activities[0]);

    printf("Input activities: ");
    for (int i = 0; i < n; i++) {
        printf("(%d, %d), ", activities[i].start, activities[i].end);
    }
    printf("\n");

    printf("Output activities: ");
    activitySelection(activities, n);

    return 0;
}
