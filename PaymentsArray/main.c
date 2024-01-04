// This program shows the employees montly wage and prints it then calculates the total payment for the user.

// Created by Mehmet Akif Duran 4 Jan 2024

#include <stdio.h>
#include <stdlib.h>
#define N 5

float paymentArray(float paymentArr[]);


int main(void){ //Beginning of the main function.
    
    // Variable Declerations
    int workerNumber = N;
    
        
    float usersPayment[workerNumber];

    
    // Executable Statments
    printf("Welcome to payment calculator. This program calculates the total payment and shows payment one by one.\n");
    printf("This program calculates it for 5 worker. If you want to do it for more change the N vale in the beginnig.\n");
    
    
        //Function call for the first.
        paymentArray(&usersPayment[workerNumber]);
    
          
    
    
    return 0;
} // End of the main function.



float paymentArray(float paymentArr[]){
    
    int count;
    float totalPayment=0;

    
    for(count=0;count<N;count++){
        printf("Please enter the %d. employees wage \n: ", count+1);
        scanf("%f", &paymentArr[count]);
    }
    
    
    for(count=0;count<N;count++){
        printf("Your payment for the %d. employee is  %f\n", count+1 ,paymentArr[count]);
    }
    
    
    for(count=0;count<N;count++){
        totalPayment += paymentArr[count];
    }
    
    printf("Your total payment is:  %.2f  \n", totalPayment);
    
    return paymentArr[N];
}



