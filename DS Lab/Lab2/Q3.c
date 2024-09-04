#include<stdio.h>

struct time{
    int hour,min,sec;
}t1,t2,ans;

void addTime(struct time t1, struct time t2){
    ans.sec= (t1.sec+t2.sec)%60;
    ans.min = ((t1.min+t2.min) +(t1.sec+t2.sec)/60)%60;
    ans.hour = t1.hour+t2.hour +  ((t1.min+t2.min) +(t1.sec+t2.sec)/60)/60;
}

void subtractTime(struct time t1, struct time t2){
    int totalSec1 = t1.hour * 3600 + t1.min * 60 + t1.sec;
    int totalSec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;
    int diffSec = totalSec1 - totalSec2;

    if(diffSec < 0) {
        printf("Time difference is negative.\n");
        return;
    }

    ans.hour = diffSec / 3600;
    ans.min = (diffSec % 3600) / 60;
    ans.sec = diffSec % 60;
}

void display(struct time ans){
    printf("Time is: %d:%d:%d\n",ans.hour,ans.min,ans.sec);
}

int main(){
    printf("Enter the first time (HH MM SS): ");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);

    printf("Enter the second time (HH MM SS): ");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    printf("1. Add time\n");
    printf("2. Subtract time\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            addTime(t1, t2);
            printf("Added time: ");
            display(ans);
            break;
        case 2:
            subtractTime(t1, t2);
            printf("Subtracted time: ");
            display(ans);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// #include<stdio.h>

// struct time{
//     int hour,min,sec;
// }t1,t2,ans;

// void addTime(struct time t1, struct time t2){
//     ans.sec= (t1.sec+t2.sec)%60;
//     ans.min = ((t1.min+t2.min) +(t1.sec+t2.sec)/60)%60;
//     ans.hour = t1.hour+t2.hour +  ((t1.min+t2.min) +(t1.sec+t2.sec)/60)/60;
// }

// void subtractTime(struct time t1, struct time t2){
//     ans.sec= (t1.sec-t2.sec)%60;
//     ans.min= (t1.min-t2.min);
// }

// void display(struct time ans){
//     prinf("Time is: %d:%d:%d\n",ans.hour,ans.min,ans.sec);
// }


// void main(){

// }