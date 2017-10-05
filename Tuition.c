//Andy Murphy  
//ajmfpn
//CS1050 Homework 1

#include <stdio.h>

int main(void){
    int a = 0, b=0, state,id, ehours;
    float scholar;

    while(a==0){

        //get valid student id
        while(b==0){
            printf("Enter Student Id or 0 to exit: ");
            //lol except not^ because if(studentId||0)
            scanf("%d", &id);
            if (id==0)
                return(0);
            else  if((id/10000000)==1)
                b++;
        }

        //get credit hours
        printf("Input total credit hours: ");
        int chours;
        scanf("%d", &chours);

        //instate or outstate
        b=0;
        while(b==0){
            printf("Enter 0 for instate, 1 for out of state tuition: ");
            scanf("%d", &state);
            if(state== 0 ||state== 1 )
                b++;
        }

        //engineering
        b=0;
        while(b==0){
            printf("How many credit hours in the college of engineering: ");
            scanf("%d", &ehours);
            if(ehours<=chours)
                b++;
            else
                printf("Engineering hours must be less than credit hours\n");
        }

        //tuition cost
        float tuition;
        if(state==0)
            tuition= (chours*282.00) + (ehours*90);
        else
            tuition= (chours*282.00) + (ehours*90) + (chours*557.30);

        //grant/scholarship money
        b=0;
        while(b==0){
            printf("Enter the total amount of grant and/or scholarship money: ");
            scanf("%f", &scholar);
            if(scholar>=tuition)
                printf("Amount must be >= tuition\n");
            else
                b++;
        }

        //Summary
        printf("***** TUITION STATEMENT *****\nStudent ID: %d\nCredit Hours: %d\n*****\nBase Tuition: $%.2f\nScholarships and Grants: $%.2f\n*****\nTUITION GRAND TOTAL: $%.2f\nEnter anything to continue: ", id, chours, tuition, scholar, (tuition-scholar));
        char a;
        scanf("%s", &a);

        printf("\f");
        b=0;
    }
    printf("\n");
    return(0);
}

