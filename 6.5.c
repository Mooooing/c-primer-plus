#include<math.h>
#include<stdio.h>
int main(){
    const double ANSWER = 3.14159;
    double response;
    printf("What is the value of pi?\n");
    scanf("%lf", &response);

    while(fabs(response-ANSWER)>0.0001){
        printf("try again!\n");
        scanf("%lf", &response);
    }
    printf("close enough!\n");
    return 0;
}